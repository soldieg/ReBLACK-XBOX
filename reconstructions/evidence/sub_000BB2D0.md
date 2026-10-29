# sub_000BB2D0 — lote 63

- Issue: [#6659](https://github.com/soldieg/ReBLACK-XBOX/issues/6659).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BB2D0–0x000BB2F0 (inclusive), 33 bytes, 7 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 33/33 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BB2D0; tamanho 33 bytes.
- SHA-256 da fonte: 174dca1722dbe78a6b573aba8983645dc013ff09e0490afb35d906a0f9e60c32; candidato: 168178792d9413970121cddc559c4d166e0df995311487535db8068698a74412; compilado: 4f8fab45a5a3d92f26e8db036a5c0bcddf75a5f142177514d34bc2661d9c76d1.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 78; address order. Candidate span: 33 bytes (0x000BB2D0 to exclusive end 0x000BB2F1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAB2D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA650. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 33 bytes. XBE raw = derived PE = split = REA; span SHA-256 0ec6277b30158623c0812b1d2f1dc8e8ca99ea78e62558b39fa0ce7ef0d073dd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 33 bytes.
- Source SHA-256 174dca1722dbe78a6b573aba8983645dc013ff09e0490afb35d906a0f9e60c32; compiled object SHA-256 b6713f3c59448a5299402ab807461ba111dc83e5f9a735d12c1d6bd35e22ae8d; candidate object SHA-256 168178792d9413970121cddc559c4d166e0df995311487535db8068698a74412.
- GitHub Issue: #10091 (https://github.com/soldieg/ReBLACK-XBOX/issues/10091).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
