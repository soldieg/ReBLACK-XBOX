# sub_0018CDC0 — lote 67

- Issue: [#7139](https://github.com/soldieg/ReBLACK-XBOX/issues/7139).
- Ghidra 12.1.3 local: corpo contíguo 0x0018CDC0–0x0018CDE6 (inclusive), 39 bytes, 12 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `0ee022315ddc5336260f69d1ccc354b3ceeaa61cd1e93fec5b56d6bfd4138e92`.
- Fonte C SHA-256: `6955d07efea88ae152a4bce4ebf20367884ae5fcf5503f36ec3fcf236fc3f9f6`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0018CDC0`, tamanho 39 bytes; seção COFF `.text$mn` idêntica byte a byte (39/39 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `260a11dd632bae60d90b00611e39016bf0bda82ce6e4ff490013004f359edc20`; objeto compilado: `bc45ae4e2abc9393e83064ee9ab63cd90f56500a4c472f046d06afc89c430ff6`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
