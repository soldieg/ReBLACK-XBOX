# sub_0027FBFC — lote 70

- Issue: [#7430](https://github.com/soldieg/ReBLACK-XBOX/issues/7430).
- Ghidra 12.1.3 local: corpo contíguo 0x0027FBFC–0x0027FC2C (inclusive), 49 bytes, 25 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `db85389752fb4c7116de7063f86e1af86490f35ace17140b6625ebcd4e388457`.
- Fonte C SHA-256: `8af276d30e76142a5031afb125f3b05e5945dac4a271243f040a46c7f58fd2ff`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0027FBFC`, tamanho 49 bytes; as seções COFF `.text$mn` são idênticas byte a byte (49/49 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `db85389752fb4c7116de7063f86e1af86490f35ace17140b6625ebcd4e388457`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
