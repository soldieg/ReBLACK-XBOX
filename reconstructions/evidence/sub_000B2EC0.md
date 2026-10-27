# sub_000B2EC0 — lote 71

- Issue: [#6524](https://github.com/soldieg/ReBLACK-XBOX/issues/6524).
- Ghidra 12.1.3 local: corpo contíguo 0x000B2EC0–0x000B2F06 (inclusive), 71 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `319bc21408a11372190b9f7c827010dba5d0b5478319836c97de064649e875a9`.
- Fonte C SHA-256: `a2ee218f02c7996a1611ba40ed47d4e0237e4c62f019d030f4731eaea8e29627`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B2EC0`, tamanho 71 bytes; as seções COFF `.text$mn` são idênticas byte a byte (71/71 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `319bc21408a11372190b9f7c827010dba5d0b5478319836c97de064649e875a9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
