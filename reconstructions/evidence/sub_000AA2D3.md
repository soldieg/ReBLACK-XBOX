# sub_000AA2D3 — lote 79

- Issue: [#8245](https://github.com/soldieg/ReBLACK-XBOX/issues/8245).
- Ghidra 12.1.3 local: corpo contíguo 0x000AA2D3–0x000AA2FC (inclusive), 42 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A3484 (000a3484), 0x000A82DB (000a82db).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `87be6ff586be8eb8686f5898baf1ab62d54246c88c69a7683ae02d2799d8651c`.
- Fonte C SHA-256: `5475d7200eae3490f8bd535c4eb35136ab7d75bf2566e81c1daf064224441018`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AA2D3`, tamanho 42 bytes; as seções COFF `.text$mn` são idênticas byte a byte (42/42 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `87be6ff586be8eb8686f5898baf1ab62d54246c88c69a7683ae02d2799d8651c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
