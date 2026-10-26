# sub_000bfb10 — lote 63

- Issue: [#6685](https://github.com/soldieg/ReBLACK-XBOX/issues/6685).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BFB10–0x000BFB53 (inclusive), 68 bytes, 24 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 68/68 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BFB10; tamanho 68 bytes.
- SHA-256 da fonte: a09c78b6ba478eb21ce8a05781b90d94295c02f8bb253403546caa98f683a8c7; candidato: a0ca5cad2158b968b3401fe55fb828dab0641880e93c86443b78aa2eaf25067f; compilado: a620fe5500358cac3e30a8098dcc9985e4d4339310e51e73f297fb1dbe197bb9.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
