# sub_0008EAE0 — lote 79

- Issue: [#8220](https://github.com/soldieg/ReBLACK-XBOX/issues/8220).
- Ghidra 12.1.3 local: corpo contíguo 0x0008EAE0–0x0008EAF5 (inclusive), 22 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0008DFF0 (0008dff0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `0418e755f6a73a1ce6d27057687b5fc267c6aafbe4b07d8d9e63145ef8212c35`.
- Fonte C SHA-256: `d7cd05a06d245b4a5c3f81e471e141587b5d40e8a05b56cc3db24ad52bb33f19`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008EAE0`, tamanho 22 bytes; as seções COFF `.text$mn` são idênticas byte a byte (22/22 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `0418e755f6a73a1ce6d27057687b5fc267c6aafbe4b07d8d9e63145ef8212c35`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
