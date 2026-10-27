# sub_0008BAA0 — lote 74

- Issue: [#7684](https://github.com/soldieg/ReBLACK-XBOX/issues/7684).
- Ghidra 12.1.3 local: corpo contíguo 0x0008BAA0–0x0008BB1B (inclusive), 124 bytes, 46 instruções.
- Grafo estático Ghidra: callers diretos observados: 0x0008BC26 (0008bc20).
- Callees diretos observados: 0x00086A60 (00086a60), 0x0008DF60 (0008df60), 0x0008DFF0 (0008dff0).
- Referências de dados entrantes observadas: 0.
- Chamadas computadas/indiretas sem destino resolvido: 0; chamadas diretas sem destino resolvido: 0.
- Bytes: XBE original mapeado por seção = PE derivada mapeada por seção = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 dos bytes comparados: `a2cbdcdfc42f55a7f1096f9153828c6f22e842eb95703a126f102ca94173347b`.
- Fonte C SHA-256: `079e824c4e70c46ec7777d8d1fc70e393686dca2e47f5247c239334c24330100`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_SUB_0008BAA0`, tamanho 124 bytes; as seções COFF `.text$mn` são idênticas byte a byte (124/124 bytes, 0/0 relocações).
- SHA-256 da seção `.text$mn`: `a2cbdcdfc42f55a7f1096f9153828c6f22e842eb95703a126f102ca94173347b`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; as consultas de relações e fronteiras usaram Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
