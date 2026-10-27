# sub_0020FDC0 — lote 70

- Issue: [#7421](https://github.com/soldieg/ReBLACK-XBOX/issues/7421).
- Ghidra 12.1.3 local: corpo contíguo 0x0020FDC0–0x0020FDF2 (inclusive), 51 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5b162a17d04548a07e18c835ac2a5ccdabe45ed85a5b38d87f8f0e23bec1a8fd`.
- Fonte C SHA-256: `f65b2d721864eb42d66f32e87e2bb90404c7220a2a805557589f623c0610ae38`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0020FDC0`, tamanho 51 bytes; as seções COFF `.text$mn` são idênticas byte a byte (51/51 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5b162a17d04548a07e18c835ac2a5ccdabe45ed85a5b38d87f8f0e23bec1a8fd`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
