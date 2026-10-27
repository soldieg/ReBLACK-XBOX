# sub_001BB0A0 — lote 69

- Issue: [#7256](https://github.com/soldieg/ReBLACK-XBOX/issues/7256).
- Ghidra 12.1.3 local: corpo contíguo 0x001BB0A0–0x001BB0D7 (inclusive), 56 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `bd455a279d8ef23f86386c4592530d8869fdc6c293862e8826568eb6ed06f5e4`.
- Fonte C SHA-256: `955adb832f9846e071d2d04855b935da2c518791ab3fdc81adf94d9cc33c63e4`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BB0A0`, tamanho 56 bytes; seção COFF `.text$mn` idêntica byte a byte (56/56 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `76e89355b6022ec7bf73e7c8e7a7d3b20485774fbae4783877cb23646f9437b3`; objeto compilado: `9fea954e59e4fe49cb63fe9c28313a487401dfc68b453a7c98c3ac48fb236b6f`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
