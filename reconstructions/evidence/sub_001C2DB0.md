# sub_001C2DB0 — lote 69

- Issue: [#7296](https://github.com/soldieg/ReBLACK-XBOX/issues/7296).
- Ghidra 12.1.3 local: corpo contíguo 0x001C2DB0–0x001C2DF9 (inclusive), 74 bytes, 24 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00092250 (00092250), 0x000C44C0 (000c44c0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `6769ef45b4aaaa6d6ad8d58a9ba60eefe8d07a5de4874278f8b56d65c7112335`.
- Fonte C SHA-256: `94f5e04ecfce85a42bad09f373cc66c1a3facca30575be6a1bb8cc5b8f05279a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001C2DB0`, tamanho 74 bytes; seção COFF `.text$mn` idêntica byte a byte (74/74 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `3e552def434370b6e50155cd5b54dc7bd009358530a94bc04673c8a5c85f326e`; objeto compilado: `09e350d5f1c72819c8b3d0ba63c359055bba4c515784f6867c6c30e5fccef804`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
