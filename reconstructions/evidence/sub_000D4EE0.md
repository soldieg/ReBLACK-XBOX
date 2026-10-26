# sub_000D4EE0 — lote 64

- Issue: [#6773](https://github.com/soldieg/ReBLACK-XBOX/issues/6773).
- Ghidra 12.1.3 local: corpo contíguo 0x000D4EE0–0x000D4F0C (inclusive), 45 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000D4C50 (000d4c50), 0x0026B720 (0026b720).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `fe45c285125d5d7e2c009d9227e779fa342c79e043ecc2008d6eab842827e962`.
- Fonte C SHA-256: `6a3dbeb551899b049e63e5ec3b24219220ea24fb53e03399b2cf4b5538777456`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000D4EE0`, tamanho 45 bytes; seção COFF `.text$mn` idêntica byte a byte (45/45 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `e32ea1591a42c8415cae6ed13064d3f9a687086d26b26c40653ba6cc9a3c7905`; objeto compilado: `3d8678f9b58c0eea52a1d280b719f6bcc3fc31920bb8d10df674b7fa099b2683`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
