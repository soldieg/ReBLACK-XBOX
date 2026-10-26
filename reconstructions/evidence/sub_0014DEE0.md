# sub_0014DEE0 — lote 66

- Issue: [#6962](https://github.com/soldieg/ReBLACK-XBOX/issues/6962).
- Ghidra 12.1.3 local: corpo contíguo 0x0014DEE0–0x0014DF0B (inclusive), 44 bytes, 17 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000BAB20 (000bab20), 0x0014ACB0 (0014acb0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `504f6c72a80d8628c24a241f137dd24721c8ac1ff9f08e03559ecdaa8c30af56`.
- Fonte C SHA-256: `fa45e736b16cdcfa5bd4c3b3c97eae8b871531c30663283c734bf125a2c5975e`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0014DEE0`, tamanho 44 bytes; seção COFF `.text$mn` idêntica byte a byte (44/44 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `0db151c23efc8da4a9d338bfaca384ae34fdbee92a5d20885fbc5a4685bd70cd`; objeto compilado: `7044cae114abfdd5828592b744f34bb0c1edba4d2fe0c2eedb10ee0efede599c`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
