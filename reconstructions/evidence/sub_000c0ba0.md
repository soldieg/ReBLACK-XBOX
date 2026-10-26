# sub_000c0ba0 — lote 63

- Issue: [#6705](https://github.com/soldieg/ReBLACK-XBOX/issues/6705).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C0BA0–0x000C0BF5 (inclusive), 86 bytes, 37 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 86/86 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C0BA0; tamanho 86 bytes.
- SHA-256 da fonte: f28d2f05cab520f97416955954e16463dcbd251a945306d251d6af5e37805aaf; candidato: 3601f1de88b6b1402465f60747a4360e8076219acc5a2d863b68c030b841bc77; compilado: 6ee5ac2c8bf233366b7e4cf505e13af0f586d8c1b01acd662e0c4d34132870cb.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
