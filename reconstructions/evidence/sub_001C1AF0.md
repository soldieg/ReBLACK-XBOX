# sub_001C1AF0 — lote 69

- Issue: [#7290](https://github.com/soldieg/ReBLACK-XBOX/issues/7290).
- Ghidra 12.1.3 local: corpo contíguo 0x001C1AF0–0x001C1BFA (inclusive), 267 bytes, 74 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BC260 (000bc260), 0x000CB210 (000cb210).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `a3341f2781c352de3d54e11d7db740cb8ffa3ed3da3c87d17aa558c21e50410c`.
- Fonte C SHA-256: `10be0b2956621ec3b69119b30497d829b0126e8fca132526eba8045450b49fa2`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001C1AF0`, tamanho 267 bytes; seção COFF `.text$mn` idêntica byte a byte (267/267 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `a3b2c15143a16e86194021022102dfb21f1703a3ccf1266f4a633bfad1f15765`; objeto compilado: `fa490969ed6f4c96f3133b4362933d28a4346dab3ac190fc1c86ad5a027cb987`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
