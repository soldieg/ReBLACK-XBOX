# sub_000ABB90 — lote 74

- Issue: [#7709](https://github.com/soldieg/ReBLACK-XBOX/issues/7709).
- Ghidra 12.1.3 local: corpo contíguo 0x000ABB90–0x000ABC85 (inclusive), 246 bytes, 94 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008CF6C (0008cf40).
- Callees diretos observados: 0x00086120 (00086120), 0x00086250 (00086250), 0x00086590 (00086590).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `dcb0ebb085788a7838c279999c465c802f74cfe1912fc9862665aee051a55ede`.
- Fonte C SHA-256: `b05b533403c99e5c0103f62d9a732d4028d807aecb62dcb82cd2355fc7454cf1`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ABB90`, tamanho 246 bytes; as seções COFF `.text$mn` são idênticas byte a byte (246/246 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `dcb0ebb085788a7838c279999c465c802f74cfe1912fc9862665aee051a55ede`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
