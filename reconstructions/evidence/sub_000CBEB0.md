# sub_000CBEB0 — lote 64

- Issue: [#6755](https://github.com/soldieg/ReBLACK-XBOX/issues/6755).
- Ghidra 12.1.3 local: corpo contíguo 0x000CBEB0–0x000CBF23 (inclusive), 116 bytes, 28 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000C0620 (000c0620), 0x000C3670 (000c3670).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `ea02467789c41a327d2830ecef5f5d1fb0e0e0e5c4bae224a70fd7a7a6e2db4c`.
- Fonte C SHA-256: `1c6450a44091cf5a933c4a149c2d718ea22ac1dc8809e534795d4287b34f7b7d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CBEB0`, tamanho 116 bytes; seção COFF `.text$mn` idêntica byte a byte (116/116 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `ada9279fcf7f84a084b9df32eea95b0ba65b32e7b2ea7c8fd107e2b4fe6e92a5`; objeto compilado: `a711bfe6f61e671d974bc8d5c8dce16dbf8a3cf09dd079387811a184aa665301`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
