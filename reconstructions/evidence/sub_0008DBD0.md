# sub_0008DBD0 — lote 75

- Issue: [#7769](https://github.com/soldieg/ReBLACK-XBOX/issues/7769).
- Ghidra 12.1.3 local: corpo contíguo 0x0008DBD0–0x0008DBEB (inclusive), 28 bytes, 6 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008E6E6 (0008e6e0).
- Callees diretos observados: 0x000A3580 (000a3580).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `e1a7029f213662e3c0abd1f6662b92f41de439710ad2d8679764166d01b5d6d0`.
- Fonte C SHA-256: `1f0edef8e2491e966cdb258466eee72225447a07ef1f397294275f0e1bd05cef`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008DBD0`, tamanho 28 bytes; as seções COFF `.text$mn` são idênticas byte a byte (28/28 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `e1a7029f213662e3c0abd1f6662b92f41de439710ad2d8679764166d01b5d6d0`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
