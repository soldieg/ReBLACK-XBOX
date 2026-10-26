# sub_0012CCF0 — lote 65

- Issue: [#6896](https://github.com/soldieg/ReBLACK-XBOX/issues/6896).
- Ghidra 12.1.3 local: corpo contíguo 0x0012CCF0–0x0012CD16 (inclusive), 39 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BF2A0 (000bf2a0), 0x001144D0 (001144d0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `30c205c2aa96aec8d5296015467f7afccdcbb2ae27811647e0b7b35d0d50c86e`.
- Fonte C SHA-256: `6301a1767fab0ef16edefd9c6e94cae966d5cac8085e7fc716328457b66c4e51`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012CCF0`, tamanho 39 bytes; seção COFF `.text$mn` idêntica byte a byte (39/39 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `5fba3771aec687b74b4334df413de733d64660fa4c5dce6c55d17a6c948240ac`; objeto compilado: `fda70f1819e04bac6d675ff6263e1b38302536c41a284789c07ab08a500fbe2e`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
