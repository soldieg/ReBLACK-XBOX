# sub_000bf5e0 — lote 63

- Issue: [#6684](https://github.com/soldieg/ReBLACK-XBOX/issues/6684).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BF5E0–0x000BF621 (inclusive), 66 bytes, 32 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 66/66 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BF5E0; tamanho 66 bytes.
- SHA-256 da fonte: 7315f01fe26b4ba3bc28af98eabcbcb0b89c79d84060b8a214434c8b140c7f1e; candidato: 2a29f37dca7191c41cdb66023c697030c944bf1b84739f2d29776b0d8039d914; compilado: a6882c2a106056609a90047a321ed42cb993134d678bb471b515614af6ba1499.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
