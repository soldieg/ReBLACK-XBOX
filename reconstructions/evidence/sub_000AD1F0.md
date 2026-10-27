# sub_000AD1F0 — lote 80

- Issue: [#8263](https://github.com/soldieg/ReBLACK-XBOX/issues/8263).
- Ghidra 12.1.3 local: corpo contíguo 0x000AD1F0–0x000AD208 (inclusive), 25 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000AD110 (000ad110).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `f336f98da819d0396c4dafae9513086eb964768559d2d19dd8d3611d5b7d3db7`.
- Fonte C SHA-256: `894d452eb68eb5713c83229b46cd6efa52c74b21bb187e898cef287dc9f106ba`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AD1F0`, tamanho 25 bytes; as seções COFF `.text$mn` são idênticas byte a byte (25/25 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `f336f98da819d0396c4dafae9513086eb964768559d2d19dd8d3611d5b7d3db7`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
