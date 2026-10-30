# Código reconstruído completo do BLACK Xbox

Este pacote entrega o código reconstruído como fontes compiláveis e uma listagem integral sem cabeçalhos de proveniência.

- [`black_complete_source.txt`](black_complete_source.txt): listagem das 13.676 definições de função/entrada, ordenadas pelo endereço candidato no XBE. Não inclui os marcadores `SOURCE FILE` que apareciam na versão anterior.
- [`CMakeLists.txt`](CMakeLists.txt): projeto que compila as fontes canônicas em `../functions/` como unidades C separadas e cria `black_public_functions.lib` com todos os objetos.
- [`DEBUG-DEPURACAO.md`](DEBUG-DEPURACAO.md): instruções para gerar a DLL host Debug, PDB e MAP usados para inspecionar o conjunto linkado.
- [`black_complete_source.zip`](black_complete_source.zip): fontes individuais por função, preservando a organização necessária para compilar e resolver declarações entre unidades.
- [`black_public_functions.lib`](black_public_functions.lib): biblioteca host x86 compilada do conjunto completo.
- [`objdiff-completo-por-funcao.csv`](objdiff-completo-por-funcao.csv), [`validacao-byte-a-byte.csv`](validacao-byte-a-byte.csv), [`resumo-objdiff.json`](resumo-objdiff.json) e [`manifest.json`](manifest.json): evidência e hashes.

## Compilar

Com CMake 4.0+, Visual Studio e MSVC x86:

```powershell
cmake -S reconstructions/codigo-completo -B build/black-reconstructed -A Win32
cmake --build build/black-reconstructed --config Release --target black_public_functions
```

Para a build de depuração com todos os módulos linkados, siga `DEBUG-DEPURACAO.md`. A DLL/PDB/MAP são artefatos locais ignorados pelo Git.

O CMake compila cada `.c` separadamente e arquiva todos os objetos. Assim as declarações locais de cada função não colidem como na tentativa de achatar tudo numa única unidade C. O arquivo TXT é uma leitura integral do código; para compilar, use o projeto CMake e as fontes individuais.

## Escopo atual

As fontes preservam reconstruções x86 do snapshot GitHub, inclusive corpos `__declspec(naked)`/assembly e chamadas entre símbolos. O projeto gera biblioteca MSVC Win32; ele não é um XBE, não executa no Xbox e não é ainda um port semântico para Windows x64. Um port para PC precisará traduzir assembly, ABI, dados/globais e imports.

A compilação e a comparação cobrem 13.676 unidades. Os intervalos candidatos conferiram byte a byte após replay de relocations, mas duas fronteiras (`sub_00581A58` e `xbe_entry_point`) ainda não têm confirmação independente. ObjDiff manteve 16 casos na faixa de revisão contra objetos candidatos marcados `complete=false`; eles não são promovidos a passes por score.
