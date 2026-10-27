# sub_000A84AC — lote 71

- Issue: [#6517](https://github.com/soldieg/ReBLACK-XBOX/issues/6517).
- Ghidra 12.1.3 local: corpo contíguo 0x000A84AC–0x000A84DC (inclusive), 49 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A2DDF (000a2ddf), 0x000A84E3 (000a84e3), 0x000A8C67 (000a8c67).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6765d886748a39de91d8c544745449c35f65db0a207b112720ce469528fae8b1`.
- Fonte C SHA-256: `77384721a7422c26ad70609226ef7ccb25787f97b99b1ba203c7b462950dc5d6`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000A84AC`, tamanho 49 bytes; as seções COFF `.text$mn` são idênticas byte a byte (49/49 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6765d886748a39de91d8c544745449c35f65db0a207b112720ce469528fae8b1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
