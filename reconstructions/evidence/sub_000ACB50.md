# sub_000ACB50 — lote 79

- Issue: [#8258](https://github.com/soldieg/ReBLACK-XBOX/issues/8258).
- Ghidra 12.1.3 local: corpo contíguo 0x000ACB50–0x000ACB8B (inclusive), 60 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00081860 (00081860), 0x00081B70 (00081b70), 0x000AC8C0 (000ac8c0).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `e64ab259184dccf752b01f0cb0d6f41cc33b9c30118381fa31fb86a49db959a4`.
- Fonte C SHA-256: `4a215b1c5fd25e9279f53126c2fe20c4276c30c3af6c2ea650b37d07fdd9f1b8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ACB50`, tamanho 60 bytes; as seções COFF `.text$mn` são idênticas byte a byte (60/60 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `e64ab259184dccf752b01f0cb0d6f41cc33b9c30118381fa31fb86a49db959a4`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
