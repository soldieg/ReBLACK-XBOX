# sub_000ACC10 — lote 79

- Issue: [#8259](https://github.com/soldieg/ReBLACK-XBOX/issues/8259).
- Ghidra 12.1.3 local: corpo contíguo 0x000ACC10–0x000ACC27 (inclusive), 24 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00081750 (00081750), 0x000ADF70 (000adf70).
- Referências de dados entrantes observadas: 1.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `5456fe018144836a2ff7363bc9d06139a82ce68a1f30f2e53b0d64c3307fa16d`.
- Fonte C SHA-256: `c1318a212c936683bcfd2a3e0e68046279576f911c15d8ba8cadf3b0d5a73552`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ACC10`, tamanho 24 bytes; as seções COFF `.text$mn` são idênticas byte a byte (24/24 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `5456fe018144836a2ff7363bc9d06139a82ce68a1f30f2e53b0d64c3307fa16d`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
