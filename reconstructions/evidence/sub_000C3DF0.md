# sub_000C3DF0 — lote 63

- Issue: [#6733](https://github.com/soldieg/ReBLACK-XBOX/issues/6733).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C3DF0–0x000C3E23 (inclusive), 52 bytes, 24 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 3 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 52/52 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C3DF0; tamanho 52 bytes.
- SHA-256 da fonte: a85e0e4a2c49fd1528ba38ad5b3642f1a2b680b74c945ddbba882bfc1cb5db20; candidato: 2bbf1a908b5778549faf17be76d85134321983054703f9b0f46573cc6e3b74a0; compilado: ac47c21991c927862e796433a8a40f622b60f363b3227d7e3f17058834c65d87.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 111, position 96; address order. Candidate span: 52 bytes (0x000C3DF0 to exclusive end 0x000C3E24).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB3DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB3170. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 52 bytes. XBE raw = derived PE = split = REA; span SHA-256 b2b41f1c046370d33d9bde62066913260bcaf7ab28f6e07f7becf4e27cd0cc43.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 52 bytes.
- Source SHA-256 a85e0e4a2c49fd1528ba38ad5b3642f1a2b680b74c945ddbba882bfc1cb5db20; compiled object SHA-256 69636a39f1443c53d88e1a6f8e06825c35396ea50df0e110af696a6382ce72ff; candidate object SHA-256 2bbf1a908b5778549faf17be76d85134321983054703f9b0f46573cc6e3b74a0.
- GitHub Issue: #6733 (https://github.com/soldieg/ReBLACK-XBOX/issues/6733).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
