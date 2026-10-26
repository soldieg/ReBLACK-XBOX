# sub_001B7CF0 — lote 69

- Issue: [#7246](https://github.com/soldieg/ReBLACK-XBOX/issues/7246).
- Ghidra 12.1.3 local: corpo contíguo 0x001B7CF0–0x001B7D13 (inclusive), 36 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `7bc9ca4b9deaf3ee2d12ba3e0b68dddc78f6e19f698a9ebae8b9605ce5837c3a`.
- Fonte C SHA-256: `41dea96780effff2fb1b9917f3cd89ba7875b8cfb18c679846720c6cfa2d0f90`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001B7CF0`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `6ccc178399f07e51277cc02fc56859a4e69523f95ae3b958792db7a80290ed8f`; objeto compilado: `240e1881278af635d799f6abc347e6979a3d86cd9f75f16b047263494c25cec2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
