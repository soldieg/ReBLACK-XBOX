# sub_000E5CB0 — lote 64

- Issue: [#6825](https://github.com/soldieg/ReBLACK-XBOX/issues/6825).
- Ghidra 12.1.3 local: corpo contíguo 0x000E5CB0–0x000E5CE3 (inclusive), 52 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000E5880 (000e5880).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `34f2a28e5c610d85883fdba26b77f472cf953b531fa9d4948eb82dbd0ac79996`.
- Fonte C SHA-256: `2ae6828af6d0e0415256ad424fd30ede395ec6ddee6927965f6e684999de8d61`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000E5CB0`, tamanho 52 bytes; seção COFF `.text$mn` idêntica byte a byte (52/52 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `8eda7ca490951915b1c6330b07fdf6ae8057954fbd85340c6b1a0f9c2ef74ad0`; objeto compilado: `47e8a1c5b01c76e1c86f2c02d5108b05c4e524fc149a95601920ea1c5fc0e04b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
