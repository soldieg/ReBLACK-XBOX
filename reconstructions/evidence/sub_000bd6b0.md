# sub_000bd6b0 — lote 63

- Issue: [#6664](https://github.com/soldieg/ReBLACK-XBOX/issues/6664).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BD6B0–0x000BD6DC (inclusive), 45 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 4 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 45/45 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BD6B0; tamanho 45 bytes.
- SHA-256 da fonte: 8f6f7a91efd680c3fa5f0287623079739a67ff513a7a4f3c8b920c33785b0121; candidato: d04af979fe5716af138acc72c64fe118d7da4232df500e955f1e233d2850f000; compilado: 18881543e5893c8d92f809e651aad8dc59d7df13e2c752ee612ba105b5c09694.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
