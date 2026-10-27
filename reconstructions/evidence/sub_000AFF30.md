# sub_000AFF30 — lote 74

- Issue: [#7718](https://github.com/soldieg/ReBLACK-XBOX/issues/7718).
- Ghidra 12.1.3 local: corpo contíguo 0x000AFF30–0x000AFF5B (inclusive), 44 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC347 (000ac2f0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `12f2c549b96280d56bbc34f9466e0ead4e99bb07269736fb677cb68f7e88012e`.
- Fonte C SHA-256: `0363fa99ddb35310812dc293131e831d057ca70e494a3837f17d46e67b43b1c5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AFF30`, tamanho 44 bytes; as seções COFF `.text$mn` são idênticas byte a byte (44/44 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `12f2c549b96280d56bbc34f9466e0ead4e99bb07269736fb677cb68f7e88012e`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
