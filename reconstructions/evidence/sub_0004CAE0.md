# sub_0004CAE0 — lote 77

- Issue: [#7994](https://github.com/soldieg/ReBLACK-XBOX/issues/7994).
- Ghidra 12.1.3 local: corpo contíguo 0x0004CAE0–0x0004CAE5 (inclusive), 6 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `e9ba8e54fb3e75aa258ade13749a1b1238baf3201bcbd5674620f570e7bfe892`.
- Fonte C SHA-256: `0d9f4943aba03e1dfbc5582abd182e2267ab044cbf8cd3e0a3157c4741dd22c8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004CAE0`, tamanho 6 bytes; as seções COFF `.text$mn` são idênticas byte a byte (6/6 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `e9ba8e54fb3e75aa258ade13749a1b1238baf3201bcbd5674620f570e7bfe892`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
