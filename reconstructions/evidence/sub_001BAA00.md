# sub_001BAA00 — lote 69

- Issue: [#7254](https://github.com/soldieg/ReBLACK-XBOX/issues/7254).
- Ghidra 12.1.3 local: corpo contíguo 0x001BAA00–0x001BAA31 (inclusive), 50 bytes, 9 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `38cab8bdd4443c4ec7473f14b2623ed13fb559c0a5d095494b850d3a59437680`.
- Fonte C SHA-256: `be8d4b3e3b9ff9008891ee047584b2e2fc8d81b3d2f212cfd42e45e82b9d0154`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BAA00`, tamanho 50 bytes; seção COFF `.text$mn` idêntica byte a byte (50/50 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `593083be21bbdafaffa79572468a189f18700980baf13a86972dd7f4036561a9`; objeto compilado: `12829fca50afc0fa41ad57e170fb9ae0cd0ec4c3f5676eacc332eabefd82cc17`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
