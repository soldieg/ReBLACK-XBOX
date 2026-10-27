# sub_000BA7E0 — lote 71

- Issue: [#7434](https://github.com/soldieg/ReBLACK-XBOX/issues/7434).
- Ghidra 12.1.3 local: corpo contíguo 0x000BA7E0–0x000BA8DC (inclusive), 253 bytes, 102 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x000BBF22 (000bbf00), 0x000BBF8D (000bbf60).
- Callees diretos observados: nenhum.
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `4a933be2e7c12300be2e97642ef8c890a6836d43293741fe2c496ce45d7306bd`.
- Fonte C SHA-256: `17ddabd46caa35fd199cf020976092337a97148a08cff992795b4192d638f5e7`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000BA7E0`, tamanho 253 bytes; as seções COFF `.text$mn` são idênticas byte a byte (253/253 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `4a933be2e7c12300be2e97642ef8c890a6836d43293741fe2c496ce45d7306bd`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
