# sub_0013DFF0 — lote 65

- Issue: [#6928](https://github.com/soldieg/ReBLACK-XBOX/issues/6928).
- Ghidra 12.1.3 local: corpo contíguo 0x0013DFF0–0x0013E011 (inclusive), 34 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `c2aa52474297be2a7a0ed127cc81aa172b61a8d70e0b2c6a524137d521233fbd`.
- Fonte C SHA-256: `ec669ec88b77491c95beb5d406570a7db51cc259006eb9d872b774bf249daa27`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013DFF0`, tamanho 34 bytes; seção COFF `.text$mn` idêntica byte a byte (34/34 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `af29e80cbdb995eac9039d4fe285cd56bfb861bc7ddf49ed36f12fb4c0a649c0`; objeto compilado: `f388dc7bbcadbf3ec936f8c621ac6e11d5f9e022ba3646e19cd94703f64d9c93`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
