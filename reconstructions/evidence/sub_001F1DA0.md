# sub_001F1DA0 — lote 70

- Issue: [#7348](https://github.com/soldieg/ReBLACK-XBOX/issues/7348).
- Ghidra 12.1.3 local: corpo contíguo 0x001F1DA0–0x001F1DD9 (inclusive), 58 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d462865b3e0cc94f78b785cbe24f94f6f9b0572b6e924cb321e4b2b8a0632002`.
- Fonte C SHA-256: `92a63ca28c3954fbcd6e5f998035799a759851f0fef2d94f1a63846ed0f56fb6`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F1DA0`, tamanho 58 bytes; as seções COFF `.text$mn` são idênticas byte a byte (58/58 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d462865b3e0cc94f78b785cbe24f94f6f9b0572b6e924cb321e4b2b8a0632002`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
