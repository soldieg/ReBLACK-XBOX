# sub_001AD6E0 — lote 68

- Issue: [#7176](https://github.com/soldieg/ReBLACK-XBOX/issues/7176).
- Ghidra 12.1.3 local: corpo contíguo 0x001AD6E0–0x001AD71F (inclusive), 64 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001AD440 (001ad440).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `95ecd64d0b9b2747a15875e650bbadaddd4468c79e78101fdcbb14d210025797`.
- Fonte C SHA-256: `36f3dd3eeaff6e91f4439da963d52cadbc7bd451320ff1d38f77a85b585043b7`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001AD6E0`, tamanho 64 bytes; seção COFF `.text$mn` idêntica byte a byte (64/64 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `b2b57c35d3b1887278cf6f93c4a78feaf7483bb165860fa9f47e98441447e153`; objeto compilado: `bfc8bf2282c3a68f764a1678f5d909c5aaff201a9c2980dba2143cfb624f6919`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
