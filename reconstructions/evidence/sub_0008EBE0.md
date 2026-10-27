# sub_0008EBE0 — lote 79

- Issue: [#8225](https://github.com/soldieg/ReBLACK-XBOX/issues/8225).
- Ghidra 12.1.3 local: corpo contíguo 0x0008EBE0–0x0008EBF8 (inclusive), 25 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0008E550 (0008e550).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d74169044c4dc3b720f0394c79ffde0be88fee017f11c0e7fce71892d77cb469`.
- Fonte C SHA-256: `a15504228d5e4352197f6b8af67c5b5b82fabd6d8d7c3ec6e0b8c38a435c984e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008EBE0`, tamanho 25 bytes; as seções COFF `.text$mn` são idênticas byte a byte (25/25 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d74169044c4dc3b720f0394c79ffde0be88fee017f11c0e7fce71892d77cb469`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
