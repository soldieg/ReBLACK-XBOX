# sub_0018FAF0 — lote 68

- Issue: [#7154](https://github.com/soldieg/ReBLACK-XBOX/issues/7154).
- Ghidra 12.1.3 local: corpo contíguo 0x0018FAF0–0x0018FB2C (inclusive), 61 bytes, 23 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `016827139acb9dff5af31ffed2e204fd0c4c6ad21faead25d6a274caca482734`.
- Fonte C SHA-256: `25330bb15f0c55037083073c684e29dfd01f13cb2978b64f84fc5ecfabfaa1cc`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0018FAF0`, tamanho 61 bytes; seção COFF `.text$mn` idêntica byte a byte (61/61 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `9b2b7ab5cf9096cf651046ffa01e53eb03bda5fbdcb0f1ae5b702c457a3e58f5`; objeto compilado: `17443031f5d61efd8aaee7a00758b5b65fd9e985c6e5b14d10734d66bf3c937b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
