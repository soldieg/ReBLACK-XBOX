# sub_000AE7F0 — lote 80

- Issue: [#8271](https://github.com/soldieg/ReBLACK-XBOX/issues/8271).
- Ghidra 12.1.3 local: corpo contíguo 0x000AE7F0–0x000AE808 (inclusive), 25 bytes, 10 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0008B5E0 (0008b5e0).
- Referências de dados entrantes observadas: 2.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `841a1018bb1308525566d3535eba32f713dcdb93a6bd795bc5565b4d41f27131`.
- Fonte C SHA-256: `2141a674062032b06a16ea73f1471292cbb45cbcb50a8eae73ac250124fdc7b7`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AE7F0`, tamanho 25 bytes; as seções COFF `.text$mn` são idênticas byte a byte (25/25 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `841a1018bb1308525566d3535eba32f713dcdb93a6bd795bc5565b4d41f27131`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
