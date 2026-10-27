# sub_000AFF90 — lote 74

- Issue: [#7721](https://github.com/soldieg/ReBLACK-XBOX/issues/7721).
- Ghidra 12.1.3 local: corpo contíguo 0x000AFF90–0x000AFFE5 (inclusive), 86 bytes, 35 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC3F9 (000ac3d0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `39d62c066106bced35555e006543db7e2a888d8718c5e687c83e105818a42fa3`.
- Fonte C SHA-256: `b0dc982659a833f619af37d8ef9e38a94762268e5375f68aca6332258b1beaf2`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AFF90`, tamanho 86 bytes; as seções COFF `.text$mn` são idênticas byte a byte (86/86 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `39d62c066106bced35555e006543db7e2a888d8718c5e687c83e105818a42fa3`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
