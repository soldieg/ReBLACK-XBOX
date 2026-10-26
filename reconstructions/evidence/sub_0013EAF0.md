# sub_0013EAF0 — lote 65

- Issue: [#6935](https://github.com/soldieg/ReBLACK-XBOX/issues/6935).
- Ghidra 12.1.3 local: corpo contíguo 0x0013EAF0–0x0013EB69 (inclusive), 122 bytes, 56 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `fbd540d3884a46dc40c937a0ce53c2d3d6394ae9d7640497cd6438c3de512563`.
- Fonte C SHA-256: `ff51f39211bdb1df6254353255a51e88d7b547633251a934e5c43be8a5f6d08a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0013EAF0`, tamanho 122 bytes; seção COFF `.text$mn` idêntica byte a byte (122/122 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `09f7b6a7d03cda3527e38c3947a83ea2ad2e1d2eff97ca54547c871e01821073`; objeto compilado: `3e88f5dbffba6fa669e8d52ebbd8cc8891e8e45f68417ee0722f4ef79e5099ce`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
