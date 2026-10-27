# sub_001BEFF0 — lote 69

- Issue: [#7287](https://github.com/soldieg/ReBLACK-XBOX/issues/7287).
- Ghidra 12.1.3 local: corpo contíguo 0x001BEFF0–0x001BF021 (inclusive), 50 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001F3FC0 (001f3fc0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `4dab57a577db2482b6313eb996d0b411e36beb21fabb586d82ffb3b664d6d8fb`.
- Fonte C SHA-256: `c522b80e038bdcdbe46cad4ff60ca24694f56dded4dc48e592d7106f43acf9a5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BEFF0`, tamanho 50 bytes; seção COFF `.text$mn` idêntica byte a byte (50/50 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `f8d42a5db22c7ff1b16b542f5d0a8775c4b575d2b8da872204e637627b0ba9b3`; objeto compilado: `147ac83573517b30ed7003c0a957856c3c452fc8beb2013cd0a9eab5b7df2ccc`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
