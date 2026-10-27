# sub_001BB6B0 — lote 69

- Issue: [#7259](https://github.com/soldieg/ReBLACK-XBOX/issues/7259).
- Ghidra 12.1.3 local: corpo contíguo 0x001BB6B0–0x001BB6D8 (inclusive), 41 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `235a819ea57fecef23b7b8201677af0f25a74dc3684c74e585b7cbbfec70f3d8`.
- Fonte C SHA-256: `3fcfec86bce9756a9bbed3c9b56cb8446cb6f8ea328c17b538aa4c5cb821030c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BB6B0`, tamanho 41 bytes; seção COFF `.text$mn` idêntica byte a byte (41/41 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `cf12be9e4db4950333e479b8738e78c201647bc02b6c2f1f08755574bc8f2dc7`; objeto compilado: `9a1381a58241cd3f492c3bcee3c3d3bb35ee3453a1558d634281c804bb39b3e1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
