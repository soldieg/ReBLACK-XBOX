# sub_001DDE90 — lote 69

- Issue: [#7329](https://github.com/soldieg/ReBLACK-XBOX/issues/7329).
- Ghidra 12.1.3 local: corpo contíguo 0x001DDE90–0x001DDEE4 (inclusive), 85 bytes, 24 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001DDD90 (001ddd90).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `8faac3f7bd605f58588b8479fee25a66bd651923107ae475b01befff60c91ed2`.
- Fonte C SHA-256: `df0ec5a3475177392d459bd2281105566167a5227223ed96ab33ea63fb555362`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001DDE90`, tamanho 85 bytes; seção COFF `.text$mn` idêntica byte a byte (85/85 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `a5bfe6cc93771908e117db2ec68577643f118b054a96796dfeae603c4b33d4fd`; objeto compilado: `8064ab764f2f44fd9998c74f98261d33ed362dbd0471115c542fd310f5b5a7e3`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
