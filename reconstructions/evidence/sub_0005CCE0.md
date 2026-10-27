# sub_0005CCE0 — lote 78

- Issue: [#8067](https://github.com/soldieg/ReBLACK-XBOX/issues/8067).
- Ghidra 12.1.3 local: corpo contíguo 0x0005CCE0–0x0005CCE5 (inclusive), 6 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `ff33be552c31371b97bcf0f9bfb16d0ea394512de120c435eb8032f81554630a`.
- Fonte C SHA-256: `3b8476f4c2f478664a4f0e3f3081c7c765b94b037b868e4b769c0f0461106174`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005CCE0`, tamanho 6 bytes; as seções COFF `.text$mn` são idênticas byte a byte (6/6 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `ff33be552c31371b97bcf0f9bfb16d0ea394512de120c435eb8032f81554630a`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
