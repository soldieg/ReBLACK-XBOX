# sub_001CADA0 — lote 69

- Issue: [#7311](https://github.com/soldieg/ReBLACK-XBOX/issues/7311).
- Ghidra 12.1.3 local: corpo contíguo 0x001CADA0–0x001CADD2 (inclusive), 51 bytes, 21 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `e22d4b6934b164a1685c1797cb2748a83b4aa71ca2d9a067084c6aad83c5eb61`.
- Fonte C SHA-256: `b06638c5cfc6252a3e4cdf796b3268f0e50d21de10c8ca2cd0667aaa8372f603`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001CADA0`, tamanho 51 bytes; seção COFF `.text$mn` idêntica byte a byte (51/51 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `730e164fdc9b929904612f7c0f7688a5257411ee24931f1041792837e46aab54`; objeto compilado: `7ad838a7c509a226abd36ba2f389ba8318391a41e5ec93e31a1bbc5c1159ec93`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
