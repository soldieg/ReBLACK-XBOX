# sub_000B9EB0 — lote 63

- Issue: [#6648](https://github.com/soldieg/ReBLACK-XBOX/issues/6648).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000B9EB0–0x000B9F00 (inclusive), 81 bytes, 24 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 3 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 81/81 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000B9EB0; tamanho 81 bytes.
- SHA-256 da fonte: 3267b4f0e0826fb86b6749a6998d8e0f3c9471bb27d0c2c032d964d63830dfa8; candidato: 5ffcc215bd788e74f8ff892d33ed7555cdb4876f876aa3e143bd8925e7b82db1; compilado: 6564fabba267d22054a113d2eff76167697fda01db51caaca2a611564f08bba8.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 51; address order. Candidate span: 81 bytes (0x000B9EB0 to exclusive end 0x000B9F01).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xA9EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9230. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 81 bytes. XBE raw = derived PE = split = REA; span SHA-256 b5d425941c0a602c8d6efb8279726e3f090d3d5b013cee6b56b5762a930dc45e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 81 bytes.
- Source SHA-256 3267b4f0e0826fb86b6749a6998d8e0f3c9471bb27d0c2c032d964d63830dfa8; compiled object SHA-256 e228c1550e5cd4f170c0456c8ac4c1061d35cda0554a369beb3dbb61f48a910f; candidate object SHA-256 5ffcc215bd788e74f8ff892d33ed7555cdb4876f876aa3e143bd8925e7b82db1.
- GitHub Issue: #10064 (https://github.com/soldieg/ReBLACK-XBOX/issues/10064).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
