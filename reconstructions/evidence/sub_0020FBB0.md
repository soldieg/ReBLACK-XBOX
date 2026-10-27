# sub_0020FBB0 — lote 70

- Issue: [#7420](https://github.com/soldieg/ReBLACK-XBOX/issues/7420).
- Ghidra 12.1.3 local: corpo contíguo 0x0020FBB0–0x0020FC4E (inclusive), 159 bytes, 36 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d82b6cdcf886bb5bd86a5a01eb58d01fe78c16f1834210494dbc5c4509314118`.
- Fonte C SHA-256: `36100e53150f6c6b043091cc075651db1eec35a4d7bfab0e1b2d59e9572dbe7a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0020FBB0`, tamanho 159 bytes; as seções COFF `.text$mn` são idênticas byte a byte (159/159 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d82b6cdcf886bb5bd86a5a01eb58d01fe78c16f1834210494dbc5c4509314118`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
