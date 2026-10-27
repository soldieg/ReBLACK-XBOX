# sub_000B4EB0 — lote 71

- Issue: [#6533](https://github.com/soldieg/ReBLACK-XBOX/issues/6533).
- Ghidra 12.1.3 local: corpo contíguo 0x000B4EB0–0x000B50D2 (inclusive), 547 bytes, 187 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000B514D (000b50e0), 0x000B515E (000b50e0).
- Callees diretos observados: 0x000A1AEB (000a1aeb), 0x000BF710 (000bf710), 0x000BF7E0 (000bf7e0), 0x000CB210 (000cb210).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 3; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `e118a648e14a9bc0f79ed331ecf24610a118ce85147bb10167be9b0cc06bc133`.
- Fonte C SHA-256: `a63f8fe69723adccba7a193a652fe9ecb0d09c15a30d43939bf6bdab2bbfcc29`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000B4EB0`, tamanho 547 bytes; as seções COFF `.text$mn` são idênticas byte a byte (547/547 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `e118a648e14a9bc0f79ed331ecf24610a118ce85147bb10167be9b0cc06bc133`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
