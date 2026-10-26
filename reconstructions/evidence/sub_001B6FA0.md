# sub_001B6FA0 — lote 68

- Issue: [#7232](https://github.com/soldieg/ReBLACK-XBOX/issues/7232).
- Ghidra 12.1.3 local: corpo contíguo 0x001B6FA0–0x001B6FDD (inclusive), 62 bytes, 21 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `22910bb20ac61873ce0bdbbbd40f1675328ac1d630a1ee4eb6b174882d752968`.
- Fonte C SHA-256: `89444f054b21831ba5c50581ba272b7a91399425e37ad4fc4b500870c1a72812`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001B6FA0`, tamanho 62 bytes; seção COFF `.text$mn` idêntica byte a byte (62/62 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `ffbc3203caa35d956c55f05ca17506e5e21c1393814877659afe4ebb1b2208f8`; objeto compilado: `5c89dbb4526455afd084392660c725edaa5bfe39eada72aacce04ca45039fda9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
