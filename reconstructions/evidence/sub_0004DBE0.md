# sub_0004DBE0 — lote 77

- Issue: [#8008](https://github.com/soldieg/ReBLACK-XBOX/issues/8008).
- Ghidra 12.1.3 local: corpo contíguo 0x0004DBE0–0x0004DBFE (inclusive), 31 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001F3F80 (001f3f80).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `7efb5754fb09ad7cac6c49387d7deb25cf405241aa9a316c63b94efe271cb9dd`.
- Fonte C SHA-256: `2098eceeee7f0f529a636f1b9383b308a2bb0dad2b94dbb7d9a59bb95943a968`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004DBE0`, tamanho 31 bytes; as seções COFF `.text$mn` são idênticas byte a byte (31/31 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `7efb5754fb09ad7cac6c49387d7deb25cf405241aa9a316c63b94efe271cb9dd`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
