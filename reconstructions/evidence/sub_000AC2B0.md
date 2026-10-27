# sub_000AC2B0 — lote 75

- Issue: [#7783](https://github.com/soldieg/ReBLACK-XBOX/issues/7783).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC2B0–0x000AC2E4 (inclusive), 53 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC70D (000ac700).
- Callees diretos observados: 0x00022DD0 (00022dd0), 0x00022E8C (00022e8c), 0x000AFFF0 (000afff0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `d0b9e6329db58b8b726cc69c263334ca7b148f026235aa8aecc379824ba872b5`.
- Fonte C SHA-256: `11fb417f8822732e2282ad23f88569816e408a67ce24e66c613441c5b2db7f1d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC2B0`, tamanho 53 bytes; as seções COFF `.text$mn` são idênticas byte a byte (53/53 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `d0b9e6329db58b8b726cc69c263334ca7b148f026235aa8aecc379824ba872b5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
