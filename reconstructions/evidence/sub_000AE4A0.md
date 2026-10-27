# sub_000AE4A0 — lote 80

- Issue: [#8269](https://github.com/soldieg/ReBLACK-XBOX/issues/8269).
- Ghidra 12.1.3 local: corpo contíguo 0x000AE4A0–0x000AE4CA (inclusive), 43 bytes, 16 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00082FF0 (00082ff0).
- Referências de dados entrantes observadas: 3.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `4e8b486aa5c42bb5763aa168ab281c84d7e0cc3431fa9b5a3b827d0e071838a5`.
- Fonte C SHA-256: `bd9a296408bd0fb60ccc93d2e71b51b8243ed1c399ca613b9a731f0828411906`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_000AE4A0`, tamanho 43 bytes; as seções COFF `.text$mn` são idênticas byte a byte (43/43 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `4e8b486aa5c42bb5763aa168ab281c84d7e0cc3431fa9b5a3b827d0e071838a5`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
