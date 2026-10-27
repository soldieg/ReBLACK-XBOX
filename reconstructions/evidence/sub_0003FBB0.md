# sub_0003FBB0 — lote 76

- Issue: [#7893](https://github.com/soldieg/ReBLACK-XBOX/issues/7893).
- Ghidra 12.1.3 local: corpo contíguo 0x0003FBB0–0x0003FBCA (inclusive), 27 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 2.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `12c676ee20327eb7c221f6a6fa85f8f6ebaeca76f77d9e46f66af53360c2cd66`.
- Fonte C SHA-256: `f8d4ec7f326bdbde3ad697d53b1244fa8b24fb213c751abe28d01cbcfd2edb02`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0003FBB0`, tamanho 27 bytes; as seções COFF `.text$mn` são idênticas byte a byte (27/27 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `12c676ee20327eb7c221f6a6fa85f8f6ebaeca76f77d9e46f66af53360c2cd66`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
