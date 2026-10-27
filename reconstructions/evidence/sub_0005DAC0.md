# sub_0005DAC0 — lote 78

- Issue: [#8073](https://github.com/soldieg/ReBLACK-XBOX/issues/8073).
- Ghidra 12.1.3 local: corpo contíguo 0x0005DAC0–0x0005DAEA (inclusive), 43 bytes, 19 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00054F90 (00054f90).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `3226199ec34e7e3351256bec0e3457034978bdd7de29ce77ed5774e56a2a0669`.
- Fonte C SHA-256: `80ec63cd1fff8eec5f9c831ab40a6c0a5434545cbb719cf50e3a792528b385ff`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005DAC0`, tamanho 43 bytes; as seções COFF `.text$mn` são idênticas byte a byte (43/43 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `3226199ec34e7e3351256bec0e3457034978bdd7de29ce77ed5774e56a2a0669`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
