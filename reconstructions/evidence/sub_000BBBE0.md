# sub_000BBBE0 — lote 63

- Issue: [#6666](https://github.com/soldieg/ReBLACK-XBOX/issues/6666).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BBBE0–0x000BBC69 (inclusive), 138 bytes, 36 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 138/138 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BBBE0; tamanho 138 bytes.
- SHA-256 da fonte: acfd91a68187f1992a1b761c3239eeec9292c358d924405d09d79257a22f3e9f; candidato: 6680470b872f317999ec524c86a06d531c1349b873894e927eff36e7c9716075; compilado: 0f540e0fa01642a851a0ed538e85d1a4b5991470527c9340af8305d8c36c3771.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 85; address order. Candidate span: 138 bytes (0x000BBBE0 to exclusive end 0x000BBC6A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xABBE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAAF60. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 138 bytes. XBE raw = derived PE = split = REA; span SHA-256 adbb9e4628ebb64beb42cd825ce7fc7399f613b72fa478ef1f5dcfb95366bde3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 138 bytes.
- Source SHA-256 acfd91a68187f1992a1b761c3239eeec9292c358d924405d09d79257a22f3e9f; compiled object SHA-256 0052b1a7e76ea2758d61e0e5fefe9d598b12276bb2ac2a789a1a0e200bfc22d8; candidate object SHA-256 6680470b872f317999ec524c86a06d531c1349b873894e927eff36e7c9716075.
- GitHub Issue: #10098 (https://github.com/soldieg/ReBLACK-XBOX/issues/10098).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
