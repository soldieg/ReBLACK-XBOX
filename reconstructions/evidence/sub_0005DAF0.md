# sub_0005DAF0 — lote 78

- Issue: [#8081](https://github.com/soldieg/ReBLACK-XBOX/issues/8081).
- Ghidra 12.1.3 local: corpo contíguo 0x0005DAF0–0x0005DB4F (inclusive), 96 bytes, 34 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `0196b9a80e48cc1dfc46a948b88aad0131f3a6a6410572e376e2cf7cf66c1539`.
- Fonte C SHA-256: `68b5d2761f45bdf4d5988e8891ad7f232b2a58e94461741d7a5dd2c650eac819`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005DAF0`, tamanho 96 bytes; as seções COFF `.text$mn` são idênticas byte a byte (96/96 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `0196b9a80e48cc1dfc46a948b88aad0131f3a6a6410572e376e2cf7cf66c1539`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
