# sub_000E1FE0 — lote 74

- Issue: [#7732](https://github.com/soldieg/ReBLACK-XBOX/issues/7732).
- Ghidra 12.1.3 local: corpo contíguo 0x000E1FE0–0x000E202B (inclusive), 76 bytes, 19 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000E3585 (000e3580), 0x0010D4FF (0010d420), 0x0010D722 (NONE).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 3; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d254697262bda1f1bc5b2d8298d1239686dc5a6b89a5ca5640528cd462b59d6b`.
- Fonte C SHA-256: `b4cbb92b342438424a12a6fb51f76fb3f52fd165e8c7b7e74c803fba3abb757e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000E1FE0`, tamanho 76 bytes; as seções COFF `.text$mn` são idênticas byte a byte (76/76 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d254697262bda1f1bc5b2d8298d1239686dc5a6b89a5ca5640528cd462b59d6b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
