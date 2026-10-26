# sub_000a3de0 — lote 72

- Issue: [#7561](https://github.com/soldieg/ReBLACK-XBOX/issues/7561).
- Ghidra 12.1.3 local: corpo contíguo 0x000A3DE0–0x000A3EC7 (inclusive), 232 bytes, 85 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `0bbe819bf652ab9399ea485cc6b62dd0d29ccda96747d5df8c5733cb91868bde`.
- Fonte C SHA-256: `57bebe2c405f381bd7a70f22b67b28c3cedb4cc102faa13ac7e1d33d80d823b1`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000A3DE0`, tamanho 232 bytes; as seções COFF `.text$mn` são idênticas byte a byte (232/232 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `0bbe819bf652ab9399ea485cc6b62dd0d29ccda96747d5df8c5733cb91868bde`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
