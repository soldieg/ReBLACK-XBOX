# sub_000BFB10 — lote 63

- Issue: [#6685](https://github.com/soldieg/ReBLACK-XBOX/issues/6685).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BFB10–0x000BFB53 (inclusive), 68 bytes, 24 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 68/68 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BFB10; tamanho 68 bytes.
- SHA-256 da fonte: a09c78b6ba478eb21ce8a05781b90d94295c02f8bb253403546caa98f683a8c7; candidato: a0ca5cad2158b968b3401fe55fb828dab0641880e93c86443b78aa2eaf25067f; compilado: a620fe5500358cac3e30a8098dcc9985e4d4339310e51e73f297fb1dbe197bb9.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 110, position 4; address order. Candidate span: 68 bytes (0x000BFB10 to exclusive end 0x000BFB54).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFB10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEE90. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 68 bytes. XBE raw = derived PE = split = REA; span SHA-256 7c41300657190aff27dc9e57d3a6333058768249099e8df850b88c71ec6a5ac4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 68 bytes.
- Source SHA-256 a09c78b6ba478eb21ce8a05781b90d94295c02f8bb253403546caa98f683a8c7; compiled object SHA-256 08714628a35f520c55b0c915199dc95cf1a49079beac97436523f090fe5bdcbf; candidate object SHA-256 a0ca5cad2158b968b3401fe55fb828dab0641880e93c86443b78aa2eaf25067f.
- GitHub Issue: #6685 (https://github.com/soldieg/ReBLACK-XBOX/issues/6685).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
