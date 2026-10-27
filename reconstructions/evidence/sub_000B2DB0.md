# sub_000B2DB0 — lote 80

- Issue: [#8289](https://github.com/soldieg/ReBLACK-XBOX/issues/8289).
- Ghidra 12.1.3 local: corpo contíguo 0x000B2DB0–0x000B2DBD (inclusive), 14 bytes, 6 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `34dd66bf888cde418998f03ac9a87dc03cbecaa6be816da5b73d1b1fcb0650ce`.
- Fonte C SHA-256: `4d78a60302bb2a63f7eb580ac5ebad8bb00a5196fe0090eecdd5dd8eea674676`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000B2DB0`, tamanho 14 bytes; as seções COFF `.text$mn` são idênticas byte a byte (14/14 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `34dd66bf888cde418998f03ac9a87dc03cbecaa6be816da5b73d1b1fcb0650ce`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
