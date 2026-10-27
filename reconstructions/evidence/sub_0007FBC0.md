# sub_0007FBC0 — lote 78

- Issue: [#8124](https://github.com/soldieg/ReBLACK-XBOX/issues/8124).
- Ghidra 12.1.3 local: corpo contíguo 0x0007FBC0–0x0007FBDC (inclusive), 29 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `7133b2960cae99db72a0e89ad0a788dae0d1f6c69e2ad4ba218e0fd17801bab8`.
- Fonte C SHA-256: `014ebed2bbd89d3df6cfd517a2418065849c964155e3d0d9edd1d9d611231fb8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0007FBC0`, tamanho 29 bytes; as seções COFF `.text$mn` são idênticas byte a byte (29/29 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `7133b2960cae99db72a0e89ad0a788dae0d1f6c69e2ad4ba218e0fd17801bab8`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
