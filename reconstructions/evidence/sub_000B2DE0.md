# sub_000B2DE0 — lote 71

- Issue: [#6526](https://github.com/soldieg/ReBLACK-XBOX/issues/6526).
- Ghidra 12.1.3 local: corpo contíguo 0x000B2DE0–0x000B2E1D (inclusive), 62 bytes, 27 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00211300 (00211300).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d11a9f6520ae43929182cc651f06ae19a73f2d2ca1b2f00d1b6ec58ff8064c6b`.
- Fonte C SHA-256: `a1ed122dfca93395fd5fd40890e599795af7ceaf195f4b7ce0411a30dcdcf5dc`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B2DE0`, tamanho 62 bytes; as seções COFF `.text$mn` são idênticas byte a byte (62/62 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d11a9f6520ae43929182cc651f06ae19a73f2d2ca1b2f00d1b6ec58ff8064c6b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
