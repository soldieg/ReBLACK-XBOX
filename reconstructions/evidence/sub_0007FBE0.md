# sub_0007FBE0 — lote 70

- Issue: [#6470](https://github.com/soldieg/ReBLACK-XBOX/issues/6470).
- Ghidra 12.1.3 local: corpo contíguo 0x0007FBE0–0x0007FC01 (inclusive), 34 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `004fb5caf6a947436ec7addd1c94166b5a986781ac0ecd779694b10349f5eb25`.
- Fonte C SHA-256: `960846415a8eba003fceea179513296dde672f4acfb5a7a5288a9c1ecf2958f5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0007FBE0`, tamanho 34 bytes; as seções COFF `.text$mn` são idênticas byte a byte (34/34 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `004fb5caf6a947436ec7addd1c94166b5a986781ac0ecd779694b10349f5eb25`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
