# sub_001FB9F0 — lote 75

- Issue: [#7819](https://github.com/soldieg/ReBLACK-XBOX/issues/7819).
- Ghidra 12.1.3 local: corpo contíguo 0x001FB9F0–0x001FBBAF (inclusive), 448 bytes, 132 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x001FBC19 (001fbbb0).
- Callees diretos observados: 0x000C2C50 (000c2c50), 0x001F3FC0 (001f3fc0), 0x001F40A0 (001f40a0), 0x001F82D0 (001f82d0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 6; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `414a79c73465acf37c0e6c7bcba83fbbf4861103f68631cf548ae99917e3033e`.
- Fonte C SHA-256: `7cd5d5006a37ad4997b7f52cd5841f15341f3de24987a6ac2d4062a23710a333`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_001FB9F0`, tamanho 448 bytes; as seções COFF `.text$mn` são idênticas byte a byte (448/448 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `414a79c73465acf37c0e6c7bcba83fbbf4861103f68631cf548ae99917e3033e`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
