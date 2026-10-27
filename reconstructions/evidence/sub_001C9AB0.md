# sub_001C9AB0 — lote 69

- Issue: [#7310](https://github.com/soldieg/ReBLACK-XBOX/issues/7310).
- Ghidra 12.1.3 local: corpo contíguo 0x001C9AB0–0x001C9AD2 (inclusive), 35 bytes, 10 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00198000 (00198000).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `5cbe56c9d75a874dd8867f40339120aaa5d79ce0de9ab56e509a9e42143a2d51`.
- Fonte C SHA-256: `49f20162d4855dbfe7aa200d089ace65b76dd0003bbd295744754e4a05405202`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001C9AB0`, tamanho 35 bytes; seção COFF `.text$mn` idêntica byte a byte (35/35 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `80cad7a070114e366bdda59701a2ddb10309d0593d7f3f7ed5151d2d515d9c52`; objeto compilado: `4df47f48db0f737089f264fb22a1b2b5792809730f86fa422f8c2f296d811dcb`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
