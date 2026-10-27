# sub_0008EAC0 — lote 79

- Issue: [#8219](https://github.com/soldieg/ReBLACK-XBOX/issues/8219).
- Ghidra 12.1.3 local: corpo contíguo 0x0008EAC0–0x0008EAD8 (inclusive), 25 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0008DF70 (0008df70).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `893c16a302e79ee51ddf01da9d4490ded59261653e42eda6bee3eb1cc95cd4ba`.
- Fonte C SHA-256: `af36504d32e2824f41b8b87af5e6215850185169eb9db38db3380efcbbdc51b4`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008EAC0`, tamanho 25 bytes; as seções COFF `.text$mn` são idênticas byte a byte (25/25 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `893c16a302e79ee51ddf01da9d4490ded59261653e42eda6bee3eb1cc95cd4ba`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
