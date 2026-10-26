# sub_000BA4F0 — lote 63

- Issue: [#6650](https://github.com/soldieg/ReBLACK-XBOX/issues/6650).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BA4F0–0x000BA51D (inclusive), 46 bytes, 18 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 46/46 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BA4F0; tamanho 46 bytes.
- SHA-256 da fonte: 919e035169f37c0759c502b2f171b22493f8702fac3611b7bfb11fa1e668e745; candidato: 69441f8165f7931e4d7574f7bdea900956a1b648e54f1c8e961e40ce8736c325; compilado: e648c2c8c727db13981b5fde553a9be78758adf6355b23635f66438498d6316d.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
