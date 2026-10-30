# Código completo reconstruído do BLACK Xbox

Este pacote reúne o código publicado no repositório e a compilação completa feita para comparação com o XBE original.

- [`black_complete_source.txt`](black_complete_source.txt): texto bruto único com o conteúdo das 13.676 fontes `.c`, cada uma identificada pelo caminho. Inclui `sub_00016630.c` corrigida. O arquivo é um dump para leitura; os marcadores separam unidades de compilação e não o tornam uma única unidade C compilável.
- [`black_complete_source.zip`](black_complete_source.zip): as mesmas 13.676 fontes como arquivos `.c` separados, prontas para extrair e compilar com o projeto.
- [`black_public_functions.lib`](black_public_functions.lib): biblioteca estática host x86 com os 13.676 objetos compilados. Não é executável nem XBE.
- [`validacao-byte-a-byte.csv`](validacao-byte-a-byte.csv): resultado individual por fonte contra os intervalos candidatos do XBE.
- `resumo-validacao.json` e `manifest.json`: contagens, versões, flags e hashes.

A tentativa de compilar os 13.676 arquivos como uma única unidade C falha porque algumas fontes declaram funções com assinaturas incompatíveis entre arquivos (MSVC C2371). Por isso o pacote preserva as unidades C independentes; a biblioteca estática reúne todos os objetos sem fundir os arquivos-fonte.

Resultado do build: 13.676/13.676 fontes compiladas. Resultado da comparação de bytes: 13.676/13.676 intervalos candidatos iguais após a correção local. Duas fronteiras ainda não estão confirmadas pelo tracker; esses casos permanecem candidatos e não recebem `EXACT_PASS`. Isso não comprova link Xbox, geração de XBE, execução ou gameplay.
