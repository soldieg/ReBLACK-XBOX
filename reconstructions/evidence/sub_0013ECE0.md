# sub_0013ECE0 — lote 65

- Issue: [#6936](https://github.com/soldieg/ReBLACK-XBOX/issues/6936).
- Ghidra 12.1.3 local: corpo contíguo 0x0013ECE0–0x0013ED6D (inclusive), 142 bytes, 56 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x0008DF20 (0008df20), 0x0008E140 (0008e140), 0x0013E4F0 (0013e4f0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `08205d819054ce0354fdb159f56f640129a38e1771e9c296db3f86290e20314b`.
- Fonte C SHA-256: `d3c77ebd1054a5e338ef9da10602fb905f71873868b47db9eb35093e151b0052`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013ECE0`, tamanho 142 bytes; seção COFF `.text$mn` idêntica byte a byte (142/142 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `0a7b998abbb8e9e8399b720066b82e35a851b6866cd16e3d9ff9c1a3069e6aeb`; objeto compilado: `73c4ce16521d7e8837a15e347da87888231151d5e515df101305be53e221f6a8`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
