# sub_001F1CB0 — lote 69

- Issue: [#7342](https://github.com/soldieg/ReBLACK-XBOX/issues/7342).
- Ghidra 12.1.3 local: corpo contíguo 0x001F1CB0–0x001F1CE6 (inclusive), 55 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `d807f1f1ec2e7a6da19e965015744821f661ea9d45506934975f9eb182fb7406`.
- Fonte C SHA-256: `027688bdfb9942f30675163fe0b61471407275fd358b990859d70835bb4e85a5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F1CB0`, tamanho 55 bytes; seção COFF `.text$mn` idêntica byte a byte (55/55 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `d192cf02f663fed1409c1f2a4df1dd0b685a1ecdbbb6413ca38f78cbd317a3ec`; objeto compilado: `db48c64af50a2cf9cbe7e024ca471017d88298de8a3b8b41979b5cfc1a2a213b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
