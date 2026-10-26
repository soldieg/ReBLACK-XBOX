# sub_0005ccf0 — lote 72

- Issue: [#7531](https://github.com/soldieg/ReBLACK-XBOX/issues/7531).
- Ghidra 12.1.3 local: corpo contíguo 0x0005CCF0–0x0005CD40 (inclusive), 81 bytes, 28 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `fb3a9e56dca353ac100aa9cdad46bb5c686c52f28e324826e16599b806391f46`.
- Fonte C SHA-256: `a7c3858f32ae80a74a1a3ad9d5abe2a92b511f4d5efff12c272e956547a9fff5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005CCF0`, tamanho 81 bytes; as seções COFF `.text$mn` são idênticas byte a byte (81/81 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `fb3a9e56dca353ac100aa9cdad46bb5c686c52f28e324826e16599b806391f46`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
