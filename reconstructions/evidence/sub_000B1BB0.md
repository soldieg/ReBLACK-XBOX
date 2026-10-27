# sub_000B1BB0 — lote 75

- Issue: [#7797](https://github.com/soldieg/ReBLACK-XBOX/issues/7797).
- Ghidra 12.1.3 local: corpo contíguo 0x000B1BB0–0x000B1BD8 (inclusive), 41 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000ACFD9 (000acf30).
- Callees diretos observados: 0x000B0200 (000b0200).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `166d61d2676027d13711836b1e80536a8338117e98dbaea8688650ce33592a32`.
- Fonte C SHA-256: `3e1fd19ea71c95bbad467976fb7ed88b7286a382b563beb0248444a9d54e56c8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000B1BB0`, tamanho 41 bytes; as seções COFF `.text$mn` são idênticas byte a byte (41/41 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `166d61d2676027d13711836b1e80536a8338117e98dbaea8688650ce33592a32`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
