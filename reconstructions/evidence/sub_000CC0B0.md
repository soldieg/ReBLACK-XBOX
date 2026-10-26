# sub_000CC0B0 — lote 64

- Issue: [#6758](https://github.com/soldieg/ReBLACK-XBOX/issues/6758).
- Ghidra 12.1.3 local: corpo contíguo 0x000CC0B0–0x000CC119 (inclusive), 106 bytes, 33 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `d0b4f5373bb79e8be58b2f4b673d9938f853cb54cdf3eda6187d6f50ccde093d`.
- Fonte C SHA-256: `43453c8aafa13d6add8a8b5aa1e1d0b07184e4d68fbbcff6c6991a909d600cd3`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CC0B0`, tamanho 106 bytes; seção COFF `.text$mn` idêntica byte a byte (106/106 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `103a13ff8b18404c9738a97fd77d54f976529a14baf6e800f571373c447764db`; objeto compilado: `d47c8a289f9984fd2fab288f49cbbed5241414e211b8e15cc3a368de20eaafac`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
