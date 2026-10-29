# sub_000BE5E0 — lote 63

- Issue: [#6670](https://github.com/soldieg/ReBLACK-XBOX/issues/6670).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BE5E0–0x000BE675 (inclusive), 150 bytes, 44 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 150/150 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BE5E0; tamanho 150 bytes.
- SHA-256 da fonte: f5aa8e0db37d36676d14c0cd02f5343e704d6541b56a2cce6650430ff93b2b3f; candidato: 9461aa2f71a249f540a85187f2cdc79e18070da397d717ad872b49741b703790; compilado: 4b674b64faa19215c6c7d44469d05b52df72e2578077b8163d82d0af2fdf264a.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 3; address order. Candidate span: 150 bytes (0x000BE5E0 to exclusive end 0x000BE676).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE5E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAD960. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 150 bytes. XBE raw = derived PE = split = REA; span SHA-256 dc844e515d0a602e9e568360ae8675ccfb55065e0349adfd86a9e592b595119c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 150 bytes.
- Source SHA-256 f5aa8e0db37d36676d14c0cd02f5343e704d6541b56a2cce6650430ff93b2b3f; compiled object SHA-256 8e09817725778546b61460d05b71c90276fa60f9dd9e19a969a5026701bdab26; candidate object SHA-256 9461aa2f71a249f540a85187f2cdc79e18070da397d717ad872b49741b703790.
- GitHub Issue: #6670 (https://github.com/soldieg/ReBLACK-XBOX/issues/6670).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
