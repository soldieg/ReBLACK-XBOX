# sub_000AC2F0 — lote 75

- Issue: [#7784](https://github.com/soldieg/ReBLACK-XBOX/issues/7784).
- Ghidra 12.1.3 local: corpo contíguo 0x000AC2F0–0x000AC35F (inclusive), 112 bytes, 39 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC72B (000ac720).
- Callees diretos observados: 0x00022DD0 (00022dd0), 0x00022E8C (00022e8c), 0x000AFF30 (000aff30).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `6cc1b06eb09e6e73e286de291a722403f91709c8a01cb4a53cd9457068dfaab9`.
- Fonte C SHA-256: `9e2098de2002500902af8243f8d47148c4b1afd36d754f44852e590196aa4102`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AC2F0`, tamanho 112 bytes; as seções COFF `.text$mn` são idênticas byte a byte (112/112 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `6cc1b06eb09e6e73e286de291a722403f91709c8a01cb4a53cd9457068dfaab9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
