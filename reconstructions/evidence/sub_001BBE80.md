# sub_001BBE80 — lote 69

- Issue: [#7265](https://github.com/soldieg/ReBLACK-XBOX/issues/7265).
- Ghidra 12.1.3 local: corpo contíguo 0x001BBE80–0x001BBEA3 (inclusive), 36 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `e74a07ece93d33e821281d4744c3582d3c8779701be82f4fb60268803db9a7eb`.
- Fonte C SHA-256: `4eb9b234683bb087f9208a1fdc140298fcfafd360c77ec3a751b58a0fff166f9`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BBE80`, tamanho 36 bytes; seção COFF `.text$mn` idêntica byte a byte (36/36 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `63b18620e1ddc54f75cd596506f2011d5fc5fb1d8bbced3e50e92fa4ff6ef83e`; objeto compilado: `c55fb07dfd99e763dce01341f61660c345cb84b3daa105fea78d4d7c319c9dde`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
