# sub_001F2BD0 — lote 75

- Issue: [#7814](https://github.com/soldieg/ReBLACK-XBOX/issues/7814).
- Ghidra 12.1.3 local: corpo contíguo 0x001F2BD0–0x001F2BF7 (inclusive), 40 bytes, 18 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x001F2C13 (001f2c00).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `7f7ee0342950c0310607d58f9dd6a15477454ee1bfc1b3bc0f5178a6ae34c6e5`.
- Fonte C SHA-256: `922bd618df4fb399e10136345ac6312c667e7068d08931a30410322acc57c3b3`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_001F2BD0`, tamanho 40 bytes; as seções COFF `.text$mn` são idênticas byte a byte (40/40 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `7f7ee0342950c0310607d58f9dd6a15477454ee1bfc1b3bc0f5178a6ae34c6e5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
