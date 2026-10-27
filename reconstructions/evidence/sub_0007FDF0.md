# sub_0007FDF0 — lote 78

- Issue: [#8133](https://github.com/soldieg/ReBLACK-XBOX/issues/8133).
- Ghidra 12.1.3 local: corpo contíguo 0x0007FDF0–0x0007FE0D (inclusive), 30 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `4708b65da85400b8a3a412d0854863883a9000651eceb4f2fdbe43f7f47fec90`.
- Fonte C SHA-256: `83628375a7b3aee4d7a0deaaeb5bcebba1478e3d1f7c70fe5a082970b5991211`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0007FDF0`, tamanho 30 bytes; as seções COFF `.text$mn` são idênticas byte a byte (30/30 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `4708b65da85400b8a3a412d0854863883a9000651eceb4f2fdbe43f7f47fec90`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
