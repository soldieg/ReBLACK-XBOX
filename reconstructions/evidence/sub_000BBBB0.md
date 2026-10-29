# sub_000BBBB0 — lote 63

- Issue: [#6662](https://github.com/soldieg/ReBLACK-XBOX/issues/6662).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BBBB0–0x000BBBD3 (inclusive), 36 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 2 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BBBB0; tamanho 36 bytes.
- SHA-256 da fonte: b1a404f51570b1616e89884151c90e25555712497d0bdc445e1a04054a03f1c5; candidato: 0338c0daf5c2ca2c04466b181f4bb2b7b17e5948a438f38633d13ccdbe9fb039; compilado: bc3b89cba6cc88dfa34d68a7b1beeef01c7dada6d8b3a2872c19a885edf27ea0.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 84; address order. Candidate span: 36 bytes (0x000BBBB0 to exclusive end 0x000BBBD4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xABBB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAAF30. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 36 bytes. XBE raw = derived PE = split = REA; span SHA-256 1ac49d55982307359d1806013b84feeea0fdb6fbaeed14ca0c2f5c3e2dd6ed20.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 36 bytes.
- Source SHA-256 b1a404f51570b1616e89884151c90e25555712497d0bdc445e1a04054a03f1c5; compiled object SHA-256 dc6f181aa6d861a02d80b2d38b3757dfca2d4b91a2292e0d8a06022b9c1e7c4b; candidate object SHA-256 0338c0daf5c2ca2c04466b181f4bb2b7b17e5948a438f38633d13ccdbe9fb039.
- GitHub Issue: #10097 (https://github.com/soldieg/ReBLACK-XBOX/issues/10097).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
