# sub_001A2ED0 — lote 75

- Issue: [#7812](https://github.com/soldieg/ReBLACK-XBOX/issues/7812).
- Ghidra 12.1.3 local: corpo contíguo 0x001A2ED0–0x001A2F25 (inclusive), 86 bytes, 28 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x001A9233 (001a9230).
- Callees diretos observados: 0x00189E40 (00189e40), 0x001A2C40 (001a2c40).
- Referências de dados entrantes observadas: 5.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `7617fb8bb895d113d09e592087f0ede78024b9b3062b63f38902c3d94642b34b`.
- Fonte C SHA-256: `d6ec40f9e5d098bee991af4fd894c1d80ed6d6860195a75fb8da84d989631df9`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_001A2ED0`, tamanho 86 bytes; as seções COFF `.text$mn` são idênticas byte a byte (86/86 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `7617fb8bb895d113d09e592087f0ede78024b9b3062b63f38902c3d94642b34b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
