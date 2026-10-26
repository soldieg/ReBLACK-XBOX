# sub_0012BCE0 — lote 65

- Issue: [#6881](https://github.com/soldieg/ReBLACK-XBOX/issues/6881).
- Ghidra 12.1.3 local: corpo contíguo 0x0012BCE0–0x0012BD04 (inclusive), 37 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0012B740 (0012b740), 0x0012B8E0 (0012b8e0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `c8638c322eb64453efa3cfe6d40a39e35dcb77eb13430137bf7e9bccd4b0e6ad`.
- Fonte C SHA-256: `05b46b8f4322e6ce0d0fba2c12d66d3e3e7388204a40f9343d23eed72b49640a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012BCE0`, tamanho 37 bytes; seção COFF `.text$mn` idêntica byte a byte (37/37 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `49055dc102a8988482bc9eb1b98954ad5790ee928b8c5d081a6c9a072d1836d8`; objeto compilado: `866565f35c5eb61b56ce1111e15d5a7efbe18c7523b1a1c0b4d4b095aa475d23`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
