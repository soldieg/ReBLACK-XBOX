# sub_000CFCF0 — lote 71

- Issue: [#6454](https://github.com/soldieg/ReBLACK-XBOX/issues/6454).
- Ghidra 12.1.3 local: corpo contíguo 0x000CFCF0–0x000CFD10 (inclusive), 33 bytes, 11 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x00020950 (00020950).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `0b78b9d315203d8519dbba99dc10e5de653c5f04b67262afaca105d1f9fa0168`.
- Fonte C SHA-256: `bf6c93fdd7efc098302feaaefd15230e981de612f4a20ee497b31d72a0fb89a0`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000CFCF0`, tamanho 33 bytes; as seções COFF `.text$mn` são idênticas byte a byte (33/33 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `0b78b9d315203d8519dbba99dc10e5de653c5f04b67262afaca105d1f9fa0168`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
