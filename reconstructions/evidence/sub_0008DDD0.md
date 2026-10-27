# sub_0008DDD0 — lote 74

- Issue: [#7694](https://github.com/soldieg/ReBLACK-XBOX/issues/7694).
- Ghidra 12.1.3 local: corpo contíguo 0x0008DDD0–0x0008DDF4 (inclusive), 37 bytes, 10 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008E92B (0008e920).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `4f5df5df832ee42fc953a758e0861cfcc89c9f28aab2229d5e0c8ddc8c70cda4`.
- Fonte C SHA-256: `5b6b913e0faf9779c465610f368001411105ae06f037d74d126eb5db0953918c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008DDD0`, tamanho 37 bytes; as seções COFF `.text$mn` são idênticas byte a byte (37/37 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `4f5df5df832ee42fc953a758e0861cfcc89c9f28aab2229d5e0c8ddc8c70cda4`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
