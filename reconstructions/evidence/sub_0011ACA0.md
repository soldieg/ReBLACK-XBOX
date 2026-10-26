# sub_0011ACA0 — lote 65

- Issue: [#6868](https://github.com/soldieg/ReBLACK-XBOX/issues/6868).
- Ghidra 12.1.3 local: corpo contíguo 0x0011ACA0–0x0011ACFD (inclusive), 94 bytes, 31 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BF2A0 (000bf2a0), 0x0011A4A0 (0011a4a0), 0x001F3A80 (001f3a80).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `ffc6f363c81f17ec704cc7ee96ab52ac07c68dd7c4ab192548d15f0395474cab`.
- Fonte C SHA-256: `9bf04b01044b6957e04fae88f3556e54c4709b11a2f22e73b7e4186277b6db7c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0011ACA0`, tamanho 94 bytes; seção COFF `.text$mn` idêntica byte a byte (94/94 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `7f8e9123fdfbf382ea96965426c64590304b6869295359df2647a8cece9c8667`; objeto compilado: `71788e2de725888f2042b6174df5db06e25f905ddcb9a16683e90a2dfe351d0f`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
