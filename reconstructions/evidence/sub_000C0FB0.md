# sub_000C0FB0 — lote 63

- Issue: [#6710](https://github.com/soldieg/ReBLACK-XBOX/issues/6710).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C0FB0–0x000C0FD3 (inclusive), 36 bytes, 10 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 1 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C0FB0; tamanho 36 bytes.
- SHA-256 da fonte: 7f69e0cd331b23f21bb6c3a7f6276f7ef6d8da77c34dbdd09f9df89126480dab; candidato: 3ba41bf929d077bd51adba31f5dfaee8cd79e821938f9f8644b94baecf7699a2; compilado: cff41015ed05c40022e6eb881ee7884c051738598d1506fcb13c99e2958d63d6.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 110, position 74; address order. Candidate span: 36 bytes (0x000C0FB0 to exclusive end 0x000C0FD4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0330. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 36 bytes. XBE raw = derived PE = split = REA; span SHA-256 23bb8b3234a7f11d682af6c43a331bd1945e3d58569e2423eb0755ea6b28cc74.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 36 bytes.
- Source SHA-256 7f69e0cd331b23f21bb6c3a7f6276f7ef6d8da77c34dbdd09f9df89126480dab; compiled object SHA-256 dd9edf2e51a1ed7a83efb71fda8c30f0fbc739ee1623dce6c059b3fd66e524be; candidate object SHA-256 3ba41bf929d077bd51adba31f5dfaee8cd79e821938f9f8644b94baecf7699a2.
- GitHub Issue: #6710 (https://github.com/soldieg/ReBLACK-XBOX/issues/6710).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
