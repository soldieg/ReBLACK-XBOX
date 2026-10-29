# sub_000BEDB0 — lote 63

- Issue: [#6675](https://github.com/soldieg/ReBLACK-XBOX/issues/6675).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BEDB0–0x000BEDF2 (inclusive), 67 bytes, 31 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 4 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 67/67 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BEDB0; tamanho 67 bytes.
- SHA-256 da fonte: ada8699bc8c225e7122cb15e0ae0a7324cf5ab9e7009210849e27aaf48a4990d; candidato: afa408f0bf2201d59564597b43fa1d72513683887fa62e85666491f943a7ff0f; compilado: 00c1093be6483599ef11883070d5fbff09dc8bb3a40115d52e54cbbb024fca87.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 109, position 40; address order. Candidate span: 67 bytes (0x000BEDB0 to exclusive end 0x000BEDF3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE130. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 67 bytes. XBE raw = derived PE = split = REA; span SHA-256 9d029c15b7040446214fc852ef9822f61928251c6c750eab01aa230229d31e94.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 67 bytes.
- Source SHA-256 ada8699bc8c225e7122cb15e0ae0a7324cf5ab9e7009210849e27aaf48a4990d; compiled object SHA-256 28633ba2b160479ecdba90252aaf4c9c1506fa13c39848b191e3c7dd13270679; candidate object SHA-256 afa408f0bf2201d59564597b43fa1d72513683887fa62e85666491f943a7ff0f.
- GitHub Issue: #6675 (https://github.com/soldieg/ReBLACK-XBOX/issues/6675).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
