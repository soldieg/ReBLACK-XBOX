# sub_000BBB40 — lote 63

- Issue: [#6663](https://github.com/soldieg/ReBLACK-XBOX/issues/6663).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BBB40–0x000BBB60 (inclusive), 33 bytes, 10 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 33/33 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BBB40; tamanho 33 bytes.
- SHA-256 da fonte: 34ba8553b3426a122dfa5095701f28881db2b80fe8f7531324979c0f06abebb2; candidato: a1208cf43cba9d223c008a827ec407f9acc339d9d228435680d83a3cfac3acad; compilado: 96ed52cb66734cec98c17c9097d7ebb6a2c3ee503ff33d35c51f700b2da48762.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 82; address order. Candidate span: 33 bytes (0x000BBB40 to exclusive end 0x000BBB61).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xABB40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAAEC0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 33 bytes. XBE raw = derived PE = split = REA; span SHA-256 b50b26e240b5114947bc12e10607bd9206dfd2704c30166e37bcbdedbab6e651.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 33 bytes.
- Source SHA-256 34ba8553b3426a122dfa5095701f28881db2b80fe8f7531324979c0f06abebb2; compiled object SHA-256 8f5c33aa7a0d4ddf72e6873525d00c2bfc3bd2a2597a3f91699fa657b28a7471; candidate object SHA-256 a1208cf43cba9d223c008a827ec407f9acc339d9d228435680d83a3cfac3acad.
- GitHub Issue: #10095 (https://github.com/soldieg/ReBLACK-XBOX/issues/10095).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
