# sub_000A6DBC — lote 79

- Issue: [#8240](https://github.com/soldieg/ReBLACK-XBOX/issues/8240).
- Ghidra 12.1.3 local: corpo contíguo 0x000A6DBC–0x000A6DC0 (inclusive), 5 bytes, 3 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d0ecf339b80d438b6d0d3fcef61d5cb5ad8ef4c6bf39be985a29318bbc096c05`.
- Fonte C SHA-256: `d5184423232c7dbd6ab5b521113cf6d10bfef42f4a4e145cc78094d4165768a5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000A6DBC`, tamanho 5 bytes; as seções COFF `.text$mn` são idênticas byte a byte (5/5 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d0ecf339b80d438b6d0d3fcef61d5cb5ad8ef4c6bf39be985a29318bbc096c05`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
