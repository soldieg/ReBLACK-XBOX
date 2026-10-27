# sub_001BE7B0 — lote 69

- Issue: [#7282](https://github.com/soldieg/ReBLACK-XBOX/issues/7282).
- Ghidra 12.1.3 local: corpo contíguo 0x001BE7B0–0x001BE7D1 (inclusive), 34 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `d6e928fc33225fd77875ed31e652985a2e1c68820b50f9c1641200684940e75f`.
- Fonte C SHA-256: `d91c280e85996aa83eb67f9071147ab2cf1b9177801fdf144554b3c9c057e1a8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BE7B0`, tamanho 34 bytes; seção COFF `.text$mn` idêntica byte a byte (34/34 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `eb18055b8603b972134f704bd36c7b282900f58a8c7595b9f2ab9576c326a20a`; objeto compilado: `cf0309c2d4718c442c09e73ebe140a92f23961e95cbf1727ea5f263833280d1c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
