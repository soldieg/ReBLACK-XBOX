# sub_000ABD70 — lote 71

- Issue: [#6508](https://github.com/soldieg/ReBLACK-XBOX/issues/6508).
- Ghidra 12.1.3 local: corpo contíguo 0x000ABD70–0x000ABDB9 (inclusive), 74 bytes, 32 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008D0F2 (0008d0b0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `ea0d6cdbe289bff215abcf1044938c37f3edaf913004a71be2e62835c7c0a5f5`.
- Fonte C SHA-256: `98bc167140676b5221bd74726ee135c529a8819d3a517b97ed3cfbf139760040`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000ABD70`, tamanho 74 bytes; as seções COFF `.text$mn` são idênticas byte a byte (74/74 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `ea0d6cdbe289bff215abcf1044938c37f3edaf913004a71be2e62835c7c0a5f5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
