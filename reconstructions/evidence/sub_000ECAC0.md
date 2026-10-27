# sub_000ECAC0 — lote 74

- Issue: [#7738](https://github.com/soldieg/ReBLACK-XBOX/issues/7738).
- Ghidra 12.1.3 local: corpo contíguo 0x000ECAC0–0x000ECB66 (inclusive), 167 bytes, 47 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0010D5ED (0010d420).
- Callees diretos observados: 0x000E3810 (000e3810), 0x000E5880 (000e5880).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 1; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `46edcf5e3fcb046c4e192a93212529f91e343ece861dd402cfea9a6bcbde0b05`.
- Fonte C SHA-256: `3d88d91acedfcf34ad8754c9243a1c4285066de1d1f85f870c3f2a2ec489adfc`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000ECAC0`, tamanho 167 bytes; as seções COFF `.text$mn` são idênticas byte a byte (167/167 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `46edcf5e3fcb046c4e192a93212529f91e343ece861dd402cfea9a6bcbde0b05`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
