# sub_0005CCA0 — lote 78

- Issue: [#8066](https://github.com/soldieg/ReBLACK-XBOX/issues/8066).
- Ghidra 12.1.3 local: corpo contíguo 0x0005CCA0–0x0005CCD1 (inclusive), 50 bytes, 18 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `c1bef47319329965e656bfbd83a14edfe129d95c0468c9e114683d0007ffbab7`.
- Fonte C SHA-256: `aefc2a11ab40795ad1f7c44d5f7da4b1b524099c3caa9c8ec834ec5f30d5942b`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0005CCA0`, tamanho 50 bytes; as seções COFF `.text$mn` são idênticas byte a byte (50/50 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `c1bef47319329965e656bfbd83a14edfe129d95c0468c9e114683d0007ffbab7`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
