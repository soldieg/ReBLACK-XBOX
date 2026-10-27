# sub_0005EAF0 — lote 78

- Issue: [#8085](https://github.com/soldieg/ReBLACK-XBOX/issues/8085).
- Ghidra 12.1.3 local: corpo contíguo 0x0005EAF0–0x0005EB29 (inclusive), 58 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `a4e1ffb2285dad69463b3ce6ba1b7f410e0de1e3f2b413c77e28de07ac3f729e`.
- Fonte C SHA-256: `ed97e14a472ec0abc094ac6876a3efec11b356551fcdf69dbb103013d63acef3`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005EAF0`, tamanho 58 bytes; as seções COFF `.text$mn` são idênticas byte a byte (58/58 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `a4e1ffb2285dad69463b3ce6ba1b7f410e0de1e3f2b413c77e28de07ac3f729e`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
