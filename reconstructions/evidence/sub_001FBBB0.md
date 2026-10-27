# sub_001FBBB0 — lote 75

- Issue: [#7820](https://github.com/soldieg/ReBLACK-XBOX/issues/7820).
- Ghidra 12.1.3 local: corpo contíguo 0x001FBBB0–0x001FBC8F (inclusive), 224 bytes, 84 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x001FBDB8 (NONE).
- Callees diretos observados: 0x001F7F10 (001f7f10), 0x001FB9F0 (001fb9f0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6ccdfbdfe7f4174c88132c2e6fda124767d37be9ca2de3528121f6c432598655`.
- Fonte C SHA-256: `1ddc8bbe3b0260b72ff8d443839a1487e36c778f9ef19d2ea80389643f07cb74`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_001FBBB0`, tamanho 224 bytes; as seções COFF `.text$mn` são idênticas byte a byte (224/224 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6ccdfbdfe7f4174c88132c2e6fda124767d37be9ca2de3528121f6c432598655`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
