# sub_000BF5E0 — lote 63

- Issue: [#6684](https://github.com/soldieg/ReBLACK-XBOX/issues/6684).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BF5E0–0x000BF621 (inclusive), 66 bytes, 32 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 66/66 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BF5E0; tamanho 66 bytes.
- SHA-256 da fonte: 7315f01fe26b4ba3bc28af98eabcbcb0b89c79d84060b8a214434c8b140c7f1e; candidato: 2a29f37dca7191c41cdb66023c697030c944bf1b84739f2d29776b0d8039d914; compilado: a6882c2a106056609a90047a321ed42cb993134d678bb471b515614af6ba1499.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 77; address order. Candidate span: 66 bytes (0x000BF5E0 to exclusive end 0x000BF622).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF5E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE960. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 66 bytes. XBE raw = derived PE = split = REA; span SHA-256 a7ab034e6d553002de45b8a45dd7f0024e9744ab68bcc7455cb6c65d471e0b39.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 66 bytes.
- Source SHA-256 7315f01fe26b4ba3bc28af98eabcbcb0b89c79d84060b8a214434c8b140c7f1e; compiled object SHA-256 b465e2cfe8b02233ce000c39e0b8bbb1670e23133207a16d68dcd712ca708c79; candidate object SHA-256 2a29f37dca7191c41cdb66023c697030c944bf1b84739f2d29776b0d8039d914.
- GitHub Issue: #6684 (https://github.com/soldieg/ReBLACK-XBOX/issues/6684).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
