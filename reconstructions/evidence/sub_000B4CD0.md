# sub_000B4CD0 — lote 71

- Issue: [#6530](https://github.com/soldieg/ReBLACK-XBOX/issues/6530).
- Ghidra 12.1.3 local: corpo contíguo 0x000B4CD0–0x000B4D66 (inclusive), 151 bytes, 47 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000B4190 (000b4190).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `903fe9338f547523e563c5b59c2a9078d9e235da89e9f31691dbb3735af911f0`.
- Fonte C SHA-256: `70f7391abc2d45e9197077bca76cb7963f0c73cdd6cb82fc49d5fa6a4e3217ec`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B4CD0`, tamanho 151 bytes; as seções COFF `.text$mn` são idênticas byte a byte (151/151 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `903fe9338f547523e563c5b59c2a9078d9e235da89e9f31691dbb3735af911f0`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
