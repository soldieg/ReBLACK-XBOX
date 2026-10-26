# sub_001B7AF0 — lote 68

- Issue: [#7243](https://github.com/soldieg/ReBLACK-XBOX/issues/7243).
- Ghidra 12.1.3 local: corpo contíguo 0x001B7AF0–0x001B7B0F (inclusive), 32 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `c7d206cbaa24407b1e5eb1e08c592b4a30cd3febc3461121e64c854dd99d2ff1`.
- Fonte C SHA-256: `f388e54476418b247848988e62b3371496724a223db89638484a03ca99e82dee`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001B7AF0`, tamanho 32 bytes; seção COFF `.text$mn` idêntica byte a byte (32/32 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `b37e8fbf9d2caf39f57205e4746cb8036b30440eabaac84dc520ec8004cd1db2`; objeto compilado: `1717c175fdcbca983e45b060083f1c0788b5b8603c8c6ddfa33040f121bc65a4`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
