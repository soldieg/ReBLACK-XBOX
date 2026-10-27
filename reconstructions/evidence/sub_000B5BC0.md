# sub_000B5BC0 — lote 71

- Issue: [#6538](https://github.com/soldieg/ReBLACK-XBOX/issues/6538).
- Ghidra 12.1.3 local: corpo contíguo 0x000B5BC0–0x000B5C09 (inclusive), 74 bytes, 27 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000B4D70 (000b4d70), 0x000B4E00 (000b4e00).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `7ea1001da2faab60e0f120f3fd81a760510530cf0e229cb12635cd3d56fdd5c2`.
- Fonte C SHA-256: `ff20f55845c9e5965b263f6c9bc5b108dfe7ccdfaa2db1be72b267d1bc54ecd7`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B5BC0`, tamanho 74 bytes; as seções COFF `.text$mn` são idênticas byte a byte (74/74 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `7ea1001da2faab60e0f120f3fd81a760510530cf0e229cb12635cd3d56fdd5c2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
