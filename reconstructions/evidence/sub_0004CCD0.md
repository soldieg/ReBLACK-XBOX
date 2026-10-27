# sub_0004CCD0 — lote 77

- Issue: [#8002](https://github.com/soldieg/ReBLACK-XBOX/issues/8002).
- Ghidra 12.1.3 local: corpo contíguo 0x0004CCD0–0x0004CCD5 (inclusive), 6 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `652a0b8481c1f553e0fc693e6d2a87a884892a906e174f9eaac13f62237c6ef1`.
- Fonte C SHA-256: `c5583cf400e88dce8be546170ee230a02ed77e3a6af92c02b5b1830b62b0d13f`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004CCD0`, tamanho 6 bytes; as seções COFF `.text$mn` são idênticas byte a byte (6/6 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `652a0b8481c1f553e0fc693e6d2a87a884892a906e174f9eaac13f62237c6ef1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
