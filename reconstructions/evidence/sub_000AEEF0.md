# sub_000AEEF0 — lote 75

- Issue: [#7795](https://github.com/soldieg/ReBLACK-XBOX/issues/7795).
- Ghidra 12.1.3 local: corpo contíguo 0x000AEEF0–0x000AEF16 (inclusive), 39 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC6B6 (000ac6a0).
- Callees diretos observados: 0x0008B580 (0008b580), 0x000AE7B0 (000ae7b0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6d781552faed6107b5b73a2cebc16a215b8370e0582a3c1d7a0c7660e8eb99a1`.
- Fonte C SHA-256: `4b0b16920bff05fccf4435cfc041d53a4f6c4b0dc744261c7c21664fd247438d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AEEF0`, tamanho 39 bytes; as seções COFF `.text$mn` são idênticas byte a byte (39/39 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6d781552faed6107b5b73a2cebc16a215b8370e0582a3c1d7a0c7660e8eb99a1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
