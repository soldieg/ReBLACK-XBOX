# sub_000CACC0 — lote 64

- Issue: [#6753](https://github.com/soldieg/ReBLACK-XBOX/issues/6753).
- Ghidra 12.1.3 local: corpo contíguo 0x000CACC0–0x000CAD3A (inclusive), 123 bytes, 43 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000A1E50 (000a1e50), 0x000BEFE0 (000befe0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `fc86128f22bf42877793a2abbc54a32333307ff210ed4f3cc164cd1357e9bba0`.
- Fonte C SHA-256: `8247b7e05a1dd29a35ffefe074fb50085a7fc4bdb4ad8dc76b74e4d653f8b329`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CACC0`, tamanho 123 bytes; seção COFF `.text$mn` idêntica byte a byte (123/123 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `0df2b5a41c24c4d5ed9f72d18736debad1f9034e87eaba623b40589e93f81ff0`; objeto compilado: `192d4828e9f1e863a7741d8cc5cc11445082d31dcee77c17e893725b3a59ebae`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
