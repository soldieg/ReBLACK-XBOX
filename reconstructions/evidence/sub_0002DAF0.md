# sub_0002DAF0 — lote 72

- Issue: [#7457](https://github.com/soldieg/ReBLACK-XBOX/issues/7457).
- Ghidra 12.1.3 local: corpo contíguo 0x0002DAF0–0x0002DB3C (inclusive), 77 bytes, 21 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00030310 (00030310).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `f1919db8ff8aa8a3732ea4b0fadc6ac702209d4cdf76358e23931fa3f5d2960c`.
- Fonte C SHA-256: `505ee8c144011e85267361bd19631c8e3c9050059225057b69aa7094069847f8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0002DAF0`, tamanho 77 bytes; as seções COFF `.text$mn` são idênticas byte a byte (77/77 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `f1919db8ff8aa8a3732ea4b0fadc6ac702209d4cdf76358e23931fa3f5d2960c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
