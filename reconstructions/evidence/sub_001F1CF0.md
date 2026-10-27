# sub_001F1CF0 — lote 69

- Issue: [#7344](https://github.com/soldieg/ReBLACK-XBOX/issues/7344).
- Ghidra 12.1.3 local: corpo contíguo 0x001F1CF0–0x001F1D22 (inclusive), 51 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `5b581851c7a4c417d1e4cbcf882145dd6a9fcd2162b84f5f390635b5df54e6be`.
- Fonte C SHA-256: `2d75323cd803db834cf8bea987df2515e9531b5928df53465032bd834c6586cd`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F1CF0`, tamanho 51 bytes; seção COFF `.text$mn` idêntica byte a byte (51/51 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `56035b4fa019dfccdec88773bd64fccdb48e9cc03fd4db478773a0ec1e1a0f57`; objeto compilado: `0a8853c5363fef5d7c1be1c8bf66b57a62099691c25be444f0da5c678c257331`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
