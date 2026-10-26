# sub_000ba9d0 — lote 63

- Issue: [#6658](https://github.com/soldieg/ReBLACK-XBOX/issues/6658).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BA9D0–0x000BA9F4 (inclusive), 37 bytes, 16 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 37/37 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BA9D0; tamanho 37 bytes.
- SHA-256 da fonte: 54537edf1abbe92c4da59001bcbb06a393e576e9af4f7dd0a32ea96a4591a3fd; candidato: 6c08a00d3fde864e7fe2a3aaf7a15bd0c93528a0b9ff8191b4169930ae5fe8d7; compilado: 141535c7b3d3910739cdf131fa6bca6f26221f66fe88a5b1f924fe07746f8f87.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
