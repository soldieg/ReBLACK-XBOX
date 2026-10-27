# sub_001BE5D0 — lote 69

- Issue: [#7280](https://github.com/soldieg/ReBLACK-XBOX/issues/7280).
- Ghidra 12.1.3 local: corpo contíguo 0x001BE5D0–0x001BE603 (inclusive), 52 bytes, 24 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `1a350e05897b5ee0312bd021328896d9cb6351f558de4ac40f331dce0c1b26dd`.
- Fonte C SHA-256: `e0396688ac5cab39e9d0f37c336aa3506e2bc570232940712b839519f2a0417d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BE5D0`, tamanho 52 bytes; seção COFF `.text$mn` idêntica byte a byte (52/52 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `6ffa66aa3222f9b4936856b80db5dcdb9ee4338979aebb209715c27797fb38d5`; objeto compilado: `cbf725038114f1c83c6f42f607e76baa8f85208e6788f375e7481a15398d9430`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
