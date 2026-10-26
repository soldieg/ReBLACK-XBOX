# sub_000F0FE0 — lote 65

- Issue: [#6842](https://github.com/soldieg/ReBLACK-XBOX/issues/6842).
- Ghidra 12.1.3 local: corpo contíguo 0x000F0FE0–0x000F1129 (inclusive), 330 bytes, 108 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E5880 (000e5880), 0x000E7C50 (000e7c50).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `d22303c8236b623b1e51a5c5b0b56e9c7739b6e5f91c1db289fc39965f48350a`.
- Fonte C SHA-256: `aeaf1fcc348c24c59e18dca7f1ae3e5df6faa2d5127b2a21f739299b9f315240`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000F0FE0`, tamanho 330 bytes; seção COFF `.text$mn` idêntica byte a byte (330/330 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `e1d096d92b9881651d48f2a037f47c4d74aa001dac0f8e24861170e91a515a77`; objeto compilado: `53fd1bb33a93de55d7f7f69ad44688e379e548336177b06236cdca96a00ab869`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
