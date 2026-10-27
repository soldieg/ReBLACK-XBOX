# sub_000B3DC0 — lote 80

- Issue: [#8343](https://github.com/soldieg/ReBLACK-XBOX/issues/8343).
- Ghidra 12.1.3 local: corpo contíguo 0x000B3DC0–0x000B3DCA (inclusive), 11 bytes, 6 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `9362aeca3a226ee29580df7f972547129b4e28376772808806d09a2b376551a9`.
- Fonte C SHA-256: `3b14746b331cc7f94463f32dfdf39bf3dc13a1eea9a4f170a515954ff327d19b`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000B3DC0`, tamanho 11 bytes; as seções COFF `.text$mn` são idênticas byte a byte (11/11 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `9362aeca3a226ee29580df7f972547129b4e28376772808806d09a2b376551a9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
