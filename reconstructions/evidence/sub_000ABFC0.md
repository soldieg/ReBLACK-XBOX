# sub_000ABFC0 — lote 79

- Issue: [#8249](https://github.com/soldieg/ReBLACK-XBOX/issues/8249).
- Ghidra 12.1.3 local: corpo contíguo 0x000ABFC0–0x000AC003 (inclusive), 68 bytes, 19 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00080EF0 (00080ef0), 0x00084CA0 (00084ca0), 0x00084DC0 (00084dc0).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `8e13ca1bbc6d35a97fa94f2874ddcff481541a0befe7c00b15363b0faa4eb9a4`.
- Fonte C SHA-256: `e18685da3601a1600a176fbeb21095d4cd7a40f51b37bf3a27b7dd1ed1a6c0e5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ABFC0`, tamanho 68 bytes; as seções COFF `.text$mn` são idênticas byte a byte (68/68 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `8e13ca1bbc6d35a97fa94f2874ddcff481541a0befe7c00b15363b0faa4eb9a4`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
