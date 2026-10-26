# sub_0017ECF0 — lote 66

- Issue: [#7026](https://github.com/soldieg/ReBLACK-XBOX/issues/7026).
- Ghidra 12.1.3 local: corpo contíguo 0x0017ECF0–0x0017ED19 (inclusive), 42 bytes, 16 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0017B440 (0017b440).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `7eb31f1523f8eb94ce4da694a5ffb3cb82e75521fc904d0d017c9bb6ec8b52a6`.
- Fonte C SHA-256: `b98e6cbde6aa8f6952883ca8ad108f0398daad737b1fd9d3d26b3cd0a03f2b27`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0017ECF0`, tamanho 42 bytes; seção COFF `.text$mn` idêntica byte a byte (42/42 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `3605838b6b8df56e1f97480857f20b614c082ca5160910f1dd2a3a3dc9133740`; objeto compilado: `129e35832cde66bfaa6d64b0301ba23eee28eb8218bae9e574e96bac5aa3d7ab`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
