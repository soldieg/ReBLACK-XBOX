# sub_000DF0E0 — lote 64

- Issue: [#6788](https://github.com/soldieg/ReBLACK-XBOX/issues/6788).
- Ghidra 12.1.3 local: corpo contíguo 0x000DF0E0–0x000DF11F (inclusive), 64 bytes, 16 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000DE790 (000de790), 0x001F3FC0 (001f3fc0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `a655906424f154d917c643074c87a2328ebe62fbe5a5f29ed8f0fe62a156bf25`.
- Fonte C SHA-256: `0aab78cb3b6a7c274210f29299f0cc96858918ba30521ebf0c24988950371960`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000DF0E0`, tamanho 64 bytes; seção COFF `.text$mn` idêntica byte a byte (64/64 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `850aa15a1ea805b16e9c606194002a0f9c558a3e5544a8a7f7ea2b5876a6dcb3`; objeto compilado: `c246701303698b7d1fb678383c1e1ee402cfaae49e3754135a8f012037274a44`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
