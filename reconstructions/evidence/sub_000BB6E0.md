# sub_000BB6E0 — lote 63

- Issue: [#6661](https://github.com/soldieg/ReBLACK-XBOX/issues/6661).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BB6E0–0x000BB733 (inclusive), 84 bytes, 20 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 84/84 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BB6E0; tamanho 84 bytes.
- SHA-256 da fonte: 28ae2e6283e84d16490f924be3e9777a7ea9388ff698c04ec6fea5345d59f79a; candidato: 68654069fa8f3b3e59e68bd00a78c08eb752eb9344efba9ca61f355d633a180e; compilado: ee67d269fcf3104f7256edf69ae240d00047721af662310196af17ac21dff0a1.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 80; address order. Candidate span: 84 bytes (0x000BB6E0 to exclusive end 0x000BB734).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAB6E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAAA60. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 84 bytes. XBE raw = derived PE = split = REA; span SHA-256 7d100044326491a3ae01385f913f662d94c35606ed55b67820867f8174ba6816.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 84 bytes.
- Source SHA-256 28ae2e6283e84d16490f924be3e9777a7ea9388ff698c04ec6fea5345d59f79a; compiled object SHA-256 90150f57a6ced92cbfa3e59a82be51c218484d0c7e70d9a496a0e4a9e5ea024a; candidate object SHA-256 68654069fa8f3b3e59e68bd00a78c08eb752eb9344efba9ca61f355d633a180e.
- GitHub Issue: #10093 (https://github.com/soldieg/ReBLACK-XBOX/issues/10093).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
