# sub_0013CDC0 — lote 65

- Issue: [#6912](https://github.com/soldieg/ReBLACK-XBOX/issues/6912).
- Ghidra 12.1.3 local: corpo contíguo 0x0013CDC0–0x0013CDEE (inclusive), 47 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `19525cdcafc2fe8d6d7eff34b328418f4f288a6e13a3d77e7824fb0abb2398dd`.
- Fonte C SHA-256: `3afeaddec354f45dda03209bd53d7fe641cc03adb85642ed2ff12be4ef640c8e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013CDC0`, tamanho 47 bytes; seção COFF `.text$mn` idêntica byte a byte (47/47 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `f4925591fd3248184d6d6fa1bba359a03dce96e6013c5164a9df14edf8b0983a`; objeto compilado: `db275ffe7057b2c186c390f1a7c3181a6be60375e4b16e37661c96fdb5fdfa61`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
