# sub_000CFCC0 — lote 71

- Issue: [#6453](https://github.com/soldieg/ReBLACK-XBOX/issues/6453).
- Ghidra 12.1.3 local: corpo contíguo 0x000CFCC0–0x000CFCE8 (inclusive), 41 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00020950 (00020950).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `80d104da5a0b6f03ea7ef4c49ec898db5d6cb2aac8bee91c4c97458b3689e45c`.
- Fonte C SHA-256: `30a5e9ff3bba57686629a02d3e720602a2191e554f1a92956c943c7ebb19fee2`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CFCC0`, tamanho 41 bytes; as seções COFF `.text$mn` são idênticas byte a byte (41/41 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `80d104da5a0b6f03ea7ef4c49ec898db5d6cb2aac8bee91c4c97458b3689e45c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
