# sub_0006FBD0 — lote 78

- Issue: [#8119](https://github.com/soldieg/ReBLACK-XBOX/issues/8119).
- Ghidra 12.1.3 local: corpo contíguo 0x0006FBD0–0x0006FBD4 (inclusive), 5 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 11.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `3df6af1ec778d46a61b8d7160523ba89fe1af814222acb1175be5a7b1748e06b`.
- Fonte C SHA-256: `67f0ad1e047dd656d6f79599affc6c608a58572781ab30f61b9606ed34ceea67`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0006FBD0`, tamanho 5 bytes; as seções COFF `.text$mn` são idênticas byte a byte (5/5 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `3df6af1ec778d46a61b8d7160523ba89fe1af814222acb1175be5a7b1748e06b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
