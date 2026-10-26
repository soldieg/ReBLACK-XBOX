# sub_000DABD0 — lote 64

- Issue: [#6778](https://github.com/soldieg/ReBLACK-XBOX/issues/6778).
- Ghidra 12.1.3 local: corpo contíguo 0x000DABD0–0x000DAC0B (inclusive), 60 bytes, 20 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000C3AF0 (000c3af0), 0x000D9600 (000d9600).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `cf6380252c109b52d7e4394ec66a1f3c74c942460e33e8c51f593234ab4dec95`.
- Fonte C SHA-256: `f8422bfa7fe64553b78820372795f1c8c5178d0a0d5a39b8a31b096f4c104e0e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000DABD0`, tamanho 60 bytes; seção COFF `.text$mn` idêntica byte a byte (60/60 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `faa00e2be28b3a667aedf9fa6aed445a621cf93d3f5d0f54f160568a6ae6751e`; objeto compilado: `492dd905d595365dc90f50b1332820fedb28ae576add12a82958b276fa1c7497`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
