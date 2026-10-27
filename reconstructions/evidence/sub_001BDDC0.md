# sub_001BDDC0 — lote 69

- Issue: [#7274](https://github.com/soldieg/ReBLACK-XBOX/issues/7274).
- Ghidra 12.1.3 local: corpo contíguo 0x001BDDC0–0x001BDDF8 (inclusive), 57 bytes, 18 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `f32e872c944866edca51121cb4bd72fe4c042e4cfe59801ef6fbf19a7e327c9c`.
- Fonte C SHA-256: `936db815bdfa6c00b06c198e13ba355c0e4b368c87b14826db9d5edc37635ab7`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BDDC0`, tamanho 57 bytes; seção COFF `.text$mn` idêntica byte a byte (57/57 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `5b26ee3116aace3471bcfbb7016ed505cb2be90f453864bec83b5f3b207cab70`; objeto compilado: `f9776f2e0879477fc5c09951e84b99c46d708786f7e91e5c7bd0da110654dbc9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
