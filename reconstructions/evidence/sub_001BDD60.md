# sub_001BDD60 — lote 69

- Issue: [#7272](https://github.com/soldieg/ReBLACK-XBOX/issues/7272).
- Ghidra 12.1.3 local: corpo contíguo 0x001BDD60–0x001BDDAB (inclusive), 76 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `56c6dbd85e550f539d0030d9dacd5ccb917c410c3487027ebe007c00f6b12157`.
- Fonte C SHA-256: `b717f6a239a8f9b6834f3de8fe8bd6e6bf80c2a0a67e3b21d1da7eee4b0f72bf`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BDD60`, tamanho 76 bytes; seção COFF `.text$mn` idêntica byte a byte (76/76 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `49ef3360fdd394d69d7519a3b239d03c793dfdf9deeebf8fb5e9857863dca2cb`; objeto compilado: `a4ad472e068a4acd30ff887a8966cf5be2971e2d2fce68d292af63d427e545df`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
