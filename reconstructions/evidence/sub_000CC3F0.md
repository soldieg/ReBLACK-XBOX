# sub_000CC3F0 — lote 64

- Issue: [#6761](https://github.com/soldieg/ReBLACK-XBOX/issues/6761).
- Ghidra 12.1.3 local: corpo contíguo 0x000CC3F0–0x000CC430 (inclusive), 65 bytes, 24 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `66dcb3694c37a9850aea939cfb2d531ca1e172f11df38c7027b9cc9e5bb3b903`.
- Fonte C SHA-256: `9e57980a14475968b4f65e1421c5b59421b415b53585e74845be0238724eaa14`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CC3F0`, tamanho 65 bytes; seção COFF `.text$mn` idêntica byte a byte (65/65 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `9c92b580bb6411d4ba5132e2e20c225876ac46b52ce581606b8aa235805c1c5f`; objeto compilado: `cf695fa4740535f2e3750bcac05418e214dbf1ae4d0c02da5f4f2e0a0f4c543a`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
