# sub_000E7EA0 — lote 64

- Issue: [#6831](https://github.com/soldieg/ReBLACK-XBOX/issues/6831).
- Ghidra 12.1.3 local: corpo contíguo 0x000E7EA0–0x000E7FD2 (inclusive), 307 bytes, 118 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A2373 (000a2373), 0x000E7C50 (000e7c50).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `5616e9c65104d1f31e8dc7eefca27156dd554b83ccf7d6c338ab111e09918a35`.
- Fonte C SHA-256: `3c9121a0c19447927e54247f8288e3ff02e4a920ee29f69f87cee392964f8c86`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000E7EA0`, tamanho 307 bytes; seção COFF `.text$mn` idêntica byte a byte (307/307 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `75578dc7c9b3aff78eae331938e7d8aa99be4ef35bd2c3289010dd254a451abe`; objeto compilado: `c99724a167d5db18614b51a3fc225d23d7d7952c0f0c3199f0767919de4a1ff7`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
