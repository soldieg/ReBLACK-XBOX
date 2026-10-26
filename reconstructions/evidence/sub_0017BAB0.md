# sub_0017BAB0 — lote 66

- Issue: [#7024](https://github.com/soldieg/ReBLACK-XBOX/issues/7024).
- Ghidra 12.1.3 local: corpo contíguo 0x0017BAB0–0x0017BB04 (inclusive), 85 bytes, 42 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000B3430 (000b3430), 0x0017B070 (0017b070).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `e80fd7e348f8f4f00b12b3a77342df8dfa6815c5d4c9f3be6ffab962618516f6`.
- Fonte C SHA-256: `d5be6fac541dcba26bf71a1906ff573ccea1a429921b28124326eeb617309c64`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0017BAB0`, tamanho 85 bytes; seção COFF `.text$mn` idêntica byte a byte (85/85 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `da1401793f017b452a05d170c152656b25daf6207d39dc5d359dab92226e3caf`; objeto compilado: `24141e229ea889c5261cc19d9cc65110a15846c77edd26786b2c164fe66389ed`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
