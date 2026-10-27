# sub_000AEEC0 — lote 75

- Issue: [#7794](https://github.com/soldieg/ReBLACK-XBOX/issues/7794).
- Ghidra 12.1.3 local: corpo contíguo 0x000AEEC0–0x000AEEE7 (inclusive), 40 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC1E1 (000ac1c0).
- Callees diretos observados: 0x0008B5B0 (0008b5b0), 0x000AE7B0 (000ae7b0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5c24f8c5acae82878501f65d4852cf67baa4b9bad0ca0a96eef7960c2543dbbe`.
- Fonte C SHA-256: `b0b3626a1fd7377618d2d2fde93763d284a6d57d816de602d49499d7dc387db4`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AEEC0`, tamanho 40 bytes; as seções COFF `.text$mn` são idênticas byte a byte (40/40 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5c24f8c5acae82878501f65d4852cf67baa4b9bad0ca0a96eef7960c2543dbbe`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
