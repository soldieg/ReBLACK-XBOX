# sub_001AD7C0 — lote 68

- Issue: [#7178](https://github.com/soldieg/ReBLACK-XBOX/issues/7178).
- Ghidra 12.1.3 local: corpo contíguo 0x001AD7C0–0x001AD7F1 (inclusive), 50 bytes, 20 instruções.
- Grafo estático Ghidra: callers diretos observados: nenhum.
- Callees diretos observados: 0x001ACAB0 (001acab0), 0x001ACB60 (001acb60).
- Screen local de componentes: tamanho do grupo direto 1; 0 caller(s) direto(s) na triagem.
- Chamadas computadas/indiretas sem destino resolvido nesta função: 0.
- Bytes: XBE original mapeado por seção = PE derivada = corpo Ghidra = split XboxRecomp, byte a byte; fronteiras e comprimentos coincidem.
- SHA-256 do corpo Ghidra/XBE/PE/split: `61ea31dbcb4078e25db13ec2fdd138815c287678ad0d658e28a1e293d1975513`.
- Fonte C SHA-256: `1e83b678d6a6f45dccdad8899af2551b6a32be0f72ab878ab5548a42f2031c06`.
- Compilação: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compilou sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado `_sub_001AD7C0`, tamanho 50 bytes; seção COFF `.text$mn` idêntica byte a byte (50/50 bytes); 0/0 relocações.
- SHA-256 do objeto candidato: `2b2fe7e11016f8af2bed4db9dfd67d5599307681b76f124067651f151cc9912e`; objeto compilado: `8a78dad100c0ad6462b01c0fd30f357d908e0fd159453dc61a46e08aaf3c4045`.

A fonte é um emissor de bytes preso ao endereço; não representa reconstrução semântica em C nem confirma ABI formal. REA MCP não estava disponível; a consulta de relações e fronteiras usou Ghidra local. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
