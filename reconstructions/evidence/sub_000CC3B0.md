# sub_000CC3B0 — lote 64

- Issue: [#6765](https://github.com/soldieg/ReBLACK-XBOX/issues/6765).
- Ghidra 12.1.3 local: corpo contíguo 0x000CC3B0–0x000CC3ED (inclusive), 62 bytes, 26 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `d13075dd05703eddb13a592734ae72a2b0df2889c5018004832937458f130faf`.
- Fonte C SHA-256: `9094a4dd82dad62b8358db9d870fd465ecf7ebc3a42e7449d574137fe2f4ebf4`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CC3B0`, tamanho 62 bytes; seção COFF `.text$mn` idêntica byte a byte (62/62 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `afd229e576fb5f0c94a9ecd036dfe4c127d9c3cb8084e7e848fc8d2b99ab8c51`; objeto compilado: `0b718d2332954f962827b47a56dbc30ffefb57bbb899d9c68addfc36490ddee7`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
