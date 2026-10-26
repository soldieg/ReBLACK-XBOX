# sub_0012ADD0 — lote 65

- Issue: [#6880](https://github.com/soldieg/ReBLACK-XBOX/issues/6880).
- Ghidra 12.1.3 local: corpo contíguo 0x0012ADD0–0x0012AE15 (inclusive), 70 bytes, 18 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BFD30 (000bfd30).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `032f2b40a9747409d82f885653866df3e3e7fe12ee129a340440d8f363cef302`.
- Fonte C SHA-256: `94ca2874ad7293c7e1638719ccce55aa8f9be131115f9a7ccdd679aba833e93a`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012ADD0`, tamanho 70 bytes; seção COFF `.text$mn` idêntica byte a byte (70/70 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `3feaeffec1c83720bf8e02b545ffd951a23e7a7dcfa4921c6230b73b41e9dd7a`; objeto compilado: `6033fc4a8bef279cc7bc5b18c00af02bfde4e2dd2810c8d13d8f0c10e36a7198`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
