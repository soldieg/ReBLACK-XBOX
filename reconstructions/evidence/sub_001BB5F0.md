# sub_001BB5F0 — lote 69

- Issue: [#7258](https://github.com/soldieg/ReBLACK-XBOX/issues/7258).
- Ghidra 12.1.3 local: corpo contíguo 0x001BB5F0–0x001BB628 (inclusive), 57 bytes, 24 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `855a2aeb0af3165a88c5b0a8aedcf344e79ad896c540f97b7d62e33b72d82fe9`.
- Fonte C SHA-256: `97217d10fc13d83289c683dd7768018a88e40b9fd792435f8980c37f054d1ff3`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BB5F0`, tamanho 57 bytes; seção COFF `.text$mn` idêntica byte a byte (57/57 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `95fcc0913366ed39b0840ca517169319b0fe4ba47f1b5e561a42831691721984`; objeto compilado: `d63adb969a030b56f8a94dd43f4f813880f9b206871af201b181e1b1a13dab30`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
