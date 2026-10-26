# sub_001B6FE0 — lote 68

- Issue: [#7233](https://github.com/soldieg/ReBLACK-XBOX/issues/7233).
- Ghidra 12.1.3 local: corpo contíguo 0x001B6FE0–0x001B701D (inclusive), 62 bytes, 21 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `f338bedb418fe7ea870fea1f9525748585f7ac22629ae2e992f228647abdf2ea`.
- Fonte C SHA-256: `f715e4ef86a120e248e5fcd3eaa6dd886e1002296b0de734be522267b4d0d21d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001B6FE0`, tamanho 62 bytes; seção COFF `.text$mn` idêntica byte a byte (62/62 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `01de77ef1e10735adf5c49c6262de8f9f8832b73d43b42db587b9af137b4ae76`; objeto compilado: `36da5d4c79a9c4c89065f33ee4b2c0020d296f2c289a6b4fbeaaab142cd567d0`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
