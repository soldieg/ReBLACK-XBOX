# sub_000BF0A0 — lote 63

- Issue: [#6678](https://github.com/soldieg/ReBLACK-XBOX/issues/6678).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BF0A0–0x000BF0CD (inclusive), 46 bytes, 19 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 46/46 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BF0A0; tamanho 46 bytes.
- SHA-256 da fonte: 2e4052970799ecfb3b7274009f057bacb51cf68276c6367672bec8deb700711f; candidato: 394ef3fec7ca71e3013a4dd3b13923f42de88ce3d9826cd5d95b7f57a316f23e; compilado: 94f91ffb0ed7e2b24971902b1df415883b36b880b6d45fdc66b276c124cab4ae.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
