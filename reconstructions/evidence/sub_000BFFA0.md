# sub_000BFFA0 — lote 63

- Issue: [#6688](https://github.com/soldieg/ReBLACK-XBOX/issues/6688).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BFFA0–0x000BFFC6 (inclusive), 39 bytes, 18 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 2 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 39/39 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BFFA0; tamanho 39 bytes.
- SHA-256 da fonte: 6c27bee4263bfb309348f309f81a364c84bbf753405048738c65e74983e3e01c; candidato: 58ad37e0361fca9176e049307027d0b18bd3fce524687d4f87b284b9f8d43e39; compilado: 5c645d7c1001d877a81f78e7203b45e73f0ae858c3b3633add0c71e6cf5ee820.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 110, position 15; address order. Candidate span: 39 bytes (0x000BFFA0 to exclusive end 0x000BFFC7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFFA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF320. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 39 bytes. XBE raw = derived PE = split = REA; span SHA-256 304d0d2f4215517d9eeb093d3313061bf47be506e724d7d76537602706bfcab0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 39 bytes.
- Source SHA-256 6c27bee4263bfb309348f309f81a364c84bbf753405048738c65e74983e3e01c; compiled object SHA-256 c59412c323694ed27dc8d4444c5cd66a3d11c8fc5b27ed6169e291deab0a72ee; candidate object SHA-256 58ad37e0361fca9176e049307027d0b18bd3fce524687d4f87b284b9f8d43e39.
- GitHub Issue: #6688 (https://github.com/soldieg/ReBLACK-XBOX/issues/6688).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
