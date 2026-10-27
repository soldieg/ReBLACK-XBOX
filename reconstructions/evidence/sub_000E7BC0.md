# sub_000E7BC0 — lote 74

- Issue: [#7737](https://github.com/soldieg/ReBLACK-XBOX/issues/7737).
- Ghidra 12.1.3 local: corpo contíguo 0x000E7BC0–0x000E7C4F (inclusive), 144 bytes, 46 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0010D63C (0010d420).
- Callees diretos observados: 0x000E5880 (000e5880).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `a1577ad3735b81f28480eb04e9ff3601bcf97d6efbc13b6e35505f433051607a`.
- Fonte C SHA-256: `8154cbd55ecfc813f4a9b285f00ecd99a78afaf842b302c83f61dbac029c11fa`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000E7BC0`, tamanho 144 bytes; as seções COFF `.text$mn` são idênticas byte a byte (144/144 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `a1577ad3735b81f28480eb04e9ff3601bcf97d6efbc13b6e35505f433051607a`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
