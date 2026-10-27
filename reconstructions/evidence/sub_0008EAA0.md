# sub_0008EAA0 — lote 79

- Issue: [#8218](https://github.com/soldieg/ReBLACK-XBOX/issues/8218).
- Ghidra 12.1.3 local: corpo contíguo 0x0008EAA0–0x0008EAB5 (inclusive), 22 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0008DF60 (0008df60).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `61c7779695769a20db75e6b08a6cf2cc6e9c0f3b498dd3e9cced28aab7b62db5`.
- Fonte C SHA-256: `cda36d700f923a5cc50f66f0ebc9d8ad85a4851a6eeda85fb1ea6c7a7545042d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008EAA0`, tamanho 22 bytes; as seções COFF `.text$mn` são idênticas byte a byte (22/22 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `61c7779695769a20db75e6b08a6cf2cc6e9c0f3b498dd3e9cced28aab7b62db5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
