# sub_0004ABE0 — lote 76

- Issue: [#7948](https://github.com/soldieg/ReBLACK-XBOX/issues/7948).
- Ghidra 12.1.3 local: corpo contíguo 0x0004ABE0–0x0004ABE7 (inclusive), 8 bytes, 3 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5317614f6858ed80def456dc895d20ee7cfd016cadc93c3e2c909b7c4c5ee04f`.
- Fonte C SHA-256: `78d858f2830c81d0bb6394e7265f2b800bd976cdb7ff7ad8b2b2ebeef51e743a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004ABE0`, tamanho 8 bytes; as seções COFF `.text$mn` são idênticas byte a byte (8/8 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5317614f6858ed80def456dc895d20ee7cfd016cadc93c3e2c909b7c4c5ee04f`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
