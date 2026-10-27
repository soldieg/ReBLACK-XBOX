# sub_000B2EB0 — lote 80

- Issue: [#8292](https://github.com/soldieg/ReBLACK-XBOX/issues/8292).
- Ghidra 12.1.3 local: corpo contíguo 0x000B2EB0–0x000B2EB2 (inclusive), 3 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619`.
- Fonte C SHA-256: `dc9f77db3070e630fe9b40c8401d8cb8bfa6cc18f9f03a42e550451a608ff318`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000B2EB0`, tamanho 3 bytes; as seções COFF `.text$mn` são idênticas byte a byte (3/3 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
