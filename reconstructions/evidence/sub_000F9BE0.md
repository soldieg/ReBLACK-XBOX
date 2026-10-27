# sub_000F9BE0 — lote 70

- Issue: [#5928](https://github.com/soldieg/ReBLACK-XBOX/issues/5928).
- Ghidra 12.1.3 local: corpo contíguo 0x000F9BE0–0x000F9C22 (inclusive), 67 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E3930 (000e3930), 0x000F8390 (000f8390).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `bd436e4c4f709d66af5fc397bcb78c26ca336803956e21da78a9bab5b54927d1`.
- Fonte C SHA-256: `8b73800cf5cd51906d8236fad4fdc3ec35aafe632245fe4bedaa3d99fca0cb6d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000F9BE0`, tamanho 67 bytes; as seções COFF `.text$mn` são idênticas byte a byte (67/67 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `bd436e4c4f709d66af5fc397bcb78c26ca336803956e21da78a9bab5b54927d1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
