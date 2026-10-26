# sub_0015FDA0 — lote 66

- Issue: [#6997](https://github.com/soldieg/ReBLACK-XBOX/issues/6997).
- Ghidra 12.1.3 local: corpo contíguo 0x0015FDA0–0x0015FDE0 (inclusive), 65 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `4c7fbb43138f80ca45c993fb677dcc8dacf6bee70b1ade0f3b2a983acba200f1`.
- Fonte C SHA-256: `43202f6ff4f18b0d68e747dde81c34d5c5234e164f418eeeb9a6374b9eecde95`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0015FDA0`, tamanho 65 bytes; seção COFF `.text$mn` idêntica byte a byte (65/65 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `6bc299bee859e7c248053061815e0add3316185999e0008e1ac8bb542df24eed`; objeto compilado: `aeb263c636ea437b9d7f4055d84b7926c1579f0e2a245bd800b137fc0a8b5407`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
