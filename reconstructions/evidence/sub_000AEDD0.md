# sub_000AEDD0 — lote 80

- Issue: [#8272](https://github.com/soldieg/ReBLACK-XBOX/issues/8272).
- Ghidra 12.1.3 local: corpo contíguo 0x000AEDD0–0x000AEDEA (inclusive), 27 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `309bac41d1fda9a845b4bf45acea962305d0e14aee0230d0f156153779db7b3b`.
- Fonte C SHA-256: `b45ca0d12b7c816dd1b450002f1337778a107e19c46d00be27dde41ee446decb`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AEDD0`, tamanho 27 bytes; as seções COFF `.text$mn` são idênticas byte a byte (27/27 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `309bac41d1fda9a845b4bf45acea962305d0e14aee0230d0f156153779db7b3b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
