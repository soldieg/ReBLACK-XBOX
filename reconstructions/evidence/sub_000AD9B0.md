# sub_000AD9B0 — lote 80

- Issue: [#8267](https://github.com/soldieg/ReBLACK-XBOX/issues/8267).
- Ghidra 12.1.3 local: corpo contíguo 0x000AD9B0–0x000ADA2B (inclusive), 124 bytes, 50 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `390646edac0518e1686c847f18ac2909bcf9e75070a718b0b52f0da6aae27208`.
- Fonte C SHA-256: `800267ebac70441de5a8b7cb12de4447dbde6c429e2698284c490c08e3e305b8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AD9B0`, tamanho 124 bytes; as seções COFF `.text$mn` são idênticas byte a byte (124/124 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `390646edac0518e1686c847f18ac2909bcf9e75070a718b0b52f0da6aae27208`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
