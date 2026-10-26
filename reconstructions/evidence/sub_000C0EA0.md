# sub_000C0EA0 — lote 63

- Issue: [#6709](https://github.com/soldieg/ReBLACK-XBOX/issues/6709).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C0EA0–0x000C0EC3 (inclusive), 36 bytes, 11 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C0EA0; tamanho 36 bytes.
- SHA-256 da fonte: 027e5eb1f52ba906cffad672a6bd2b69567e8ff708597969c561e5991d994818; candidato: 94453b841c2dfef597d705f7e8faa23341de3c1773f34faa219384dd34f0cf82; compilado: 2ac21dafd3769d598c98f1c7ec377cbf6559509b116dfa5a26bebd8788ee639b.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
