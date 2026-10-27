# sub_0004AAE0 — lote 76

- Issue: [#7946](https://github.com/soldieg/ReBLACK-XBOX/issues/7946).
- Ghidra 12.1.3 local: corpo contíguo 0x0004AAE0–0x0004AAE5 (inclusive), 6 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6a6b7f4dd77366bc2aa198493a10b8967b31dfd4ce6e85290600a66a9e86dca2`.
- Fonte C SHA-256: `be78a26c8af22111cc7148cee7d0152f9a4ac258b1ffa42bf96eb1bf8773d25a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004AAE0`, tamanho 6 bytes; as seções COFF `.text$mn` são idênticas byte a byte (6/6 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6a6b7f4dd77366bc2aa198493a10b8967b31dfd4ce6e85290600a66a9e86dca2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
