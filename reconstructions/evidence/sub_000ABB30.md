# sub_000ABB30 — lote 74

- Issue: [#7708](https://github.com/soldieg/ReBLACK-XBOX/issues/7708).
- Ghidra 12.1.3 local: corpo contíguo 0x000ABB30–0x000ABB89 (inclusive), 90 bytes, 32 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008C3DC (0008c3d0).
- Callees diretos observados: 0x00082050 (00082050).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5f342852ac3f0be95916d8a0f6194b56e5de4ce81ef0ca8d8dd9ee5951127614`.
- Fonte C SHA-256: `ff57ee48dc1a36550ff44d6de13387889d8fdf99c9b51f67185624788231497f`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ABB30`, tamanho 90 bytes; as seções COFF `.text$mn` são idênticas byte a byte (90/90 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5f342852ac3f0be95916d8a0f6194b56e5de4ce81ef0ca8d8dd9ee5951127614`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
