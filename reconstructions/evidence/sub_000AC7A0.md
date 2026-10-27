# sub_000AC7A0 — lote 79

- Issue: [#8257](https://github.com/soldieg/ReBLACK-XBOX/issues/8257).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC7A0–0x000AC7B5 (inclusive), 22 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000AC3C0 (NONE).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `fe56bbd834793b219e2c7111c45b84c93730a9b9b45879bcecaac3f9817da011`.
- Fonte C SHA-256: `a6215a4450b707b3944d5724018159abf594ea646241494ec6e3fde7d0c1434e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC7A0`, tamanho 22 bytes; as seções COFF `.text$mn` são idênticas byte a byte (22/22 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `fe56bbd834793b219e2c7111c45b84c93730a9b9b45879bcecaac3f9817da011`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
