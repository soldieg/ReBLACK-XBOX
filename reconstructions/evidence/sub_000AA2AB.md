# sub_000AA2AB — lote 79

- Issue: [#8244](https://github.com/soldieg/ReBLACK-XBOX/issues/8244).
- Ghidra 12.1.3 local: corpo contíguo 0x000AA2AB–0x000AA2D2 (inclusive), 40 bytes, 9 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000AA18A (000aa18a).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `9b63858afa119a5afba94e780db4eec075d40aee9cdabd4688d2f568dc9424a8`.
- Fonte C SHA-256: `f94506907ac4c5944ef944e53b3481c1e3d87f3552280f91ff4bd331b05a44ae`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AA2AB`, tamanho 40 bytes; as seções COFF `.text$mn` são idênticas byte a byte (40/40 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `9b63858afa119a5afba94e780db4eec075d40aee9cdabd4688d2f568dc9424a8`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
