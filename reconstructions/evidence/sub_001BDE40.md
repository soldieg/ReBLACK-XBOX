# sub_001BDE40 — lote 69

- Issue: [#7275](https://github.com/soldieg/ReBLACK-XBOX/issues/7275).
- Ghidra 12.1.3 local: corpo contíguo 0x001BDE40–0x001BDE75 (inclusive), 54 bytes, 26 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A1C8C (000a1c8c).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `658609b1901702f3fa4f5f8036ecf180d581c46ac7f1686b23bee7d672f00504`.
- Fonte C SHA-256: `8d68492a49f454b53657e2a4e8e0bfe8942c53ec7818a8087b8b28f26f138ec6`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BDE40`, tamanho 54 bytes; seção COFF `.text$mn` idêntica byte a byte (54/54 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `11d7fde42476b85f314150bdac9c4d932aa0454f35b4cb006a87f2dfa9071ed0`; objeto compilado: `a17da9542d6a9151032ed9e51850a1bc59f751c895bcb2bb2be6b90dc8794454`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
