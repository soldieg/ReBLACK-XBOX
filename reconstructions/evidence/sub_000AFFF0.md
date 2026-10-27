# sub_000AFFF0 — lote 74

- Issue: [#7722](https://github.com/soldieg/ReBLACK-XBOX/issues/7722).
- Ghidra 12.1.3 local: corpo contíguo 0x000AFFF0–0x000AFFFE (inclusive), 15 bytes, 5 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC2CD (000ac2b0).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `56314be23f3c5d1f233218233ed2789e4a52f9949fdaaf8f577c66aef0e51714`.
- Fonte C SHA-256: `b53f2e4781c0722c6b38ee576d0bea2f6ec7d5c86b009db5b2da86b92db9c368`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AFFF0`, tamanho 15 bytes; as seções COFF `.text$mn` são idênticas byte a byte (15/15 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `56314be23f3c5d1f233218233ed2789e4a52f9949fdaaf8f577c66aef0e51714`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
