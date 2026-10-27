# sub_0007FCE0 — lote 70

- Issue: [#6473](https://github.com/soldieg/ReBLACK-XBOX/issues/6473).
- Ghidra 12.1.3 local: corpo contíguo 0x0007FCE0–0x0007FD2B (inclusive), 76 bytes, 30 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `a963582d0436e35cd21693600d678f7a5bc5c447416022ad626bfcf9e4185427`.
- Fonte C SHA-256: `b464041acc42e44c23d1b439740b1b97b91605dff7836c0c2216665f72774dbf`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0007FCE0`, tamanho 76 bytes; as seções COFF `.text$mn` são idênticas byte a byte (76/76 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `a963582d0436e35cd21693600d678f7a5bc5c447416022ad626bfcf9e4185427`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
