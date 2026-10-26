# sub_0013CAA0 — lote 65

- Issue: [#6918](https://github.com/soldieg/ReBLACK-XBOX/issues/6918).
- Ghidra 12.1.3 local: corpo contíguo 0x0013CAA0–0x0013CAE9 (inclusive), 74 bytes, 18 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `f55432c7c58d460b1a71d6fea1db9450aada78eefe46f86858927f34432c694e`.
- Fonte C SHA-256: `714a777a217c72610b3ef59b0a8f729974d023bb11e6578e735329afe5d969de`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013CAA0`, tamanho 74 bytes; seção COFF `.text$mn` idêntica byte a byte (74/74 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `fa2dd070bf120ef15c21f61b931c033e782ca64f585bd7aea4e1d27a2d388cf7`; objeto compilado: `b06b415f2dee858233142f01cc1e7a2f7e7c75b42e15a4118ec253cec1c52d3a`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
