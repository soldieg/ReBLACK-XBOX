# sub_001F7EC0 — lote 70

- Issue: [#7404](https://github.com/soldieg/ReBLACK-XBOX/issues/7404).
- Ghidra 12.1.3 local: corpo contíguo 0x001F7EC0–0x001F7F03 (inclusive), 68 bytes, 21 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001F37E0 (001f37e0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6f75f6cb5b50d6401f8d14a914b34ce66e318f423b1c8a3d23c55c42db8a6662`.
- Fonte C SHA-256: `75aea804ee36efa9f0324fd3ed234b8bd0a4ba5ff25f879ae94b2d5a01044ffe`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F7EC0`, tamanho 68 bytes; as seções COFF `.text$mn` são idênticas byte a byte (68/68 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6f75f6cb5b50d6401f8d14a914b34ce66e318f423b1c8a3d23c55c42db8a6662`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
