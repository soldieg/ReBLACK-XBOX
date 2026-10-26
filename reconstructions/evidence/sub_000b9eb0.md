# sub_000b9eb0 — lote 63

- Issue: [#6648](https://github.com/soldieg/ReBLACK-XBOX/issues/6648).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000B9EB0–0x000B9F00 (inclusive), 81 bytes, 24 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 3 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 81/81 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000B9EB0; tamanho 81 bytes.
- SHA-256 da fonte: 3267b4f0e0826fb86b6749a6998d8e0f3c9471bb27d0c2c032d964d63830dfa8; candidato: 5ffcc215bd788e74f8ff892d33ed7555cdb4876f876aa3e143bd8925e7b82db1; compilado: 6564fabba267d22054a113d2eff76167697fda01db51caaca2a611564f08bba8.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
