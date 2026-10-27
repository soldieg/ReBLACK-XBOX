# sub_001F3DC0 — lote 70

- Issue: [#7369](https://github.com/soldieg/ReBLACK-XBOX/issues/7369).
- Ghidra 12.1.3 local: corpo contíguo 0x001F3DC0–0x001F3DEA (inclusive), 43 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `897bc36e672afeb0ac847b2d52c014cc3212bcb081ac117889578f236345052b`.
- Fonte C SHA-256: `f7035fda771088cfaf7f040c92505a832f3bbf80a1b801a611cc0cf8b260a2d0`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F3DC0`, tamanho 43 bytes; as seções COFF `.text$mn` são idênticas byte a byte (43/43 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `897bc36e672afeb0ac847b2d52c014cc3212bcb081ac117889578f236345052b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
