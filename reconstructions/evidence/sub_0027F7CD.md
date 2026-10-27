# sub_0027F7CD — lote 75

- Issue: [#7853](https://github.com/soldieg/ReBLACK-XBOX/issues/7853).
- Ghidra 12.1.3 local: corpo contíguo 0x0027F7CD–0x0027F883 (inclusive), 183 bytes, 61 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0027EFA0 (0027ef95), 0x002807E2 (0028079d).
- Callees diretos observados: 0x0027DFAA (0027dfaa), 0x0027F63E (0027f63e), 0x0027F677 (0027f677), 0x0027F6B0 (0027f6b0), 0x0027F755 (0027f755).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `c74dfbcaff3c4fa7458c7f8fe8e20fe9657487edb6cb622d53ad0b6464f678f3`.
- Fonte C SHA-256: `1108b3d81b5fe6abe2a96f22a2ddf1d4081d7078cf716276952fb7a3f051e619`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0027F7CD`, tamanho 183 bytes; as seções COFF `.text$mn` são idênticas byte a byte (183/183 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `c74dfbcaff3c4fa7458c7f8fe8e20fe9657487edb6cb622d53ad0b6464f678f3`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
