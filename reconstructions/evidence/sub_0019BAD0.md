# sub_0019BAD0 — lote 75

- Issue: [#7810](https://github.com/soldieg/ReBLACK-XBOX/issues/7810).
- Ghidra 12.1.3 local: corpo contíguo 0x0019BAD0–0x0019BBBF (inclusive), 240 bytes, 76 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0019BC7B (NONE).
- Callees diretos observados: 0x00182870 (00182870), 0x00184A40 (00184a40), 0x00187480 (00187480), 0x001874E0 (001874e0), 0x00192490 (00192490).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `b359c53cc7d256399dda6446459917231a00121c7e6356790cee8c7705111f32`.
- Fonte C SHA-256: `5865518a0486c3a38d00ca58da030f862344e90cb98f12c376a05705738f4d72`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0019BAD0`, tamanho 240 bytes; as seções COFF `.text$mn` são idênticas byte a byte (240/240 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `b359c53cc7d256399dda6446459917231a00121c7e6356790cee8c7705111f32`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
