# sub_001BDA20 — lote 69

- Issue: [#7273](https://github.com/soldieg/ReBLACK-XBOX/issues/7273).
- Ghidra 12.1.3 local: corpo contíguo 0x001BDA20–0x001BDA6B (inclusive), 76 bytes, 15 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `53ce16b8554bc84478bbc33687b87b5a7195b4ffdbc0311ad706f358be890ebc`.
- Fonte C SHA-256: `0fbffab32786614cf742871a242591ec2a64e65c0c0347a67a9644663c2c3402`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BDA20`, tamanho 76 bytes; seção COFF `.text$mn` idêntica byte a byte (76/76 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `5ec1b415ac0d98cb09ffda4e0cfe43f9419f811755a71486557c397051d8cc79`; objeto compilado: `c931d4927b6179f109c8d84e020065fb6f13dca2537a347dc87fc11fe1479041`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
