# sub_0013EDE0 — lote 66

- Issue: [#6943](https://github.com/soldieg/ReBLACK-XBOX/issues/6943).
- Ghidra 12.1.3 local: corpo contíguo 0x0013EDE0–0x0013EE02 (inclusive), 35 bytes, 10 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `10aa72128e47f352460d390a973e7a1dfd247d2e991841b2472f4c5879effee9`.
- Fonte C SHA-256: `9447da2ae593aab4a0c9e867377fa99fadc7fd92cdc92365b04526c1534f2c72`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013EDE0`, tamanho 35 bytes; seção COFF `.text$mn` idêntica byte a byte (35/35 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `4a5eee49b0b875834963fe4d740c778f76e6d1373d002eab83216243acb2e021`; objeto compilado: `fb84baee61695f86883cffd14e4d19a1542c1d5f482fc8d25fb76c41a55f3849`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
