# sub_000BF6C0 — lote 71

- Issue: [#7437](https://github.com/soldieg/ReBLACK-XBOX/issues/7437).
- Ghidra 12.1.3 local: corpo contíguo 0x000BF6C0–0x000BF707 (inclusive), 72 bytes, 35 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000C3105 (000c30f0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `705cba017bb020d3ef64b8026bc3a72045d62ed9fcf26060582513c3c6723703`.
- Fonte C SHA-256: `f45fef8bae123d41eeefc92ca43a5cef1a49e99bdf8dcb0d648731822c3de9a9`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000BF6C0`, tamanho 72 bytes; as seções COFF `.text$mn` são idênticas byte a byte (72/72 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `705cba017bb020d3ef64b8026bc3a72045d62ed9fcf26060582513c3c6723703`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
