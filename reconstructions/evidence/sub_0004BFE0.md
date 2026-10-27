# sub_0004BFE0 — lote 77

- Issue: [#7958](https://github.com/soldieg/ReBLACK-XBOX/issues/7958).
- Ghidra 12.1.3 local: corpo contíguo 0x0004BFE0–0x0004BFE5 (inclusive), 6 bytes, 2 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `1509387d9026042409c9cb5963c60c11bb102e6d4c75691f834f920a7899ea42`.
- Fonte C SHA-256: `c811d132b4bc20233af05b636c25b87cce2f79ceee379cd3cd587d77ac7a9381`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004BFE0`, tamanho 6 bytes; as seções COFF `.text$mn` são idênticas byte a byte (6/6 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `1509387d9026042409c9cb5963c60c11bb102e6d4c75691f834f920a7899ea42`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
