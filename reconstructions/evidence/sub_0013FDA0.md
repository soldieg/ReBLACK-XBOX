# sub_0013FDA0 — lote 66

- Issue: [#6950](https://github.com/soldieg/ReBLACK-XBOX/issues/6950).
- Ghidra 12.1.3 local: corpo contíguo 0x0013FDA0–0x0013FDEE (inclusive), 79 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `f996deb9ede68be3a4ac86b97bafaf149c7ba737d5be39dfd16c87f298b27e85`.
- Fonte C SHA-256: `117ec588acb65cb52a939659c2f37b0ef1f52cb67484f3382c21277a9f36bebc`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013FDA0`, tamanho 79 bytes; seção COFF `.text$mn` idêntica byte a byte (79/79 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `005caa9d6a69e4dddfbabf07c8b39b5056039da444c60e8c8bcbe25a4a96d549`; objeto compilado: `58bec129b568a2e910578190bd6f3813d3d898987d0af6ea503bfd6aa8f8d4f5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
