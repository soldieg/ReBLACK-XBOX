# sub_0004CCE0 — lote 77

- Issue: [#8003](https://github.com/soldieg/ReBLACK-XBOX/issues/8003).
- Ghidra 12.1.3 local: corpo contíguo 0x0004CCE0–0x0004CD2D (inclusive), 78 bytes, 28 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `377129e739aff1c54fb4621f263589dfc551174790138df7a8a05ae02e9f3470`.
- Fonte C SHA-256: `2b23da0629821beef31ad2c653e07d6e6ce8fbacffa5b734f198538272f3d40f`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004CCE0`, tamanho 78 bytes; as seções COFF `.text$mn` são idênticas byte a byte (78/78 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `377129e739aff1c54fb4621f263589dfc551174790138df7a8a05ae02e9f3470`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
