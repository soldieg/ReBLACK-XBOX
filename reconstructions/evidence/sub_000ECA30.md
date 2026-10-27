# sub_000ECA30 — lote 71

- Issue: [#7447](https://github.com/soldieg/ReBLACK-XBOX/issues/7447).
- Ghidra 12.1.3 local: corpo contíguo 0x000ECA30–0x000ECA59 (inclusive), 42 bytes, 20 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E72B0 (000e72b0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `fd529e774ebc98654f3d82bb674931c257fda16f5e7ccc8c59185b724e28eca4`.
- Fonte C SHA-256: `fa3a3869cdbc1e2af57febb6d3f94616573276019c76f55790436d355ac20cb2`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000ECA30`, tamanho 42 bytes; as seções COFF `.text$mn` são idênticas byte a byte (42/42 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `fd529e774ebc98654f3d82bb674931c257fda16f5e7ccc8c59185b724e28eca4`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
