# sub_0002DDC0 — lote 74

- Issue: [#7666](https://github.com/soldieg/ReBLACK-XBOX/issues/7666).
- Ghidra 12.1.3 local: corpo contíguo 0x0002DDC0–0x0002DDF2 (inclusive), 51 bytes, 16 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x00040257 (00040220), 0x000BF8DC (000bf8b0), 0x0015809B (00158060), 0x001580F6 (00158060), 0x00158154 (00158060).
- Callees diretos observados: 0x00032520 (00032520), 0x000335B0 (000335b0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `8c4783f8d1f4ae8ad808ded21e28b5c02629855953f2c67ef47471224e2678c9`.
- Fonte C SHA-256: `4e33862742caac8603defc4b1f10977d7f17d2326ac0f2473d6acae54c799a52`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0002DDC0`, tamanho 51 bytes; as seções COFF `.text$mn` são idênticas byte a byte (51/51 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `8c4783f8d1f4ae8ad808ded21e28b5c02629855953f2c67ef47471224e2678c9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
