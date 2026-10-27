# sub_000BBF60 — lote 71

- Issue: [#7436](https://github.com/soldieg/ReBLACK-XBOX/issues/7436).
- Ghidra 12.1.3 local: corpo contíguo 0x000BBF60–0x000BBFA3 (inclusive), 68 bytes, 25 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BA7E0 (000ba7e0), 0x000C0C00 (000c0c00), 0x000C44C0 (000c44c0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `ef97b8906a0f0349c0f4fdaeb51d59079a5efb092fae30a2ca9ec8dbd29e4f8a`.
- Fonte C SHA-256: `e89839ae3a1367f7998b3b6a97625a2f6ec3c7a2d7074fe8fcef9bb4776a47da`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000BBF60`, tamanho 68 bytes; as seções COFF `.text$mn` são idênticas byte a byte (68/68 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `ef97b8906a0f0349c0f4fdaeb51d59079a5efb092fae30a2ca9ec8dbd29e4f8a`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
