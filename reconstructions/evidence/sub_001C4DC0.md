# sub_001C4DC0 — lote 69

- Issue: [#7304](https://github.com/soldieg/ReBLACK-XBOX/issues/7304).
- Ghidra 12.1.3 local: corpo contíguo 0x001C4DC0–0x001C4DFF (inclusive), 64 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `e45e8013d264a40b5c531e08a8757efac1a33861c3599ff13e05a5f3485d9a2d`.
- Fonte C SHA-256: `414c8adf934e1a8cb2a74bbf190fb70beb95f9507eacec6c21c70c22edc88c5c`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001C4DC0`, tamanho 64 bytes; seção COFF `.text$mn` idêntica byte a byte (64/64 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `8224ab65896a898fabc72ccc7207d52b52701442c6d719bbee1dfa5e8baaa9e4`; objeto compilado: `312b44bd2855d8beb4e247f2f43e8f70967ff22298d412981a5ad5c7b1a65055`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
