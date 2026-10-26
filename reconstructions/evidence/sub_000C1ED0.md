# sub_000C1ED0 — lote 63

- Issue: [#6717](https://github.com/soldieg/ReBLACK-XBOX/issues/6717).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C1ED0–0x000C1EF2 (inclusive), 35 bytes, 8 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 35/35 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C1ED0; tamanho 35 bytes.
- SHA-256 da fonte: 7102a532c2e4a91ff662ed4493dcfa848632af478d47dc5a4f0609c061932c6c; candidato: 4f088e5c261a148fc167cbd76b64728a502942aca0a72089d3e45036283a21f4; compilado: 5d948719c940ca43fc5fe832d59b0ef2cf888554e69ac83242987615b2bfcbdf.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
