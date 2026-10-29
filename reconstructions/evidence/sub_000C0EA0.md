# sub_000C0EA0 — lote 63

- Issue: [#6709](https://github.com/soldieg/ReBLACK-XBOX/issues/6709).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C0EA0–0x000C0EC3 (inclusive), 36 bytes, 11 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 36/36 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C0EA0; tamanho 36 bytes.
- SHA-256 da fonte: 027e5eb1f52ba906cffad672a6bd2b69567e8ff708597969c561e5991d994818; candidato: 94453b841c2dfef597d705f7e8faa23341de3c1773f34faa219384dd34f0cf82; compilado: 2ac21dafd3769d598c98f1c7ec377cbf6559509b116dfa5a26bebd8788ee639b.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 110, position 61; address order. Candidate span: 36 bytes (0x000C0EA0 to exclusive end 0x000C0EC4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0EA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0220. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 36 bytes. XBE raw = derived PE = split = REA; span SHA-256 c5a142d254aeeb80bd9be875ac50044da387be7a64c4a2026ed3c6d3b82d51b4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 36 bytes.
- Source SHA-256 027e5eb1f52ba906cffad672a6bd2b69567e8ff708597969c561e5991d994818; compiled object SHA-256 8e62de8f8e91b23ab9f19440f03d8e7d84fa4cbc9f3c341d79f164ee0ca241c9; candidate object SHA-256 94453b841c2dfef597d705f7e8faa23341de3c1773f34faa219384dd34f0cf82.
- GitHub Issue: #6709 (https://github.com/soldieg/ReBLACK-XBOX/issues/6709).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
