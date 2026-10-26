# sub_000ECA60 — lote 65

- Issue: [#6841](https://github.com/soldieg/ReBLACK-XBOX/issues/6841).
- Ghidra 12.1.3 local: corpo contíguo 0x000ECA60–0x000ECA80 (inclusive), 33 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E7210 (000e7210).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `98daadd223785643604a0ec04a0e43aaf277b687cca8d1c392e1083ddd8c7ff1`.
- Fonte C SHA-256: `011c773638f7df9207b761d83ec23dc90586b02cfcdcf40924a626529cf2b2eb`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000ECA60`, tamanho 33 bytes; seção COFF `.text$mn` idêntica byte a byte (33/33 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `542ca30c9e36594fc8ce73500ba4e1e7c01094779cf0984798c02d64d29dc994`; objeto compilado: `87904f1c94ddf13ba450a69f4275a7d55918642f2c8bc6954ba78e4dd89f3991`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
