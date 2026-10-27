# sub_0008DBA0 — lote 74

- Issue: [#7691](https://github.com/soldieg/ReBLACK-XBOX/issues/7691).
- Ghidra 12.1.3 local: corpo contíguo 0x0008DBA0–0x0008DBC0 (inclusive), 33 bytes, 10 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008E6CD (0008e6c0).
- Callees diretos observados: 0x00087610 (00087610).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `c7ff78e7600fc973f45a2f6b504fb04df7008a998809c50179ec81cb24475264`.
- Fonte C SHA-256: `8d973dce705bbb21d2d1e90625ab4c5b8ab76c0e0bcc60fc9101b31f0eec9c45`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008DBA0`, tamanho 33 bytes; as seções COFF `.text$mn` são idênticas byte a byte (33/33 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `c7ff78e7600fc973f45a2f6b504fb04df7008a998809c50179ec81cb24475264`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
