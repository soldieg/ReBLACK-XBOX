# sub_000BA9D0 — lote 63

- Issue: [#6658](https://github.com/soldieg/ReBLACK-XBOX/issues/6658).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BA9D0–0x000BA9F4 (inclusive), 37 bytes, 16 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 37/37 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BA9D0; tamanho 37 bytes.
- SHA-256 da fonte: 54537edf1abbe92c4da59001bcbb06a393e576e9af4f7dd0a32ea96a4591a3fd; candidato: 6c08a00d3fde864e7fe2a3aaf7a15bd0c93528a0b9ff8191b4169930ae5fe8d7; compilado: 141535c7b3d3910739cdf131fa6bca6f26221f66fe88a5b1f924fe07746f8f87.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 68; address order. Candidate span: 37 bytes (0x000BA9D0 to exclusive end 0x000BA9F5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAA9D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9D50. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 37 bytes. XBE raw = derived PE = split = REA; span SHA-256 d2a0f8ec73ec2fe5acc6187f0cfe26c31495c1a5cebfccf473f89a93b89ecfa9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 37 bytes.
- Source SHA-256 54537edf1abbe92c4da59001bcbb06a393e576e9af4f7dd0a32ea96a4591a3fd; compiled object SHA-256 9e72d63ce7677546bd5de66f61169d7283215c9ab46222dda85831e38475b5e2; candidate object SHA-256 6c08a00d3fde864e7fe2a3aaf7a15bd0c93528a0b9ff8191b4169930ae5fe8d7.
- GitHub Issue: #10081 (https://github.com/soldieg/ReBLACK-XBOX/issues/10081).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
