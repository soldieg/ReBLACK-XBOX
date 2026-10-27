# sub_000AC1C0 — lote 75

- Issue: [#7782](https://github.com/soldieg/ReBLACK-XBOX/issues/7782).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC1C0–0x000AC2A8 (inclusive), 233 bytes, 87 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC6EB (000ac6e0).
- Callees diretos observados: 0x00022DD0 (00022dd0), 0x00022E8C (00022e8c), 0x000AEEC0 (000aeec0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `0c38c8baaeea7fcbc904bd9e1f1dcc98c639195b687811a1ea61ed3657329314`.
- Fonte C SHA-256: `b42a0af0700250c1374c7170259a1eb1d89462f94db2e61fd51546e95eddb346`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC1C0`, tamanho 233 bytes; as seções COFF `.text$mn` são idênticas byte a byte (233/233 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `0c38c8baaeea7fcbc904bd9e1f1dcc98c639195b687811a1ea61ed3657329314`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
