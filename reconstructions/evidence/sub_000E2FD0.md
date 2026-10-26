# sub_000E2FD0 — lote 64

- Issue: [#6796](https://github.com/soldieg/ReBLACK-XBOX/issues/6796).
- Ghidra 12.1.3 local: corpo contíguo 0x000E2FD0–0x000E2FF3 (inclusive), 36 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `3df9509f642f4f62daea6d82c1e07d75e5fb99e8907ee94adf063fd4a3b4ce5b`.
- Fonte C SHA-256: `9a107a6ebafa56b350ba8fcd9b7a4987006f7dba025f3926e24a8be5c60384f3`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000E2FD0`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `d3ef07a9e47305a4e4bc31aec6955ffff9d8d41783f8595fa93d964c227882b6`; objeto compilado: `7e7726765a9cfaea1aca8af2535ad4b67772a5e4e660598c9b3a51e12565e8be`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
