# sub_000BD6B0 — lote 63

- Issue: [#6664](https://github.com/soldieg/ReBLACK-XBOX/issues/6664).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BD6B0–0x000BD6DC (inclusive), 45 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 4 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 45/45 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BD6B0; tamanho 45 bytes.
- SHA-256 da fonte: 8f6f7a91efd680c3fa5f0287623079739a67ff513a7a4f3c8b920c33785b0121; candidato: d04af979fe5716af138acc72c64fe118d7da4232df500e955f1e233d2850f000; compilado: 18881543e5893c8d92f809e651aad8dc59d7df13e2c752ee612ba105b5c09694.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 90; address order. Candidate span: 45 bytes (0x000BD6B0 to exclusive end 0x000BD6DD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAD6B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xACA30. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 45 bytes. XBE raw = derived PE = split = REA; span SHA-256 06f22081b13d6320460145932fbb3b244060037b7a7d1536d2a3ca0fc337d433.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 45 bytes.
- Source SHA-256 8f6f7a91efd680c3fa5f0287623079739a67ff513a7a4f3c8b920c33785b0121; compiled object SHA-256 7346001d0411fc91517757e8eebe3c45068d4868ca55be476d48af22ef2aa18d; candidate object SHA-256 d04af979fe5716af138acc72c64fe118d7da4232df500e955f1e233d2850f000.
- GitHub Issue: #10103 (https://github.com/soldieg/ReBLACK-XBOX/issues/10103).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
