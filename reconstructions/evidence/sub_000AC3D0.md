# sub_000AC3D0 — lote 75

- Issue: [#7786](https://github.com/soldieg/ReBLACK-XBOX/issues/7786).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC3D0–0x000AC411 (inclusive), 66 bytes, 22 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC7CB (000ac7c0).
- Callees diretos observados: 0x00022DD0 (00022dd0), 0x00022E8C (00022e8c), 0x000AFF90 (000aff90).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6e8fe7a4f2bb15a1fad0387c3c194ab6dca547b10717e1e25139cafd560b3733`.
- Fonte C SHA-256: `3d3a19c4db6cc719b448770229528cc8ccd552dc37255dd0812a5d607e66e66a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC3D0`, tamanho 66 bytes; as seções COFF `.text$mn` são idênticas byte a byte (66/66 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6e8fe7a4f2bb15a1fad0387c3c194ab6dca547b10717e1e25139cafd560b3733`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
