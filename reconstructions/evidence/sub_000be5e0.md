# sub_000be5e0 — lote 63

- Issue: [#6670](https://github.com/soldieg/ReBLACK-XBOX/issues/6670).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BE5E0–0x000BE675 (inclusive), 150 bytes, 44 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 150/150 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BE5E0; tamanho 150 bytes.
- SHA-256 da fonte: f5aa8e0db37d36676d14c0cd02f5343e704d6541b56a2cce6650430ff93b2b3f; candidato: 9461aa2f71a249f540a85187f2cdc79e18070da397d717ad872b49741b703790; compilado: 4b674b64faa19215c6c7d44469d05b52df72e2578077b8163d82d0af2fdf264a.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
