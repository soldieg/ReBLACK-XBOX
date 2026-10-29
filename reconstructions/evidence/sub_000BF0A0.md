# sub_000BF0A0 — lote 63

- Issue: [#6678](https://github.com/soldieg/ReBLACK-XBOX/issues/6678).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BF0A0–0x000BF0CD (inclusive), 46 bytes, 19 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 46/46 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BF0A0; tamanho 46 bytes.
- SHA-256 da fonte: 2e4052970799ecfb3b7274009f057bacb51cf68276c6367672bec8deb700711f; candidato: 394ef3fec7ca71e3013a4dd3b13923f42de88ce3d9826cd5d95b7f57a316f23e; compilado: 94f91ffb0ed7e2b24971902b1df415883b36b880b6d45fdc66b276c124cab4ae.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 47; address order. Candidate span: 46 bytes (0x000BF0A0 to exclusive end 0x000BF0CE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF0A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE420. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 46 bytes. XBE raw = derived PE = split = REA; span SHA-256 cf6b6a73fa076798a04291ef2380e1eafe177d43e5901d6f5d9aaf5cb1c637a9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 46 bytes.
- Source SHA-256 2e4052970799ecfb3b7274009f057bacb51cf68276c6367672bec8deb700711f; compiled object SHA-256 2787b01c3b376c7fafc6e08bdd4b9157a1bfbff025a0e31dc9ad9ba292bac945; candidate object SHA-256 394ef3fec7ca71e3013a4dd3b13923f42de88ce3d9826cd5d95b7f57a316f23e.
- GitHub Issue: #6678 (https://github.com/soldieg/ReBLACK-XBOX/issues/6678).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
