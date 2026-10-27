# sub_000B2DC0 — lote 80

- Issue: [#8290](https://github.com/soldieg/ReBLACK-XBOX/issues/8290).
- Ghidra 12.1.3 local: corpo contíguo 0x000B2DC0–0x000B2DDD (inclusive), 30 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `e82ea58243dd000bd2724ac0259956bf6b6259cc8e22b9b2d6e64c0dd88c3ff6`.
- Fonte C SHA-256: `6ac07b3bfeca949cbf1602865332845a64ec094500d71e8121733b3f638a1e67`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000B2DC0`, tamanho 30 bytes; as seções COFF `.text$mn` são idênticas byte a byte (30/30 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `e82ea58243dd000bd2724ac0259956bf6b6259cc8e22b9b2d6e64c0dd88c3ff6`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
