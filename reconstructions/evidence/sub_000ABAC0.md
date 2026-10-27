# sub_000ABAC0 — lote 74

- Issue: [#7707](https://github.com/soldieg/ReBLACK-XBOX/issues/7707).
- Ghidra 12.1.3 local: corpo contíguo 0x000ABAC0–0x000ABB2C (inclusive), 109 bytes, 34 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008C3BC (0008c3b0).
- Callees diretos observados: 0x00082000 (00082000).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `db1c888b8e00ddbf20ebf1bebfa5c1bd2c81b6a29899e2d4d78589aa53cd0286`.
- Fonte C SHA-256: `65bbb469082c8e0136c5db900877d1b19fa4b7cea52e12af8e5161bd8a14626e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ABAC0`, tamanho 109 bytes; as seções COFF `.text$mn` são idênticas byte a byte (109/109 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `db1c888b8e00ddbf20ebf1bebfa5c1bd2c81b6a29899e2d4d78589aa53cd0286`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
