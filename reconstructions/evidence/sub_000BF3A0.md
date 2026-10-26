# sub_000BF3A0 — lote 63

- Issue: [#6683](https://github.com/soldieg/ReBLACK-XBOX/issues/6683).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BF3A0–0x000BF3CC (inclusive), 45 bytes, 13 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 45/45 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BF3A0; tamanho 45 bytes.
- SHA-256 da fonte: 54e387d667f114eb5a8581e4da5214d7f0e8f05f7220bcab4fdc188ea3284b62; candidato: 2239e6c592efb8ac96904d9e712595b0efdde1f7861d7849e9f0935d57b46fad; compilado: 65cf9092aa28c9dca6caad191355d9cefa98c82d0e2bf93e4e1fb1d9152ceeb9.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
