# sub_0027DFAA — lote 75

- Issue: [#7847](https://github.com/soldieg/ReBLACK-XBOX/issues/7847).
- Ghidra 12.1.3 local: corpo contíguo 0x0027DFAA–0x0027DFBD (inclusive), 20 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0027F0DA (0027f0b5), 0x0027F19E (0027f13b), 0x0027F735 (0027f6df), 0x0027F846 (0027f7cd), 0x0027FA49 (0027f93e), 0x00280F23 (00280eb2), 0x002812BA (00281258), 0x00281392 (002812df), 0x00281935 (002818b5), 0x00281A9A (0028193e), 0x00281BB1 (00281aa5), 0x00281C11 (00281bc4).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `b814d967bc73b0ce3cbeabba0b340b24c6b4babe88e4cc19d28d552174b702af`.
- Fonte C SHA-256: `9c462f932c36401fac0e4c56a6f66aee70a3419a491b4f4662a31fad4708a8a7`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0027DFAA`, tamanho 20 bytes; as seções COFF `.text$mn` são idênticas byte a byte (20/20 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `b814d967bc73b0ce3cbeabba0b340b24c6b4babe88e4cc19d28d552174b702af`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
