# sub_000BEDB0 — lote 63

- Issue: [#6675](https://github.com/soldieg/ReBLACK-XBOX/issues/6675).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BEDB0–0x000BEDF2 (inclusive), 67 bytes, 31 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 4 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 67/67 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BEDB0; tamanho 67 bytes.
- SHA-256 da fonte: ada8699bc8c225e7122cb15e0ae0a7324cf5ab9e7009210849e27aaf48a4990d; candidato: afa408f0bf2201d59564597b43fa1d72513683887fa62e85666491f943a7ff0f; compilado: 00c1093be6483599ef11883070d5fbff09dc8bb3a40115d52e54cbbb024fca87.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
