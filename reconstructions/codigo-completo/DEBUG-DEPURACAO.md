# Build de depuração do conjunto reconstruído

O alvo `black_reconstructed_debug` compila as 13.676 fontes canônicas no modo Debug e passa todos os objetos diretamente ao linker. Ele gera uma DLL host sem ponto de entrada, um PDB completo e um MAP com as funções e os endereços atribuídos pelo linker. O compilador mantém os símbolos de depuração (`/Zi`), mas desativa a instrumentação `/RTC` do MSVC, que adicionaria dependências de verificação de runtime aos objetos reconstruídos.

## Gerar

Com CMake 4.0+, no PowerShell a partir da raiz do repositório:

```powershell
cmake -S reconstructions/codigo-completo -B build/black-debug-clean -G "Visual Studio 18 2026" -A Win32
cmake --build build/black-debug-clean --config Debug --target black_reconstructed_debug --parallel 8
```

Os artefatos finais são gravados em `reconstructions/codigo-completo/debug/`:

- `black_reconstructed_debug.dll`: imagem host com todos os objetos do conjunto.
- `black_reconstructed_debug.pdb`: símbolos e informação de depuração para a DLL.
- `black_reconstructed_debug.map`: tabela de símbolos e endereços do link.
Os `.obj` e seus PDBs intermediários ficam em `build/black-debug-clean/`. Os artefatos finais de depuração em `debug/` são locais e ignorados pelo Git. Use um diretório de build novo; caches antigos podem guardar flags `/RTC` incompatíveis.

## Resultado verificado

A build local de 30/10/2026 compilou 13.676 objetos e linkou a DLL com código de saída 0, sem erros LNK. O MAP contém os 13.676 símbolos de fonte, incluindo os seis métodos `__fastcall` com decoração de nome. A DLL é x86 e tem entry point zero (`/NOENTRY`).

## Inspecionar

Abra a DLL no Visual Studio e carregue o PDB correspondente. O MAP também pode ser aberto como texto para procurar `sub_XXXXXXXX` e conferir o endereço atribuído a cada símbolo no host. Verifique que DLL e PDB pertencem à mesma execução do build.

## Limites

Esta DLL serve para inspeção dos símbolos e do layout produzido pelo linker host. O MAP coloca o código em `0x10000000`, não nos endereços do XBE. As chamadas e os dados reconstruídos ainda podem depender dos endereços/ABI do XBE; por isso, não carregue a DLL para executar funções como se fosse o jogo. O build e os símbolos não provam runtime funcional no Windows nem no Xbox.
