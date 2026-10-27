# sub_0006BEA0 — lote 78

- Issue: [#8120](https://github.com/soldieg/ReBLACK-XBOX/issues/8120).
- Ghidra 12.1.3 local: corpo contíguo 0x0006BEA0–0x0006BEA7 (inclusive), 8 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 4.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `a37f20f22731fa44d5fe0925ce76fbfb5bf2c8a56f260e67aa2f887a08d7f326`.
- Fonte C SHA-256: `36d43258c5da14790f5bf2dcb0f7d24cc3bd31ac241955c7980fefba3d22126e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0006BEA0`, tamanho 8 bytes; as seções COFF `.text$mn` são idênticas byte a byte (8/8 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `a37f20f22731fa44d5fe0925ce76fbfb5bf2c8a56f260e67aa2f887a08d7f326`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
