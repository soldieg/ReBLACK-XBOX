# sub_000AFF70 — lote 74

- Issue: [#7720](https://github.com/soldieg/ReBLACK-XBOX/issues/7720).
- Ghidra 12.1.3 local: corpo contíguo 0x000AFF70–0x000AFF8F (inclusive), 32 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000AC463 (000ac440).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `eb8016c6d1db402c8ac5df303e805441b150eeba98b208f344a0570a970208b3`.
- Fonte C SHA-256: `d843745b9a3ff3e432ea593327605c959b7ae80a1272fd10cbf4b8724c2e110e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AFF70`, tamanho 32 bytes; as seções COFF `.text$mn` são idênticas byte a byte (32/32 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `eb8016c6d1db402c8ac5df303e805441b150eeba98b208f344a0570a970208b3`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
