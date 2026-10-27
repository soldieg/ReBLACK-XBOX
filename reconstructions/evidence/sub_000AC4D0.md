# sub_000AC4D0 — lote 75

- Issue: [#7788](https://github.com/soldieg/ReBLACK-XBOX/issues/7788).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC4D0–0x000AC5FD (inclusive), 302 bytes, 108 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC86B (000ac860).
- Callees diretos observados: 0x00022DD0 (00022dd0), 0x00022E8C (00022e8c), 0x0008B5B0 (0008b5b0), 0x000B0200 (000b0200), 0x000B0260 (000b0260).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `43280635d03f8767fbf01ba087ee57a762afaf5399dd0fce8019ca2d9fee3cd2`.
- Fonte C SHA-256: `e11095af22581adc8be8481ac237b343e39463de377564cea9f6c0cc2934c70c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC4D0`, tamanho 302 bytes; as seções COFF `.text$mn` são idênticas byte a byte (302/302 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `43280635d03f8767fbf01ba087ee57a762afaf5399dd0fce8019ca2d9fee3cd2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
