# sub_0004CBF0 — lote 77

- Issue: [#7999](https://github.com/soldieg/ReBLACK-XBOX/issues/7999).
- Ghidra 12.1.3 local: corpo contíguo 0x0004CBF0–0x0004CC3D (inclusive), 78 bytes, 28 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5b9f088182543c7b6eb684f92e866c38d10f3a1d8fa950f982aaa03a004ab346`.
- Fonte C SHA-256: `fe94fce95b1167f350c68ca8692b105e865ef99151d144e41b8c7dd2ced1e327`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004CBF0`, tamanho 78 bytes; as seções COFF `.text$mn` são idênticas byte a byte (78/78 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5b9f088182543c7b6eb684f92e866c38d10f3a1d8fa950f982aaa03a004ab346`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
