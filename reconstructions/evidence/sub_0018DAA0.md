# sub_0018DAA0 — lote 74

- Issue: [#7753](https://github.com/soldieg/ReBLACK-XBOX/issues/7753).
- Ghidra 12.1.3 local: corpo contíguo 0x0018DAA0–0x0018DB12 (inclusive), 115 bytes, 35 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0019B610 (0019b570), 0x001A3B09 (001a3a40), 0x001A3DCD (001a3d20), 0x001A474E (001a4550), 0x001AAE85 (001aad50).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `baac4035f368b2a9efea31ec86a2276544aac50430e61b245673cf2ea8bb426d`.
- Fonte C SHA-256: `a1bc5397ad1b3313dcde6a780b7868f34e48623d8e525b4822487fd6e56980b4`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0018DAA0`, tamanho 115 bytes; as seções COFF `.text$mn` são idênticas byte a byte (115/115 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `baac4035f368b2a9efea31ec86a2276544aac50430e61b245673cf2ea8bb426d`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
