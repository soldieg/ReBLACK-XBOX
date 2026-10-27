# sub_0005CDC0 — lote 78

- Issue: [#8068](https://github.com/soldieg/ReBLACK-XBOX/issues/8068).
- Ghidra 12.1.3 local: corpo contíguo 0x0005CDC0–0x0005CDC5 (inclusive), 6 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `548ac73d16937a0d8f269fdf3d00ec79fce5a72362b97e0272c41c151d7c1c73`.
- Fonte C SHA-256: `48fcb5a484291fdba9a4a04c38814fdb84dcf1109533f55ae050bdc73f3afcb3`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005CDC0`, tamanho 6 bytes; as seções COFF `.text$mn` são idênticas byte a byte (6/6 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `548ac73d16937a0d8f269fdf3d00ec79fce5a72362b97e0272c41c151d7c1c73`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
