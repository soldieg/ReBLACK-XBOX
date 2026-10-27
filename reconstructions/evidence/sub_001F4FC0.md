# sub_001F4FC0 — lote 70

- Issue: [#7382](https://github.com/soldieg/ReBLACK-XBOX/issues/7382).
- Ghidra 12.1.3 local: corpo contíguo 0x001F4FC0–0x001F4FF9 (inclusive), 58 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d61a1d4c9f9adbefae765e2b117b5c7f98b5ba11e365f02647d19d90d3518f6b`.
- Fonte C SHA-256: `74f5099af74bebd71fad7d1fad30934b582eccf15e108635a7d1d021d7701e8a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F4FC0`, tamanho 58 bytes; as seções COFF `.text$mn` são idênticas byte a byte (58/58 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d61a1d4c9f9adbefae765e2b117b5c7f98b5ba11e365f02647d19d90d3518f6b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
