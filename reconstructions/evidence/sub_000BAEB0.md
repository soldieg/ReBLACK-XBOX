# sub_000BAEB0 — lote 63

- Issue: [#6657](https://github.com/soldieg/ReBLACK-XBOX/issues/6657).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BAEB0–0x000BAEF8 (inclusive), 73 bytes, 18 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 1 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 73/73 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BAEB0; tamanho 73 bytes.
- SHA-256 da fonte: a1f15855fa593f91997e20a2ef74031248fe41ce5d037870a76163be8348bd48; candidato: 55b914d9c64662d5c2ab360db67b9fd53a3081c552ddac4b7dca93bc6e6bb581; compilado: 7c7e0547925eb028aeb02863a3f34925fddbd2f0722153f59bcd19554c7bc2ef.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
