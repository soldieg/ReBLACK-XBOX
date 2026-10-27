# sub_000A6DD1 — lote 74

- Issue: [#7705](https://github.com/soldieg/ReBLACK-XBOX/issues/7705).
- Ghidra 12.1.3 local: corpo contíguo 0x000A6DD1–0x000A6DD5 (inclusive), 5 bytes, 3 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6a1742d76ba3c943a35d37d4c18677adb431a1809475f8ec6db929cff30d8052`.
- Fonte C SHA-256: `d6de5cceb8e67873223bea9bf1c551f41679243d832c9b9a9f5e6c282aa6ed8c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000A6DD1`, tamanho 5 bytes; as seções COFF `.text$mn` são idênticas byte a byte (5/5 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6a1742d76ba3c943a35d37d4c18677adb431a1809475f8ec6db929cff30d8052`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
