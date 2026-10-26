# sub_000BBB40 — lote 63

- Issue: [#6663](https://github.com/soldieg/ReBLACK-XBOX/issues/6663).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BBB40–0x000BBB60 (inclusive), 33 bytes, 10 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 33/33 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BBB40; tamanho 33 bytes.
- SHA-256 da fonte: 34ba8553b3426a122dfa5095701f28881db2b80fe8f7531324979c0f06abebb2; candidato: a1208cf43cba9d223c008a827ec407f9acc339d9d228435680d83a3cfac3acad; compilado: 96ed52cb66734cec98c17c9097d7ebb6a2c3ee503ff33d35c51f700b2da48762.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
