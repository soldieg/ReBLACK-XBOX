# sub_000BA4F0 — lote 63

- Issue: [#6650](https://github.com/soldieg/ReBLACK-XBOX/issues/6650).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BA4F0–0x000BA51D (inclusive), 46 bytes, 18 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 46/46 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BA4F0; tamanho 46 bytes.
- SHA-256 da fonte: 919e035169f37c0759c502b2f171b22493f8702fac3611b7bfb11fa1e668e745; candidato: 69441f8165f7931e4d7574f7bdea900956a1b648e54f1c8e961e40ce8736c325; compilado: e648c2c8c727db13981b5fde553a9be78758adf6355b23635f66438498d6316d.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 58; address order. Candidate span: 46 bytes (0x000BA4F0 to exclusive end 0x000BA51E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAA4F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9870. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 46 bytes. XBE raw = derived PE = split = REA; span SHA-256 e4cd2f61fcc6b28585f9d9ee5f16b23070c366f3217a5ade0722f139bef58a25.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 46 bytes.
- Source SHA-256 919e035169f37c0759c502b2f171b22493f8702fac3611b7bfb11fa1e668e745; compiled object SHA-256 3d909ed7d486fee247736814d0bcb1ca372bba58c15c92896d2b497d0904992f; candidate object SHA-256 69441f8165f7931e4d7574f7bdea900956a1b648e54f1c8e961e40ce8736c325.
- GitHub Issue: #10072 (https://github.com/soldieg/ReBLACK-XBOX/issues/10072).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
