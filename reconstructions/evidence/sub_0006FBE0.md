# sub_0006FBE0 — lote 78

- Issue: [#8121](https://github.com/soldieg/ReBLACK-XBOX/issues/8121).
- Ghidra 12.1.3 local: corpo contíguo 0x0006FBE0–0x0006FBE4 (inclusive), 5 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `531db4852a682340f10d91199822e1a1aed030bae016ff1e2c9f32d13b9cc9a1`.
- Fonte C SHA-256: `17a17552003b70d07d9a26ebd101d985a7abd97d8f8a92f56da5204ea91a0d9e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0006FBE0`, tamanho 5 bytes; as seções COFF `.text$mn` são idênticas byte a byte (5/5 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `531db4852a682340f10d91199822e1a1aed030bae016ff1e2c9f32d13b9cc9a1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
