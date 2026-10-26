# sub_000DB6C0 — lote 64

- Issue: [#6782](https://github.com/soldieg/ReBLACK-XBOX/issues/6782).
- Ghidra 12.1.3 local: corpo contíguo 0x000DB6C0–0x000DB718 (inclusive), 89 bytes, 32 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: nenhum.
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `59123b8181902c624da88e6ca52d349b58cde6a282dced45d3b7e2bb4bad4271`.
- Fonte C SHA-256: `b999613a097f45a970904b0a11f22c554eaa5e1e5cd0a5bb4aa60b92fd82a872`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_000DB6C0`, tamanho 89 bytes; seção COFF `.text$mn` idêntica byte a byte (89/89 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `6670777385470118070337b0c79c35cc8d669c4dd8aff6448b9477a9708d25e3`; objeto compilado: `b843be35e43e2fa5cb5ce4969cba3f389193fb31c3a406ae4c1f9ba7324c97a1`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
