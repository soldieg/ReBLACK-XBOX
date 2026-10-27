# sub_000BA5D0 — lote 71

- Issue: [#7433](https://github.com/soldieg/ReBLACK-XBOX/issues/7433).
- Ghidra 12.1.3 local: corpo contíguo 0x000BA5D0–0x000BA608 (inclusive), 57 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x00141950 (00141930).
- Callees diretos observados: 0x000B8510 (000b8510), 0x000B8640 (000b8640).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `13ab4e59c7628a9fdd0643fa1c065a8adefb3517edd42d46ffecae6aeabce8bf`.
- Fonte C SHA-256: `f0ab565325427c727a24c65046de6ba04adc5bcfa82248a5f052f9e18f9f9b01`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000BA5D0`, tamanho 57 bytes; as seções COFF `.text$mn` são idênticas byte a byte (57/57 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `13ab4e59c7628a9fdd0643fa1c065a8adefb3517edd42d46ffecae6aeabce8bf`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
