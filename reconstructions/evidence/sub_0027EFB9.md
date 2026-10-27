# sub_0027EFB9 — lote 75

- Issue: [#7852](https://github.com/soldieg/ReBLACK-XBOX/issues/7852).
- Ghidra 12.1.3 local: corpo contíguo 0x0027EFB9–0x0027EFBC (inclusive), 4 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `40f518adf73e5660633d24102126d80bf89392d6a9208918208ad13bef16b5dc`.
- Fonte C SHA-256: `f8001d4acd1c649c769f0cf71aa3ee75423220fb1467114c61dd68474da6cb22`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0027EFB9`, tamanho 4 bytes; as seções COFF `.text$mn` são idênticas byte a byte (4/4 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `40f518adf73e5660633d24102126d80bf89392d6a9208918208ad13bef16b5dc`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
