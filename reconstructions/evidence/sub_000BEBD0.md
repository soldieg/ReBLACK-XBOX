# sub_000BEBD0 — lote 63

- Issue: [#6676](https://github.com/soldieg/ReBLACK-XBOX/issues/6676).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BEBD0–0x000BEC0A (inclusive), 59 bytes, 37 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 3 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 59/59 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BEBD0; tamanho 59 bytes.
- SHA-256 da fonte: 3a8a7bea1730d41d4775c52b16e88186ec624f1f281fb3a3ad84ff07099624bb; candidato: 01df60dd1c770f703a1d8cf4576364c2fd4a623951cfb20e518dbce626c61b1b; compilado: 73e9c54decd943f76c5a1070b67e969cdadf1df1f4fcb0131028545ed1749b38.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
