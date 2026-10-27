# sub_001BB4F0 — lote 69

- Issue: [#7257](https://github.com/soldieg/ReBLACK-XBOX/issues/7257).
- Ghidra 12.1.3 local: corpo contíguo 0x001BB4F0–0x001BB562 (inclusive), 115 bytes, 26 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `01ca9e44a5a836fc5dc1936484e7765ca97b6258efdb3319e955a08447037f94`.
- Fonte C SHA-256: `ebe8737472450f2859aac73138cc2dee1e36994d2287c35afe440da271645ebb`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BB4F0`, tamanho 115 bytes; seção COFF `.text$mn` idêntica byte a byte (115/115 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `a870db209a1939f72b57082c1e83d28e21d581dc09fe0930cc1870b61ae45b80`; objeto compilado: `8b8562660e27139698ffc6ae40c7ca8f1d2ec2792e121fbfa8a7b2adb8d76b5b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
