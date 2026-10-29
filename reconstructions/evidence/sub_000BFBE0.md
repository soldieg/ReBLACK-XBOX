# sub_000BFBE0 — lote 63

- Issue: [#6687](https://github.com/soldieg/ReBLACK-XBOX/issues/6687).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BFBE0–0x000BFC03 (inclusive), 36 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BFBE0; tamanho 36 bytes.
- SHA-256 da fonte: 0e54f9b550d41d57ead203845ce4aa2b584ac615ac8891987e67ddfe6ecc58e1; candidato: 94a151ddbc67fc7f687d34697bada1263bad318bcce65e12f984654eba355e8f; compilado: 203142830b57cc231fa74c41f8464cb4d4000b0c1b4572448d82721c16bd3233.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 110, position 6; address order. Candidate span: 36 bytes (0x000BFBE0 to exclusive end 0x000BFC04).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFBE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEF60. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 36 bytes. XBE raw = derived PE = split = REA; span SHA-256 9fd68088ce9f84b97266fed6ae73771b5232732577c79f14160c9147a69f59c6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 36 bytes.
- Source SHA-256 0e54f9b550d41d57ead203845ce4aa2b584ac615ac8891987e67ddfe6ecc58e1; compiled object SHA-256 0b30167572de4e0982962f63963ab7bc1cb6156948578570f4126143c7dede4f; candidate object SHA-256 94a151ddbc67fc7f687d34697bada1263bad318bcce65e12f984654eba355e8f.
- GitHub Issue: #6687 (https://github.com/soldieg/ReBLACK-XBOX/issues/6687).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
