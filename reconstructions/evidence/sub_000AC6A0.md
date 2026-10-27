# sub_000AC6A0 — lote 75

- Issue: [#7789](https://github.com/soldieg/ReBLACK-XBOX/issues/7789).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC6A0–0x000AC6BE (inclusive), 31 bytes, 10 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC8AB (000ac8a0).
- Callees diretos observados: 0x000AEEF0 (000aeef0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `cfdd3e90f3f3af0898f262b8e0ce78b2d5d3c1b9920217591116b333c27e8539`.
- Fonte C SHA-256: `bc860cac74d40dda268ec8c4643097769977b622e708a107b9043ce6a67a053a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC6A0`, tamanho 31 bytes; as seções COFF `.text$mn` são idênticas byte a byte (31/31 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `cfdd3e90f3f3af0898f262b8e0ce78b2d5d3c1b9920217591116b333c27e8539`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
