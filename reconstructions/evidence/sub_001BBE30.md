# sub_001BBE30 — lote 69

- Issue: [#7264](https://github.com/soldieg/ReBLACK-XBOX/issues/7264).
- Ghidra 12.1.3 local: corpo contíguo 0x001BBE30–0x001BBE59 (inclusive), 42 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `943834d0cf8a37a04482759949a03d86ff7b09f92b9a1781b676cde0409b6ad4`.
- Fonte C SHA-256: `535b7ace10ecf944074367d514c7f6aec4eab4fb881a1f8dea01bbd4d97e8df8`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BBE30`, tamanho 42 bytes; seção COFF `.text$mn` idêntica byte a byte (42/42 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `7cfdd36f3f961f61227bb6408b190414a07593b39f15868ed5c2163ebe659374`; objeto compilado: `2c7453e98f4a7ab45c355ae4ddf655925c1d25e7e9efc04da10bd7f0253127da`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
