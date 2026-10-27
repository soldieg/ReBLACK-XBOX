# sub_001BB8C0 — lote 69

- Issue: [#7260](https://github.com/soldieg/ReBLACK-XBOX/issues/7260).
- Ghidra 12.1.3 local: corpo contíguo 0x001BB8C0–0x001BB8E3 (inclusive), 36 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `8343febbfbe3679e433c057f531bd23dc361789d3cf602567dd236e3c70e2abd`.
- Fonte C SHA-256: `cb2188887cb1b95e6c033b58c009660026e7f325390306af31a4d0d9a8c2e2a8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BB8C0`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `42e73f3ae395d72ebaf90bedd2d3fa5e9ed0e77500caba7361e9734793e24459`; objeto compilado: `4319118f043705b5c8e4f050b945ea08f86b3c37ed32c909e67f8a3d0f902562`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
