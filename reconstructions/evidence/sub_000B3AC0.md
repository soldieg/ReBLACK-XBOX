# sub_000B3AC0 — lote 71

- Issue: [#6529](https://github.com/soldieg/ReBLACK-XBOX/issues/6529).
- Ghidra 12.1.3 local: corpo contíguo 0x000B3AC0–0x000B3B02 (inclusive), 67 bytes, 34 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000544A0 (000544a0), 0x000547C0 (000547c0), 0x000A1C8C (000a1c8c).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `dd82470450df70de62bcf8eadfcc694e64b95154f48cb226f70eedad4fd8a1df`.
- Fonte C SHA-256: `8209cac10db703aba4dbeb3da9f5e9c715dd70f208b52d606cb117a61c94d433`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B3AC0`, tamanho 67 bytes; as seções COFF `.text$mn` são idênticas byte a byte (67/67 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `dd82470450df70de62bcf8eadfcc694e64b95154f48cb226f70eedad4fd8a1df`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
