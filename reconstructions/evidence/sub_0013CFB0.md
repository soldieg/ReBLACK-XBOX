# sub_0013CFB0 — lote 65

- Issue: [#6916](https://github.com/soldieg/ReBLACK-XBOX/issues/6916).
- Ghidra 12.1.3 local: corpo contíguo 0x0013CFB0–0x0013CFDC (inclusive), 45 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `1c3e019c5214d2a30991b71e453b280c0256962756614a09a94f934f61001cb5`.
- Fonte C SHA-256: `a2c87a5e89ee7ef77b6da309b046d97d09c71df1fcc6b87440fcafdfde3e3ade`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013CFB0`, tamanho 45 bytes; seção COFF `.text$mn` idêntica byte a byte (45/45 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `08ce7a6c26a4d2e1400b69073f02405e2fee4c926940118820ddf49aaefbb5ef`; objeto compilado: `c2e665d89c5d64ba73f0f11956ba6c1eb8304829f06e48c6651526d6790d01e2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
