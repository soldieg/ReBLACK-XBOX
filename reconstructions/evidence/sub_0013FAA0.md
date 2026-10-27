# sub_0013FAA0 — lote 74

- Issue: [#1034](https://github.com/soldieg/ReBLACK-XBOX/issues/1034).
- Ghidra 12.1.3 local: corpo contíguo 0x0013FAA0–0x0013FB3F (inclusive), 160 bytes, 56 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x00145606 (00145250), 0x00149DBE (NONE), 0x00149F54 (00149f10).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6cac89aae59d5db187cafaba7246cb88f62a1a1c9aa8d9b2d8c5d501b6d0d66b`.
- Fonte C SHA-256: `80f504a7f679a75ab49fbe0b8fffff34230c0c03e67235df90d3b391e838986b`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0013FAA0`, tamanho 160 bytes; as seções COFF `.text$mn` são idênticas byte a byte (160/160 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6cac89aae59d5db187cafaba7246cb88f62a1a1c9aa8d9b2d8c5d501b6d0d66b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
