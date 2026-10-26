# sub_000DBA40 — lote 64

- Issue: [#6783](https://github.com/soldieg/ReBLACK-XBOX/issues/6783).
- Ghidra 12.1.3 local: corpo contíguo 0x000DBA40–0x000DBA60 (inclusive), 33 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `eb6b4d43615aee7060ee3270c30241ffdf722f186b9e3667e3ca6603b828c53b`.
- Fonte C SHA-256: `cfef3eb5ed1fbde4fcc0d6d9b236e5dcfc85598346608e2e6c4da8fc98a49c08`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000DBA40`, tamanho 33 bytes; seção COFF `.text$mn` idêntica byte a byte (33/33 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `040ee7fa70a1b3b5446a7fe34d35a09ad00cbb909a3aaa0c485dbc61c6441962`; objeto compilado: `9510b856f8cfc258eff3322ff0cbe74d292320e2a0c614ef18f37f5194a2a272`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
