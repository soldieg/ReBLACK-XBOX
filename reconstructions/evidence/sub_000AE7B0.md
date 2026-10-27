# sub_000AE7B0 — lote 74

- Issue: [#7717](https://github.com/soldieg/ReBLACK-XBOX/issues/7717).
- Ghidra 12.1.3 local: corpo contíguo 0x000AE7B0–0x000AE7E0 (inclusive), 49 bytes, 25 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AEED3 (000aeec0), 0x000AEF00 (000aeef0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `25ab58dd2dc9fcc103613503973972a1ca30bb31268c15561eab774cb9065698`.
- Fonte C SHA-256: `a10be4543caf1569fcabd168d5bb01a8640b7b4ca157bbc40586b8dbadda0dcd`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AE7B0`, tamanho 49 bytes; as seções COFF `.text$mn` são idênticas byte a byte (49/49 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `25ab58dd2dc9fcc103613503973972a1ca30bb31268c15561eab774cb9065698`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
