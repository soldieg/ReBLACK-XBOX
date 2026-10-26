# sub_000CFC90 — lote 64

- Issue: [#6766](https://github.com/soldieg/ReBLACK-XBOX/issues/6766).
- Ghidra 12.1.3 local: corpo contíguo 0x000CFC90–0x000CFCB5 (inclusive), 38 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000B2940 (000b2940).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `42b8088ba110fba2b013a0c1d13847a6c39c9ec53e72222c07287ad044a5fa9f`.
- Fonte C SHA-256: `db2c13d049ceb54cee204419c8bf0a9e8d78a458913ecf1002796edc3bc8ce8a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CFC90`, tamanho 38 bytes; seção COFF `.text$mn` idêntica byte a byte (38/38 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `2481250cdd70ad71269e811240eda52433cb9d624122e72c75a5e33a75d95715`; objeto compilado: `90a936e253c3bfa2cc246b3dd96064165e9150df09dc1a45360c07f7ecf945a4`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
