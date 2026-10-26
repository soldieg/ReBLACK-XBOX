# sub_0008DEE0 — lote 74

- Issue: [#7696](https://github.com/soldieg/ReBLACK-XBOX/issues/7696).
- Ghidra 12.1.3 local: corpo contíguo 0x0008DEE0–0x0008DEE7 (inclusive), 8 bytes, 3 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008BA11 (NONE), 0x0008EA25 (0008ea20).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `50f149280740b998842c17556718c4d32b9cb9a1ea24a362aa47a52de0be15ab`.
- Fonte C SHA-256: `534b2528fa0ad03c50c4f2c8f31f552d10a5653d053ff6df84c09bcc08623ecd`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008DEE0`, tamanho 8 bytes; as seções COFF `.text$mn` são idênticas byte a byte (8/8 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `50f149280740b998842c17556718c4d32b9cb9a1ea24a362aa47a52de0be15ab`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
