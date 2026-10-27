# sub_001CB2F0 — lote 69

- Issue: [#7313](https://github.com/soldieg/ReBLACK-XBOX/issues/7313).
- Ghidra 12.1.3 local: corpo contíguo 0x001CB2F0–0x001CB313 (inclusive), 36 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00187900 (00187900), 0x0018F7D0 (0018f7d0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `107cba1c7d893c6cbf8a7df25d62bf4a7df8001340549b5ce499800203699dd9`.
- Fonte C SHA-256: `cae99dc0bfb749a5cbe10660d5c182e80f60630056051d68806370d4d34b9474`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001CB2F0`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `a479d93dd85790b47ca0c6c95d539b11da150ad337b8ff7a220f5f4408816b0c`; objeto compilado: `de5f7f6cb131ab5c8c68aa2da15aa763076d80cafc943583338f20a47657cf10`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
