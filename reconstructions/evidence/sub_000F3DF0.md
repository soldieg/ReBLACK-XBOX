# sub_000F3DF0 — lote 65

- Issue: [#6852](https://github.com/soldieg/ReBLACK-XBOX/issues/6852).
- Ghidra 12.1.3 local: corpo contíguo 0x000F3DF0–0x000F3E13 (inclusive), 36 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E4DA0 (000e4da0), 0x000F1DE0 (000f1de0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `758e43829fb1bcde71ccfce0c3fdb10a80ec791f12b314b52c31c7b1470923ed`.
- Fonte C SHA-256: `48b378659f33577cee7f8c937d993b61798911e81d4e36eebf7b1d26464064c8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000F3DF0`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `b8c9b9b31b0d71942cf82fc5816e2b4f67f94970a978b1fdbaaf987a1d0a3a3a`; objeto compilado: `68393133c7c5d8b04f85fca3abaa1cee07ea3dd573d79aafab4d094d7c88d27c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
