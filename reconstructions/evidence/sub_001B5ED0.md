# sub_001B5ED0 — lote 68

- Issue: [#7218](https://github.com/soldieg/ReBLACK-XBOX/issues/7218).
- Ghidra 12.1.3 local: corpo contíguo 0x001B5ED0–0x001B5EF0 (inclusive), 33 bytes, 8 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `7c042b74cc307258573bb5b9e50ceeea333857d0cb53e294d4ea5894cbbc72fc`.
- Fonte C SHA-256: `8e1678c2aa6e7df1d1bbe531d0b63e210a4a19c9c2a242b5b0b6af160a2ac4ff`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001B5ED0`, tamanho 33 bytes; seção COFF `.text$mn` idêntica byte a byte (33/33 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `7ac2b4660ccf275501cc0be47308e12af3df8c6642f4438ca5348eb7093aa650`; objeto compilado: `72f8bbb6131edf9df31df0f81f9156f1e2ceac4c108d9fed0a6b1edccd094825`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
