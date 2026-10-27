# sub_0004BFF0 — lote 72

- Issue: [#7516](https://github.com/soldieg/ReBLACK-XBOX/issues/7516).
- Ghidra 12.1.3 local: corpo contíguo 0x0004BFF0–0x0004C03D (inclusive), 78 bytes, 28 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `ff1f6d4766caaf0f141808b8056f0ebc8e7f820c747a8f81063da57421863189`.
- Fonte C SHA-256: `6d124add0895eb5c6e085810597bb9e1383caf87dfdafe1303c4b0ae4d9bf57b`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004BFF0`, tamanho 78 bytes; as seções COFF `.text$mn` são idênticas byte a byte (78/78 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `ff1f6d4766caaf0f141808b8056f0ebc8e7f820c747a8f81063da57421863189`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
