# sub_000b9cd0 — lote 63

- Issue: [#6647](https://github.com/soldieg/ReBLACK-XBOX/issues/6647).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000B9CD0–0x000B9D46 (inclusive), 119 bytes, 35 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 119/119 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000B9CD0; tamanho 119 bytes.
- SHA-256 da fonte: 45f3ca82e283e04c13cd2afbff3480be1448659adcd3878c57116f67856d9c42; candidato: 946aead1880e09ee9ce1d3f7e8cc569438bc16a815fb3c692a2b6d2031643a9e; compilado: a45bdbc13d2968352bba498c1b1111d1eda9fa0f790140ca3f7569e4e4ca58c2.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
