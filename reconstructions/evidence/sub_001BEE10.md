# sub_001BEE10 — lote 69

- Issue: [#7285](https://github.com/soldieg/ReBLACK-XBOX/issues/7285).
- Ghidra 12.1.3 local: corpo contíguo 0x001BEE10–0x001BEE33 (inclusive), 36 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `2ec2dbe2fff1e89cca1d5ed368b31c479034e9a2f4f74a2c174390d6f48ad516`.
- Fonte C SHA-256: `8ffaddfc16e783de2f5e0e158fefb31d78e7cf463bfbccad3de21e470a042cef`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BEE10`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `3d81528a8fa6f27b01d314c98bd88a9ebc519c0cc81f5e0291f7bf13e046da97`; objeto compilado: `4109abf42b05a3e4d4d8e3d8a5aa0f80a6660720dc22f52978ab4eacd0ffda63`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
