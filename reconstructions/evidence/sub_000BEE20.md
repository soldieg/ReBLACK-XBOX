# sub_000BEE20 — lote 63

- Issue: [#6677](https://github.com/soldieg/ReBLACK-XBOX/issues/6677).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BEE20–0x000BEE58 (inclusive), 57 bytes, 25 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 2 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 57/57 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BEE20; tamanho 57 bytes.
- SHA-256 da fonte: d0afbb26e41338a8545b807cc946d9814bbc8ab0ea73b61f8739ed794b46a2cf; candidato: 7a9d385d5b9be46b2a4d9c941239c4449051f5764144d42742110dcbfc8e22e7; compilado: 82ef012fc351ab5599ba69c9c4f4b866d632cf7f8745aa2a51c0c04f23a08a60.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 42; address order. Candidate span: 57 bytes (0x000BEE20 to exclusive end 0x000BEE59).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEE20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE1A0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 57 bytes. XBE raw = derived PE = split = REA; span SHA-256 3882cf95f8708877fb5cd870e89b20437dcc68d335d883d4f8ecb7f7f2243b4f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 57 bytes.
- Source SHA-256 d0afbb26e41338a8545b807cc946d9814bbc8ab0ea73b61f8739ed794b46a2cf; compiled object SHA-256 c40f00da1c8dec240cb71914e13ac92dba7c3c1a51c9b7ad6f07266806f24220; candidate object SHA-256 7a9d385d5b9be46b2a4d9c941239c4449051f5764144d42742110dcbfc8e22e7.
- GitHub Issue: #6677 (https://github.com/soldieg/ReBLACK-XBOX/issues/6677).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
