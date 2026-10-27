# sub_000BBF00 — lote 71

- Issue: [#7435](https://github.com/soldieg/ReBLACK-XBOX/issues/7435).
- Ghidra 12.1.3 local: corpo contíguo 0x000BBF00–0x000BBF54 (inclusive), 85 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A1AEB (000a1aeb), 0x000BA7E0 (000ba7e0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `34debe8c0c9050ab2494021e72709d0f6bf85106727e9bc406fac1ef992a295c`.
- Fonte C SHA-256: `b1e1103b3d86c817bc3108e3d8693d603e8bb34eff13a5c2b6a2cba2733f7960`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000BBF00`, tamanho 85 bytes; as seções COFF `.text$mn` são idênticas byte a byte (85/85 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `34debe8c0c9050ab2494021e72709d0f6bf85106727e9bc406fac1ef992a295c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
