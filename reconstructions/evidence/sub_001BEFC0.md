# sub_001BEFC0 — lote 69

- Issue: [#7286](https://github.com/soldieg/ReBLACK-XBOX/issues/7286).
- Ghidra 12.1.3 local: corpo contíguo 0x001BEFC0–0x001BEFE8 (inclusive), 41 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001F3FC0 (001f3fc0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `0bf2ffe73f015e047b5e64f47d988b5620028cbadd5c98c128f06d0a354d070a`.
- Fonte C SHA-256: `98f547fe955038eb373b01bb1cb616b4dad0f264584a4925218ba4eb2f592006`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BEFC0`, tamanho 41 bytes; seção COFF `.text$mn` idêntica byte a byte (41/41 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `fc22bba54a094f99981949c894ec2fb9d5fcef11d68aac77299cd76ee7198f9b`; objeto compilado: `8aae75419829162a75cd54c5ccf6a78c52d6fe46fca37e876086853992b8f6c2`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
