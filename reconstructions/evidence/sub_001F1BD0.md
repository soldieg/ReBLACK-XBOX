# sub_001F1BD0 — lote 69

- Issue: [#7343](https://github.com/soldieg/ReBLACK-XBOX/issues/7343).
- Ghidra 12.1.3 local: corpo contíguo 0x001F1BD0–0x001F1C10 (inclusive), 65 bytes, 24 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `4be1c8adb83e3da9bcd607c36f86194741104249518eb3437d031899044b4c7a`.
- Fonte C SHA-256: `0aec9523122fe748b0d5822ae359a360901b4533a3e0f0e4eae22a7bd6cd5d9e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001F1BD0`, tamanho 65 bytes; seção COFF `.text$mn` idêntica byte a byte (65/65 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `e2cc151d9e3a52f6a5906c16c13942f748153d03a4696be4681db1cd6a474455`; objeto compilado: `01fb703c33104650bb16a9573de8d88a4507e71afbe8d63a08614e2cba0e5ff7`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
