# sub_000AD1B0 — lote 80

- Issue: [#8262](https://github.com/soldieg/ReBLACK-XBOX/issues/8262).
- Ghidra 12.1.3 local: corpo contíguo 0x000AD1B0–0x000AD1C5 (inclusive), 22 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000AD0D0 (NONE).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `77a46d254c420ce6f7a43c78413762330341f7ace45eeacdb2cdb1b133698c38`.
- Fonte C SHA-256: `48c3d2450313f6821f21caa2855f45fd5d40d4414b5f3a0a67df714596362b1a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AD1B0`, tamanho 22 bytes; as seções COFF `.text$mn` são idênticas byte a byte (22/22 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `77a46d254c420ce6f7a43c78413762330341f7ace45eeacdb2cdb1b133698c38`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
