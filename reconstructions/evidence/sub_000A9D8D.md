# sub_000A9D8D — lote 79

- Issue: [#8243](https://github.com/soldieg/ReBLACK-XBOX/issues/8243).
- Ghidra 12.1.3 local: corpo contíguo 0x000A9D8D–0x000A9DAB (inclusive), 31 bytes, 9 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0002536F (0002536f), 0x000A2DDF (000a2ddf).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `a7a99a4fe3929a17d3d935ad1f82197326c23266ab617ac0892c4101c4c2cd29`.
- Fonte C SHA-256: `80db2aa2ced5eec0db29142ecbeccfcf075bf3f813aee07b41786265ba471f24`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000A9D8D`, tamanho 31 bytes; as seções COFF `.text$mn` são idênticas byte a byte (31/31 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `a7a99a4fe3929a17d3d935ad1f82197326c23266ab617ac0892c4101c4c2cd29`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
