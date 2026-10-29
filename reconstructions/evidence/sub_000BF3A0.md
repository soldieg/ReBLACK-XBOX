# sub_000BF3A0 — lote 63

- Issue: [#6683](https://github.com/soldieg/ReBLACK-XBOX/issues/6683).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BF3A0–0x000BF3CC (inclusive), 45 bytes, 13 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 45/45 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BF3A0; tamanho 45 bytes.
- SHA-256 da fonte: 54e387d667f114eb5a8581e4da5214d7f0e8f05f7220bcab4fdc188ea3284b62; candidato: 2239e6c592efb8ac96904d9e712595b0efdde1f7861d7849e9f0935d57b46fad; compilado: 65cf9092aa28c9dca6caad191355d9cefa98c82d0e2bf93e4e1fb1d9152ceeb9.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 67; address order. Candidate span: 45 bytes (0x000BF3A0 to exclusive end 0x000BF3CD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF3A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE720. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 45 bytes. XBE raw = derived PE = split = REA; span SHA-256 d3034f34816e138744ad4a59644757ba906bc175a9407cec00c86333f9669b75.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 45 bytes.
- Source SHA-256 54e387d667f114eb5a8581e4da5214d7f0e8f05f7220bcab4fdc188ea3284b62; compiled object SHA-256 d9709896b5c7d82cd8818ec2774a50c4f9d2049152ee2237b3a244a84a901e78; candidate object SHA-256 2239e6c592efb8ac96904d9e712595b0efdde1f7861d7849e9f0935d57b46fad.
- GitHub Issue: #6683 (https://github.com/soldieg/ReBLACK-XBOX/issues/6683).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
