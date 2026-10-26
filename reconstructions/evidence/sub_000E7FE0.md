# sub_000E7FE0 — lote 64

- Issue: [#6834](https://github.com/soldieg/ReBLACK-XBOX/issues/6834).
- Ghidra 12.1.3 local: corpo contíguo 0x000E7FE0–0x000E8029 (inclusive), 74 bytes, 31 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E7C50 (000e7c50).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `3a8c8d9539318e9de2df08768cdaed2d4d7dd718d4fb39d8afc58c4d4cbb351c`.
- Fonte C SHA-256: `c62d616bb1ce04c9f7506a7f60e68c14ed3fb56e1bbd09c6fb1defdbfbaff5c4`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000E7FE0`, tamanho 74 bytes; seção COFF `.text$mn` idêntica byte a byte (74/74 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `b2f115f66dd6831d644a65a00c6310d0c3d48c4139b62cda83c91646c2a4bc7a`; objeto compilado: `d91caed8d6377720632af127b8479860f4aea70b1b09f6313eecbeac9ca9d6a5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
