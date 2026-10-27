# sub_0002DAB0 — lote 72

- Issue: [#7456](https://github.com/soldieg/ReBLACK-XBOX/issues/7456).
- Ghidra 12.1.3 local: corpo contíguo 0x0002DAB0–0x0002DAE2 (inclusive), 51 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0002FD20 (0002fd20).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5687e97277a05119b57cd4224ba8c581c4352babdc08de1f42e7cbe051e7df36`.
- Fonte C SHA-256: `ee9f7c1ab8e2c7dd5ee366194cbee2935ef3f8974182682982ebbd067610adc2`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0002DAB0`, tamanho 51 bytes; as seções COFF `.text$mn` são idênticas byte a byte (51/51 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5687e97277a05119b57cd4224ba8c581c4352babdc08de1f42e7cbe051e7df36`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
