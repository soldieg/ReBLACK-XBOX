# sub_000A6E7D — lote 74

- Issue: [#7706](https://github.com/soldieg/ReBLACK-XBOX/issues/7706).
- Ghidra 12.1.3 local: corpo contíguo 0x000A6E7D–0x000A6E86 (inclusive), 10 bytes, 3 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5e6c0bbee374e84591c7ac00124634bce7d4a1b49c97186ac0bb8b4bdbfeba15`.
- Fonte C SHA-256: `4c1a602ec843743e3dc35283559b10ae1e5eec5ae6a282ef58fc45e2eb928575`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000A6E7D`, tamanho 10 bytes; as seções COFF `.text$mn` são idênticas byte a byte (10/10 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5e6c0bbee374e84591c7ac00124634bce7d4a1b49c97186ac0bb8b4bdbfeba15`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
