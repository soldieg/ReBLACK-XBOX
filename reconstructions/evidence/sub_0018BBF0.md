# sub_0018BBF0 — lote 67

- Issue: [#7135](https://github.com/soldieg/ReBLACK-XBOX/issues/7135).
- Ghidra 12.1.3 local: corpo contíguo 0x0018BBF0–0x0018BC21 (inclusive), 50 bytes, 16 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001882A0 (001882a0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `b79ec827dca3db69d6ceb9fd6acffc3d1c948cd897991a985993cc92fbbd0a17`.
- Fonte C SHA-256: `abc0318e0e18b222398c0391bc9c4cacbd8b9b4ca6964c4c5944596b28d2d4f5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0018BBF0`, tamanho 50 bytes; seção COFF `.text$mn` idêntica byte a byte (50/50 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `9fbf8352feb312062dc6c78a1cc8aec5d2043f979f34091b6ed13feaea4f1d16`; objeto compilado: `97039e26edd53a429e3cb530af934424805505682f0e77ed7ec99577f7b9e4ea`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
