# sub_000C1ED0 — lote 63

- Issue: [#6717](https://github.com/soldieg/ReBLACK-XBOX/issues/6717).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C1ED0–0x000C1EF2 (inclusive), 35 bytes, 8 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 35/35 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C1ED0; tamanho 35 bytes.
- SHA-256 da fonte: 7102a532c2e4a91ff662ed4493dcfa848632af478d47dc5a4f0609c061932c6c; candidato: 4f088e5c261a148fc167cbd76b64728a502942aca0a72089d3e45036283a21f4; compilado: 5d948719c940ca43fc5fe832d59b0ef2cf888554e69ac83242987615b2bfcbdf.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 111, position 18; address order. Candidate span: 35 bytes (0x000C1ED0 to exclusive end 0x000C1EF3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1250. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 35 bytes. XBE raw = derived PE = split = REA; span SHA-256 d143ba94ad77977fcebf2e37aefa0420a0db59d0e4c8f441910ad0b4761dba67.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 35 bytes.
- Source SHA-256 7102a532c2e4a91ff662ed4493dcfa848632af478d47dc5a4f0609c061932c6c; compiled object SHA-256 d11c2fab1ef621ef1d54a8ab20fca426d236353b8f5c06807d4625b3ac1bc326; candidate object SHA-256 4f088e5c261a148fc167cbd76b64728a502942aca0a72089d3e45036283a21f4.
- GitHub Issue: #6717 (https://github.com/soldieg/ReBLACK-XBOX/issues/6717).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
