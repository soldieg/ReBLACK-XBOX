# sub_000bee20 — lote 63

- Issue: [#6677](https://github.com/soldieg/ReBLACK-XBOX/issues/6677).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BEE20–0x000BEE58 (inclusive), 57 bytes, 25 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 2 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 57/57 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BEE20; tamanho 57 bytes.
- SHA-256 da fonte: d0afbb26e41338a8545b807cc946d9814bbc8ab0ea73b61f8739ed794b46a2cf; candidato: 7a9d385d5b9be46b2a4d9c941239c4449051f5764144d42742110dcbfc8e22e7; compilado: 82ef012fc351ab5599ba69c9c4f4b866d632cf7f8745aa2a51c0c04f23a08a60.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
