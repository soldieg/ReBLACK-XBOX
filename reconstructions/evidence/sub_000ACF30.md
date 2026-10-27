# sub_000ACF30 — lote 75

- Issue: [#7790](https://github.com/soldieg/ReBLACK-XBOX/issues/7790).
- Ghidra 12.1.3 local: corpo contíguo 0x000ACF30–0x000AD00E (inclusive), 223 bytes, 94 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AD13B (000ad130).
- Callees diretos observados: 0x000A34D4 (000a34d4), 0x000B0CD0 (000b0cd0), 0x000B0EE0 (000b0ee0), 0x000B1BB0 (000b1bb0), 0x000B1BE0 (000b1be0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `110efa18bc1508bcdc52a66b20bc20e1ac4bb6b7319b0c843f95ca08e02f2cbd`.
- Fonte C SHA-256: `bd2ac5d7ac928b8a2c1da689d829f287aac988dcb9ae90d713e561363a457659`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ACF30`, tamanho 223 bytes; as seções COFF `.text$mn` são idênticas byte a byte (223/223 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `110efa18bc1508bcdc52a66b20bc20e1ac4bb6b7319b0c843f95ca08e02f2cbd`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
