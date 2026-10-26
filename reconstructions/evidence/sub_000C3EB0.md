# sub_000C3EB0 — lote 63

- Issue: [#6734](https://github.com/soldieg/ReBLACK-XBOX/issues/6734).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C3EB0–0x000C3F12 (inclusive), 99 bytes, 20 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 99/99 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C3EB0; tamanho 99 bytes.
- SHA-256 da fonte: 10226d1afe8adacbb4afb77030f0f27874b63a1eff3081591f2732a0216bfe65; candidato: 1ab418bee3606e17dc7671bbaca6f000203515a6a54d8893cc16fc12325e6a9a; compilado: 34ee8cccd97c6a4b7b66a820c32b8f9b0a0ab980f20fffe99a0605496bf70a23.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
