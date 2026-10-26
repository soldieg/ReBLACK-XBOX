# sub_001ABA40 — lote 68

- Issue: [#7174](https://github.com/soldieg/ReBLACK-XBOX/issues/7174).
- Ghidra 12.1.3 local: corpo contíguo 0x001ABA40–0x001ABA78 (inclusive), 57 bytes, 25 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001A8B30 (001a8b30).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `26ae73f4229d6974bd9dcccb64e393d65591b52839b1e68cca03e2e91c5f1608`.
- Fonte C SHA-256: `884979dcbd4122c47a794730f4f2793d7aa5911dc3f58cd7974041f98a41aee0`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001ABA40`, tamanho 57 bytes; seção COFF `.text$mn` idêntica byte a byte (57/57 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `75c33bca314e24903f9877c0d06955f224ce7a012bcda58b6df2d391c7b855fa`; objeto compilado: `1bbdb679a6d2a4c2a554939b2d249fd0064e96f6c7f0448b3113404737d83fc2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
