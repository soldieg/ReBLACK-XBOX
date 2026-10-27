# sub_001BE3B0 — lote 69

- Issue: [#7281](https://github.com/soldieg/ReBLACK-XBOX/issues/7281).
- Ghidra 12.1.3 local: corpo contíguo 0x001BE3B0–0x001BE3CF (inclusive), 32 bytes, 7 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001BDA70 (001bda70).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `a72bed880dca837c06305da1d6b0f7db1f6fdb5b025f6554a75c145b23abf599`.
- Fonte C SHA-256: `83940cd6c5c7c6b47184da4627e7f4186045798e432479649b669535f703ab7b`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BE3B0`, tamanho 32 bytes; seção COFF `.text$mn` idêntica byte a byte (32/32 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `4cfde0a4d9c850cfe2a5a7d4ceb4b1a82047b15535d1a8daa4d5661981fc5c1a`; objeto compilado: `b142e3defc2b4a9b3886e4d1e494cb0f9c6c2c77400c2bf506deebd86efac9cd`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
