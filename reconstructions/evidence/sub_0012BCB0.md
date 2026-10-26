# sub_0012BCB0 — lote 65

- Issue: [#6882](https://github.com/soldieg/ReBLACK-XBOX/issues/6882).
- Ghidra 12.1.3 local: corpo contíguo 0x0012BCB0–0x0012BCD4 (inclusive), 37 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0012B740 (0012b740), 0x0012B8E0 (0012b8e0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `0d67c75c0eb483d07379135fd99ddc3bd6deb9eb8d230ab823c0cbbe13bddcdf`.
- Fonte C SHA-256: `b507ce62227f0ae06c5d7732c12f21069e088d4f5c09a6866cb7906e8bb0e5e0`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012BCB0`, tamanho 37 bytes; seção COFF `.text$mn` idêntica byte a byte (37/37 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `d663a03cafad45e93d397e9945c046fb6864008de9eace69373c5e12c603f131`; objeto compilado: `bf502db27471e028214679a3aab21c7976d14178732f6eecdab2bfabe137f140`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
