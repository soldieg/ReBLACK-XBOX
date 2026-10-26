# sub_0012EBD0 — lote 65

- Issue: [#6902](https://github.com/soldieg/ReBLACK-XBOX/issues/6902).
- Ghidra 12.1.3 local: corpo contíguo 0x0012EBD0–0x0012EBFA (inclusive), 43 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000C34C0 (000c34c0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `77a9571271b63891783380665b86189213b5b3bdfeb790649e69ae93fc038166`.
- Fonte C SHA-256: `25e58c4e913b49a205d14bd3230b85d3845f729eb9c54d770cb1e3e8f0b09203`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012EBD0`, tamanho 43 bytes; seção COFF `.text$mn` idêntica byte a byte (43/43 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `788cda5207500d8de5f1fca063b1f707676697e3aa530c230f694ed5de3be2d6`; objeto compilado: `55f99d5dc3591747839a867b6a38cf9bd7c8b31a482dc5533037b8d932ecafc1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
