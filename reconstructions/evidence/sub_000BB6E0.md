# sub_000BB6E0 — lote 63

- Issue: [#6661](https://github.com/soldieg/ReBLACK-XBOX/issues/6661).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BB6E0–0x000BB733 (inclusive), 84 bytes, 20 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 84/84 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BB6E0; tamanho 84 bytes.
- SHA-256 da fonte: 28ae2e6283e84d16490f924be3e9777a7ea9388ff698c04ec6fea5345d59f79a; candidato: 68654069fa8f3b3e59e68bd00a78c08eb752eb9344efba9ca61f355d633a180e; compilado: ee67d269fcf3104f7256edf69ae240d00047721af662310196af17ac21dff0a1.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
