# sub_000bffa0 — lote 63

- Issue: [#6688](https://github.com/soldieg/ReBLACK-XBOX/issues/6688).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BFFA0–0x000BFFC6 (inclusive), 39 bytes, 18 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 2 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 39/39 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BFFA0; tamanho 39 bytes.
- SHA-256 da fonte: 6c27bee4263bfb309348f309f81a364c84bbf753405048738c65e74983e3e01c; candidato: 58ad37e0361fca9176e049307027d0b18bd3fce524687d4f87b284b9f8d43e39; compilado: 5c645d7c1001d877a81f78e7203b45e73f0ae858c3b3633add0c71e6cf5ee820.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
