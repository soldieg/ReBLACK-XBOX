# sub_0008DCD0 — lote 74

- Issue: [#7693](https://github.com/soldieg/ReBLACK-XBOX/issues/7693).
- Ghidra 12.1.3 local: corpo contíguo 0x0008DCD0–0x0008DCDA (inclusive), 11 bytes, 3 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008E825 (0008e820).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d0157dc34dc0b8756fa49fc7c9a9368688d26c24c11d61117c974afc7106bf89`.
- Fonte C SHA-256: `fbd858020cd4d5063b68384d21b55c5d5da61f801f1965e37abaa25c15a74611`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008DCD0`, tamanho 11 bytes; as seções COFF `.text$mn` são idênticas byte a byte (11/11 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d0157dc34dc0b8756fa49fc7c9a9368688d26c24c11d61117c974afc7106bf89`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
