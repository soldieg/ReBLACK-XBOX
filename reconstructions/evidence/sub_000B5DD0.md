# sub_000B5DD0 — lote 71

- Issue: [#6541](https://github.com/soldieg/ReBLACK-XBOX/issues/6541).
- Ghidra 12.1.3 local: corpo contíguo 0x000B5DD0–0x000B5E07 (inclusive), 56 bytes, 19 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A1AEB (000a1aeb), 0x000B4D70 (000b4d70).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6cedc58e7c6ecf621e98d6332a8bc1359476f37b315ade67ec99bf5f738b9f4e`.
- Fonte C SHA-256: `ccf091cf354d9fae76172d919de566e46c721df7ff247ee774f347dc02a28cee`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B5DD0`, tamanho 56 bytes; as seções COFF `.text$mn` são idênticas byte a byte (56/56 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6cedc58e7c6ecf621e98d6332a8bc1359476f37b315ade67ec99bf5f738b9f4e`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
