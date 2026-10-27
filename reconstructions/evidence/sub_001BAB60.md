# sub_001BAB60 — lote 69

- Issue: [#7252](https://github.com/soldieg/ReBLACK-XBOX/issues/7252).
- Ghidra 12.1.3 local: corpo contíguo 0x001BAB60–0x001BAB91 (inclusive), 50 bytes, 14 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001B57F0 (001b57f0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `f44f7a1c57af98a3f7f510fc5ed00dc52b4e16e204c76b1c42ba0138ace3683d`.
- Fonte C SHA-256: `980362e0c62d697bcbae6202741f35431a8f89d974a7f1385376e7241e233e61`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001BAB60`, tamanho 50 bytes; seção COFF `.text$mn` idêntica byte a byte (50/50 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `06919cd7fa66f2be8f485248f6a63b9518dafecfc9f6400b650a6c57295fe814`; objeto compilado: `616e7cc26bafa0bfe11d614218d69c1e648f50e3f8f0c1f435a5b3946107ceaa`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
