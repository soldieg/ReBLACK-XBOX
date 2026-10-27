# sub_000AC0F0 — lote 79

- Issue: [#8254](https://github.com/soldieg/ReBLACK-XBOX/issues/8254).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC0F0–0x000AC102 (inclusive), 19 bytes, 7 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `59104bd7bf7e5f299f74a13192e9c5fc639a1f19e68792a6965d421a815e03e3`.
- Fonte C SHA-256: `ab271a85578e9d7fd73bc6413d61c04b9f09d7ca33f5142062ce86032bffc471`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC0F0`, tamanho 19 bytes; as seções COFF `.text$mn` são idênticas byte a byte (19/19 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `59104bd7bf7e5f299f74a13192e9c5fc639a1f19e68792a6965d421a815e03e3`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
