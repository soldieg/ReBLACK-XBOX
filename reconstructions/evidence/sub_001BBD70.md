# sub_001BBD70 — lote 69

- Issue: [#7261](https://github.com/soldieg/ReBLACK-XBOX/issues/7261).
- Ghidra 12.1.3 local: corpo contíguo 0x001BBD70–0x001BBDAA (inclusive), 59 bytes, 25 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `78495291a51ffd421c58d959195deb1ad7395ea0c1d2d535b561fcfd31057cb9`.
- Fonte C SHA-256: `31eaca02e4796ff2a76cb185106e3bc7b6adb360fd6062a4990b372fd692aee5`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BBD70`, tamanho 59 bytes; seção COFF `.text$mn` idêntica byte a byte (59/59 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `c73c7ebc4b6276ed85f8faf756dcaae5b4a1bb9bbbb868f1d8ae7d7e95039704`; objeto compilado: `94a373fb426dbe49f30dea3809829b64e8677f44cfb984bb1887ac7e6f5434ff`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
