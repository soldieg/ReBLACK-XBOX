# sub_000BAEB0 — lote 63

- Issue: [#6657](https://github.com/soldieg/ReBLACK-XBOX/issues/6657).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BAEB0–0x000BAEF8 (inclusive), 73 bytes, 18 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 1 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 73/73 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BAEB0; tamanho 73 bytes.
- SHA-256 da fonte: a1f15855fa593f91997e20a2ef74031248fe41ce5d037870a76163be8348bd48; candidato: 55b914d9c64662d5c2ab360db67b9fd53a3081c552ddac4b7dca93bc6e6bb581; compilado: 7c7e0547925eb028aeb02863a3f34925fddbd2f0722153f59bcd19554c7bc2ef.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 76; address order. Candidate span: 73 bytes (0x000BAEB0 to exclusive end 0x000BAEF9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAEB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA230. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 73 bytes. XBE raw = derived PE = split = REA; span SHA-256 f0f8cb450db7f7f1e8fcf0b9c3b95d7bc547ac167a793ef619973da07d4aa528.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 73 bytes.
- Source SHA-256 a1f15855fa593f91997e20a2ef74031248fe41ce5d037870a76163be8348bd48; compiled object SHA-256 2d22fc41e89c7926a24b8407f348099424dd0dd3a9523883cac8df12c30cf04e; candidate object SHA-256 55b914d9c64662d5c2ab360db67b9fd53a3081c552ddac4b7dca93bc6e6bb581.
- GitHub Issue: #10090 (https://github.com/soldieg/ReBLACK-XBOX/issues/10090).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
