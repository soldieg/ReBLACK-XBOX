# sub_0004AAF0 — lote 76

- Issue: [#7947](https://github.com/soldieg/ReBLACK-XBOX/issues/7947).
- Ghidra 12.1.3 local: corpo contíguo 0x0004AAF0–0x0004ABD2 (inclusive), 227 bytes, 86 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00016620 (00016620), 0x000539F0 (000539f0), 0x000547C0 (000547c0), 0x000A1C8C (000a1c8c), 0x000A242D (000a242d).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `bcbb615bbd7f59d3afb4789228c4575d3624416d5e0e96fd83681ad846135c21`.
- Fonte C SHA-256: `c14f6bd00ae75659198952084d439e69935d16d9d94c2b6318a1ea83e32aa44f`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004AAF0`, tamanho 227 bytes; as seções COFF `.text$mn` são idênticas byte a byte (227/227 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `bcbb615bbd7f59d3afb4789228c4575d3624416d5e0e96fd83681ad846135c21`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
