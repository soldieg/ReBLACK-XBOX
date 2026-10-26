# sub_0012EEA0 — lote 65

- Issue: [#6904](https://github.com/soldieg/ReBLACK-XBOX/issues/6904).
- Ghidra 12.1.3 local: corpo contíguo 0x0012EEA0–0x0012EEEC (inclusive), 77 bytes, 20 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BF2A0 (000bf2a0), 0x000C34C0 (000c34c0), 0x001144D0 (001144d0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `1cff1486cb3421773215af6e0b5b0920177f8e499350718d6825e1470d38b5ec`.
- Fonte C SHA-256: `65a678f1aeb5c3617acc9b47b05b4121e49acfd0626eecaca49be209d778a25e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012EEA0`, tamanho 77 bytes; seção COFF `.text$mn` idêntica byte a byte (77/77 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `ec30a5c65d0b15934193e12af8e9c8544bdaa1edf38057d1d75d2f940ddb538c`; objeto compilado: `bfe90bbb0e720b245db1dd3b84a5bb4978d7f6c80c11485d574ca2104da253a9`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
