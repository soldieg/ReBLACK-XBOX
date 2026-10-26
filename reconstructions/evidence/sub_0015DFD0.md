# sub_0015DFD0 — lote 66

- Issue: [#6994](https://github.com/soldieg/ReBLACK-XBOX/issues/6994).
- Ghidra 12.1.3 local: corpo contíguo 0x0015DFD0–0x0015E010 (inclusive), 65 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0015A3B0 (0015a3b0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `c42c8654bd372840ad1ceb926b4d9a7097495c03311fe81fb4d8d128ac39ed45`.
- Fonte C SHA-256: `6abbb7033064aafc6ddccacd4671e1c06183f39a8f67d1ab8b9337136b22506c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0015DFD0`, tamanho 65 bytes; seção COFF `.text$mn` idêntica byte a byte (65/65 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `758e4fe2a3ca9918d8067b492d754c5dd77dc2a9be54a5d2b71d5e75a1a57b70`; objeto compilado: `b5c2231159899d9afa3123927ddb99939fce5889f0bcaa30396510ebcfe847fc`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
