# sub_000bfbe0 — lote 63

- Issue: [#6687](https://github.com/soldieg/ReBLACK-XBOX/issues/6687).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BFBE0–0x000BFC03 (inclusive), 36 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BFBE0; tamanho 36 bytes.
- SHA-256 da fonte: 0e54f9b550d41d57ead203845ce4aa2b584ac615ac8891987e67ddfe6ecc58e1; candidato: 94a151ddbc67fc7f687d34697bada1263bad318bcce65e12f984654eba355e8f; compilado: 203142830b57cc231fa74c41f8464cb4d4000b0c1b4572448d82721c16bd3233.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
