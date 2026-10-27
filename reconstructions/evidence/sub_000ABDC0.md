# sub_000ABDC0 — lote 71

- Issue: [#6505](https://github.com/soldieg/ReBLACK-XBOX/issues/6505).
- Ghidra 12.1.3 local: corpo contíguo 0x000ABDC0–0x000ABDE3 (inclusive), 36 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008D11E (0008d0b0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `8eab0e1c4ed1736ab3ed6390fe2ac5f94c2daa2e9f3967b882cbd73f5793c447`.
- Fonte C SHA-256: `8d0da4d188fc99ff91f378dd8dddbc5f7c949e1c6fdb59103730b148481e4fd6`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000ABDC0`, tamanho 36 bytes; as seções COFF `.text$mn` são idênticas byte a byte (36/36 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `8eab0e1c4ed1736ab3ed6390fe2ac5f94c2daa2e9f3967b882cbd73f5793c447`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
