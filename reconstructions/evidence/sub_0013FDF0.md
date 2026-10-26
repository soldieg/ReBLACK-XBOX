# sub_0013FDF0 — lote 66

- Issue: [#6949](https://github.com/soldieg/ReBLACK-XBOX/issues/6949).
- Ghidra 12.1.3 local: corpo contíguo 0x0013FDF0–0x0013FE1B (inclusive), 44 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `6b4c1df95e5c8d404fc2f98cf936012aba47648d44e67e18d5d2170181dccbeb`.
- Fonte C SHA-256: `ddc2c6e573ddb50f173ddcc22bee358ae8ec14544073638296084ba69a693ac9`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013FDF0`, tamanho 44 bytes; seção COFF `.text$mn` idêntica byte a byte (44/44 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `5c2c8a0bcc9b7966ee832bc912461027b7de555ac1e936a7055db6209acb6c12`; objeto compilado: `77944230b097c61f63b7cb20b54920ae728bf22ff93dbe0f868e115896c2f194`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
