# sub_0004CAF0 — lote 77

- Issue: [#7995](https://github.com/soldieg/ReBLACK-XBOX/issues/7995).
- Ghidra 12.1.3 local: corpo contíguo 0x0004CAF0–0x0004CB39 (inclusive), 74 bytes, 27 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 2; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `1ddec83cacac15198e5ce6401c234556b200490fe322868c5749b5b5b9917cb2`.
- Fonte C SHA-256: `7eef63b9a3abe6a5bf4ffc4550ca6b674a9532cf0ab3a797e9a21e9c8ce405ee`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0004CAF0`, tamanho 74 bytes; as seções COFF `.text$mn` são idênticas byte a byte (74/74 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `1ddec83cacac15198e5ce6401c234556b200490fe322868c5749b5b5b9917cb2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
