# sub_000BEBD0 — lote 63

- Issue: [#6676](https://github.com/soldieg/ReBLACK-XBOX/issues/6676).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BEBD0–0x000BEC0A (inclusive), 59 bytes, 37 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 3 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 59/59 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BEBD0; tamanho 59 bytes.
- SHA-256 da fonte: 3a8a7bea1730d41d4775c52b16e88186ec624f1f281fb3a3ad84ff07099624bb; candidato: 01df60dd1c770f703a1d8cf4576364c2fd4a623951cfb20e518dbce626c61b1b; compilado: 73e9c54decd943f76c5a1070b67e969cdadf1df1f4fcb0131028545ed1749b38.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 27; address order. Candidate span: 59 bytes (0x000BEBD0 to exclusive end 0x000BEC0B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEBD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADF50. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 59 bytes. XBE raw = derived PE = split = REA; span SHA-256 b7c5199c05b135efc0d7d673056b4109ef5d1e5f9b3e9f99032564dc0413c3bf.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 59 bytes.
- Source SHA-256 3a8a7bea1730d41d4775c52b16e88186ec624f1f281fb3a3ad84ff07099624bb; compiled object SHA-256 d14b70977bb5c695037248bd2d68f8b1db97b91c6b1526072dfa01757726bc54; candidate object SHA-256 01df60dd1c770f703a1d8cf4576364c2fd4a623951cfb20e518dbce626c61b1b.
- GitHub Issue: #6676 (https://github.com/soldieg/ReBLACK-XBOX/issues/6676).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
