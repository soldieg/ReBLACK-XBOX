# sub_001A1CA0 — lote 68

- Issue: [#7167](https://github.com/soldieg/ReBLACK-XBOX/issues/7167).
- Ghidra 12.1.3 local: corpo contíguo 0x001A1CA0–0x001A1CD3 (inclusive), 52 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001980D0 (001980d0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `a22bc297984710f3f3df0e25a852405825b2558d7d0296b273033cb601ca2c06`.
- Fonte C SHA-256: `e313d4eac71751374b7458d946280edfad69c1ffd6e7b4f97d44fec635caab1c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001A1CA0`, tamanho 52 bytes; seção COFF `.text$mn` idêntica byte a byte (52/52 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `ea309d60482ba3b1ebda0768209189940ffc329cdd8b466696def787a511a810`; objeto compilado: `30db0a5726dfd16860d5692d81157e86c7f432b8bca31c628f642e2d6ea040d6`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
