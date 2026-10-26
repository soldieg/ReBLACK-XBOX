# sub_0015BAD0 — lote 66

- Issue: [#6992](https://github.com/soldieg/ReBLACK-XBOX/issues/6992).
- Ghidra 12.1.3 local: corpo contíguo 0x0015BAD0–0x0015BAFE (inclusive), 47 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001F3FC0 (001f3fc0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `6f75c87460378b61776f2017657fa5afba43cccf00909ca672a1514b76b649d3`.
- Fonte C SHA-256: `d72024cea4f4d0a83d85f18e6286a8e2f5f19027083335f3cb6f3cc935d5bcb6`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0015BAD0`, tamanho 47 bytes; seção COFF `.text$mn` idêntica byte a byte (47/47 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `1a183054c4998e6cc4c80ca81635bd74d6d48c52b80e1f913e20d0d262172648`; objeto compilado: `2081febdf12d73ba6ac7bc482ffcad203fa1c8617667ac8f446278dfa6937c50`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
