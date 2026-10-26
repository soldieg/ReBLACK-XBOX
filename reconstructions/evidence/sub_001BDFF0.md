# sub_001BDFF0 — lote 69

- Issue: [#7276](https://github.com/soldieg/ReBLACK-XBOX/issues/7276).
- Ghidra 12.1.3 local: corpo contíguo 0x001BDFF0–0x001BE00F (inclusive), 32 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `deb5ba5ba75297ea2daf46fd0f9158f33bd3e1a97764bcaa8931b4951a83b13a`.
- Fonte C SHA-256: `de70f230b45d0b4c4b78048c9378b41c5eea169d42273ff7383d8407acf86681`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BDFF0`, tamanho 32 bytes; seção COFF `.text$mn` idêntica byte a byte (32/32 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `197aed4acd98a0a9fe92650be183f5759a6022c033599e083e932895f350f1c1`; objeto compilado: `a4509a198d3e1916687e011b5acca805a8e2782c15ea1db1962c55c32dc09caf`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
