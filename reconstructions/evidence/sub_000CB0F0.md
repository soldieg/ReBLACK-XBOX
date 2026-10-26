# sub_000CB0F0 — lote 64

- Issue: [#6754](https://github.com/soldieg/ReBLACK-XBOX/issues/6754).
- Ghidra 12.1.3 local: corpo contíguo 0x000CB0F0–0x000CB171 (inclusive), 130 bytes, 53 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BF710 (000bf710), 0x000BF7E0 (000bf7e0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `ef2b779fe9f56ab87131d5d785115e699c6d1d8d00d5b9cc0a38470aaacc12a3`.
- Fonte C SHA-256: `1d9273a81f56cd24692b7c73a08a7e359064988e06a096c5bce718cc6784304b`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CB0F0`, tamanho 130 bytes; seção COFF `.text$mn` idêntica byte a byte (130/130 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `67a7fd773a902f2faa3ee2927f539bc4aa8f3324ca81f0621d5dfda99c5becae`; objeto compilado: `e73089a37ee3621d60990def1e1d2d3679b33475b26589ab47bf6f929cc6094e`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
