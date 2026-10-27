# sub_001BEBD0 — lote 69

- Issue: [#7284](https://github.com/soldieg/ReBLACK-XBOX/issues/7284).
- Ghidra 12.1.3 local: corpo contíguo 0x001BEBD0–0x001BEBFB (inclusive), 44 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001BB920 (001bb920).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `6a0db2953c6bf0ddf718a5c501ea8c8daba628f66ca4d036ed2ca56d35763605`.
- Fonte C SHA-256: `69e7d0db54c045326e970b11ea6c3fe43fea795cee72660910a3f589a1728d08`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BEBD0`, tamanho 44 bytes; seção COFF `.text$mn` idêntica byte a byte (44/44 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `fcfa3efd1b5e3d388eb7b04a3b187dbfa4d6e5f6430c7f466beae440447ed44e`; objeto compilado: `522e1587ae35ef03fe9e2cc93aa9ce2bd39f7c839bbb7f8433f6568bc40ec6bf`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
