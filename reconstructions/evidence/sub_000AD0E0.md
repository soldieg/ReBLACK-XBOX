# sub_000AD0E0 — lote 75

- Issue: [#7791](https://github.com/soldieg/ReBLACK-XBOX/issues/7791).
- Ghidra 12.1.3 local: corpo contíguo 0x000AD0E0–0x000AD108 (inclusive), 41 bytes, 16 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AD1DB (000ad1d0).
- Callees diretos observados: 0x0008B4F0 (0008b4f0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `b714f1c853ad6c42cd571d8ec640620229475fd85086ead8877f2fa163a9d4e2`.
- Fonte C SHA-256: `93823fb8f0386d93387e54c6d469d629282f22a205aac1c45f5e0b646168deb5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AD0E0`, tamanho 41 bytes; as seções COFF `.text$mn` são idênticas byte a byte (41/41 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `b714f1c853ad6c42cd571d8ec640620229475fd85086ead8877f2fa163a9d4e2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
