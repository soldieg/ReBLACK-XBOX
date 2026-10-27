# sub_001F9AF0 — lote 70

- Issue: [#7409](https://github.com/soldieg/ReBLACK-XBOX/issues/7409).
- Ghidra 12.1.3 local: corpo contíguo 0x001F9AF0–0x001F9B10 (inclusive), 33 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001C3F30 (001c3f30).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `115cd5aa16d95a16aef55a689c33bba956ab69e311fcb1c1a681783776aeda63`.
- Fonte C SHA-256: `f09d5fdd67b2bd217e73005e94680b69675683150ee0ecfa2abb6b0b406b185c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F9AF0`, tamanho 33 bytes; as seções COFF `.text$mn` são idênticas byte a byte (33/33 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `115cd5aa16d95a16aef55a689c33bba956ab69e311fcb1c1a681783776aeda63`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
