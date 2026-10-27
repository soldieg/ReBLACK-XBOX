# sub_0005EAB0 — lote 78

- Issue: [#8084](https://github.com/soldieg/ReBLACK-XBOX/issues/8084).
- Ghidra 12.1.3 local: corpo contíguo 0x0005EAB0–0x0005EAE0 (inclusive), 49 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00054FA0 (00054fa0).
- Referências de dados entrantes observadas: 2.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `de737bd9431cabca36ee037281557b65de4f945333da8d479564d62805a3199b`.
- Fonte C SHA-256: `bbfeac31694db26c200f4e44e2b3d743b4338345ff19cf4fdc360e6328356dca`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005EAB0`, tamanho 49 bytes; as seções COFF `.text$mn` são idênticas byte a byte (49/49 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `de737bd9431cabca36ee037281557b65de4f945333da8d479564d62805a3199b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
