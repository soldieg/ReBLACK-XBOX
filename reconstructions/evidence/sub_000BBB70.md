# sub_000BBB70 — lote 63

- Issue: [#6660](https://github.com/soldieg/ReBLACK-XBOX/issues/6660).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BBB70–0x000BBBAC (inclusive), 61 bytes, 11 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 0 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 61/61 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BBB70; tamanho 61 bytes.
- SHA-256 da fonte: e85eea7b96b38de8c4c0ac984ca831a33f85f46105cd07bb1d5dcb8870eb2fdb; candidato: c74ed1ddf457f5f72ff6b04d6bdda3a1cfce2d558a35d3c3344bc718589b1f5a; compilado: 4322d0501800b4a65068415ba7ac7c2b77d3edd4dc68b1c7dbc53adc72ea8dc1.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 83; address order. Candidate span: 61 bytes (0x000BBB70 to exclusive end 0x000BBBAD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xABB70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAAEF0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 61 bytes. XBE raw = derived PE = split = REA; span SHA-256 6f3b261c70d4514e76c1114e83112ca797287694a477b83a880064684baa6c7a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 61 bytes.
- Source SHA-256 e85eea7b96b38de8c4c0ac984ca831a33f85f46105cd07bb1d5dcb8870eb2fdb; compiled object SHA-256 e8b175a8e73196caf5fd15b7493bb1a56abec71c8f62cdfddc3a2996fc00f8f1; candidate object SHA-256 c74ed1ddf457f5f72ff6b04d6bdda3a1cfce2d558a35d3c3344bc718589b1f5a.
- GitHub Issue: #10096 (https://github.com/soldieg/ReBLACK-XBOX/issues/10096).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
