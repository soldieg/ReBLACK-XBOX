# sub_000bb2d0 — lote 63

- Issue: [#6659](https://github.com/soldieg/ReBLACK-XBOX/issues/6659).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BB2D0–0x000BB2F0 (inclusive), 33 bytes, 7 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 33/33 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BB2D0; tamanho 33 bytes.
- SHA-256 da fonte: 174dca1722dbe78a6b573aba8983645dc013ff09e0490afb35d906a0f9e60c32; candidato: 168178792d9413970121cddc559c4d166e0df995311487535db8068698a74412; compilado: 4f8fab45a5a3d92f26e8db036a5c0bcddf75a5f142177514d34bc2661d9c76d1.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
