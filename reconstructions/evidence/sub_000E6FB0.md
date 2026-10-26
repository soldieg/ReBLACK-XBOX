# sub_000E6FB0 — lote 64

- Issue: [#6835](https://github.com/soldieg/ReBLACK-XBOX/issues/6835).
- Ghidra 12.1.3 local: corpo contíguo 0x000E6FB0–0x000E70B2 (inclusive), 259 bytes, 97 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000E709C (000e6fb0).
- Callees diretos observados: 0x000E4210 (000e4210), 0x000E6FB0 (000e6fb0).
- Screen local de componentes: tamanho do grupo direto 1; 1 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `6bedc61db0287cb8a3565e1f1f3194b086d9e6726229d5f49a139113832738db`.
- Fonte C SHA-256: `29270313b6213335209a03f40e8765167da583a83f8ca77657709417fa57fc52`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000E6FB0`, tamanho 259 bytes; seção COFF `.text$mn` idêntica byte a byte (259/259 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `a8a5989587d88fad244f51535987c35b7716fe2297b237a1808b0ce048bae21b`; objeto compilado: `5246f6ef9ad1ab46ffb8aea5f83f4825b08310857f9c5fe91725263b8146379b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
