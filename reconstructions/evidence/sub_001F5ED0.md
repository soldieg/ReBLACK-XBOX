# sub_001F5ED0 — lote 70

- Issue: [#7390](https://github.com/soldieg/ReBLACK-XBOX/issues/7390).
- Ghidra 12.1.3 local: corpo contíguo 0x001F5ED0–0x001F5EF4 (inclusive), 37 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00014090 (00014090).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `35a02246f51bedf8776cc749a207827f6e41b304378e7b4c75ebf30a349d1c19`.
- Fonte C SHA-256: `a589649376be65ecb9995f5a60f8813997ec64ffb69f3f0ee27fb22347fceadf`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F5ED0`, tamanho 37 bytes; as seções COFF `.text$mn` são idênticas byte a byte (37/37 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `35a02246f51bedf8776cc749a207827f6e41b304378e7b4c75ebf30a349d1c19`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
