# sub_000A6BFD — lote 74

- Issue: [#7704](https://github.com/soldieg/ReBLACK-XBOX/issues/7704).
- Ghidra 12.1.3 local: corpo contíguo 0x000A6BFD–0x000A6C0C (inclusive), 16 bytes, 4 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000A67DB (NONE).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6fec74ca51ad994cf7e11c6f55967eb19f2b5c46e66c40d9e44791c65c938e24`.
- Fonte C SHA-256: `611df9f6877a4e1a11efb45086fd6783f6b6c9b65ee908759a415b666fd9b427`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000A6BFD`, tamanho 16 bytes; as seções COFF `.text$mn` são idênticas byte a byte (16/16 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6fec74ca51ad994cf7e11c6f55967eb19f2b5c46e66c40d9e44791c65c938e24`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
