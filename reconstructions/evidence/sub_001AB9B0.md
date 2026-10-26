# sub_001AB9B0 — lote 68

- Issue: [#7173](https://github.com/soldieg/ReBLACK-XBOX/issues/7173).
- Ghidra 12.1.3 local: corpo contíguo 0x001AB9B0–0x001AB9D1 (inclusive), 34 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001D6DD0 (001d6dd0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `9d267ce654a1a9467a43d15aa5b0101cbf65e24255e028ba12b0b5c221b0d129`.
- Fonte C SHA-256: `c025ee00beea4c50b7bb8ad9402f35fa3d097c5b6494e259c5b01744a358a71d`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001AB9B0`, tamanho 34 bytes; seção COFF `.text$mn` idêntica byte a byte (34/34 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `532824201e2971d6e97daff07d0472ce017fe7a829ae8bf7e7a0ef7a941daac4`; objeto compilado: `2f71949f89618234e2d373de21e0b4ee4f5dc57971c70787dc0ba1d2919e0b9d`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
