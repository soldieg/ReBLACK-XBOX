# sub_000BBBB0 — lote 63

- Issue: [#6662](https://github.com/soldieg/ReBLACK-XBOX/issues/6662).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BBBB0–0x000BBBD3 (inclusive), 36 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 2 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BBBB0; tamanho 36 bytes.
- SHA-256 da fonte: b1a404f51570b1616e89884151c90e25555712497d0bdc445e1a04054a03f1c5; candidato: 0338c0daf5c2ca2c04466b181f4bb2b7b17e5948a438f38633d13ccdbe9fb039; compilado: bc3b89cba6cc88dfa34d68a7b1beeef01c7dada6d8b3a2872c19a885edf27ea0.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
