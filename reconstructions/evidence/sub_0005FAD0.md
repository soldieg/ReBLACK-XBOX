# sub_0005FAD0 — lote 78

- Issue: [#8095](https://github.com/soldieg/ReBLACK-XBOX/issues/8095).
- Ghidra 12.1.3 local: corpo contíguo 0x0005FAD0–0x0005FAEB (inclusive), 28 bytes, 9 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 2.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `c48baacbbb732960989e2d6ef3f0b75a3715c6aebc4b2babbc1cd4f90bb73735`.
- Fonte C SHA-256: `b659fec6624c62d92a9d50596fb950572a29175147d249f6bd08d279360b2346`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005FAD0`, tamanho 28 bytes; as seções COFF `.text$mn` são idênticas byte a byte (28/28 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `c48baacbbb732960989e2d6ef3f0b75a3715c6aebc4b2babbc1cd4f90bb73735`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
