# sub_000B1BE0 — lote 75

- Issue: [#7796](https://github.com/soldieg/ReBLACK-XBOX/issues/7796).
- Ghidra 12.1.3 local: corpo contíguo 0x000B1BE0–0x000B1C08 (inclusive), 41 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000ACFF6 (000acf30).
- Callees diretos observados: 0x000B0260 (000b0260).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d4ccc99886b4262dd60c1e76a0f547d3ed16cc49c195fce65c8f4d1ce39d7eb6`.
- Fonte C SHA-256: `634e49979e66875bcbc0348fb624fff53a3f1ed4931c187cc2612cb2183897cf`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000B1BE0`, tamanho 41 bytes; as seções COFF `.text$mn` são idênticas byte a byte (41/41 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d4ccc99886b4262dd60c1e76a0f547d3ed16cc49c195fce65c8f4d1ce39d7eb6`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
