# sub_000CC4E0 — lote 64

- Issue: [#6768](https://github.com/soldieg/ReBLACK-XBOX/issues/6768).
- Ghidra 12.1.3 local: corpo contíguo 0x000CC4E0–0x000CC523 (inclusive), 68 bytes, 20 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000C4390 (000c4390).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `f217c74c5f4c7806507d7a9558a0718403cca61f2d9893535e9c70cacf575a68`.
- Fonte C SHA-256: `e4b92eb7bcf97f8a7e2bf695b12dfa3bf57d9b5afb4bea808c67724a6df35753`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CC4E0`, tamanho 68 bytes; seção COFF `.text$mn` idêntica byte a byte (68/68 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `075f349e845d54706ecb7e8f54df1cf977a5be722e106d52c6478a75cf320447`; objeto compilado: `8aa9ce58e4a4b78c7889e5331f71a8354e09eda48b0d4d3fa69f78bc017d1e9b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
