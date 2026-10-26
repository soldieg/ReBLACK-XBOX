# sub_0012EBA0 — lote 65

- Issue: [#6901](https://github.com/soldieg/ReBLACK-XBOX/issues/6901).
- Ghidra 12.1.3 local: corpo contíguo 0x0012EBA0–0x0012EBCA (inclusive), 43 bytes, 13 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x000C34C0 (000c34c0).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `7ef1052a0a31e92cd6e4efa00b40552ee039bd18ac5f7a1cd4f157cd19ee98a3`.
- Fonte C SHA-256: `fd0c666bad23c64d4cfd07447d8a6341ad7459783f047c663c61c2c5fc557fbb`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_0012EBA0`, tamanho 43 bytes; seção COFF `.text$mn` idêntica byte a byte (43/43 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `09a73e87bf2b7b9f45998cff2d5a78242ab10cbdae36f267e605efd462723709`; objeto compilado: `567af5eaf3b84d85ee2d12af117e2e88613a90aabc92287f4b45742d13e49548`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
