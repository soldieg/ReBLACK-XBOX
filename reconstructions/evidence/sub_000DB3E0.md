# sub_000DB3E0 — lote 64

- Issue: [#6779](https://github.com/soldieg/ReBLACK-XBOX/issues/6779).
- Ghidra 12.1.3 local: corpo contíguo 0x000DB3E0–0x000DB40D (inclusive), 46 bytes, 21 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `92fba35a532ae2986d4068c5dd74a95413d69fb75ee7b247501de5edbf8b17cc`.
- Fonte C SHA-256: `9f88fa4c4600ce4b118f9a5961546c6961e70d38ffbc9a85ce9715367b520c59`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000DB3E0`, tamanho 46 bytes; seção COFF `.text$mn` idêntica byte a byte (46/46 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `26f8f5eb1ef9d580d1716fdbbbb48d50f086fb3e3ab3fd7119dfbf787dde431c`; objeto compilado: `e7c5c10c5f2392a11806251200a5e415a07ed4f01764eda988a2a30c02f591c1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
