# sub_000C0BA0 — lote 63

- Issue: [#6705](https://github.com/soldieg/ReBLACK-XBOX/issues/6705).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000C0BA0–0x000C0BF5 (inclusive), 86 bytes, 37 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 86/86 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000C0BA0; tamanho 86 bytes.
- SHA-256 da fonte: f28d2f05cab520f97416955954e16463dcbd251a945306d251d6af5e37805aaf; candidato: 3601f1de88b6b1402465f60747a4360e8076219acc5a2d863b68c030b841bc77; compilado: 6ee5ac2c8bf233366b7e4cf505e13af0f586d8c1b01acd662e0c4d34132870cb.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 110, position 57; address order. Candidate span: 86 bytes (0x000C0BA0 to exclusive end 0x000C0BF6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0BA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAFF20. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 86 bytes. XBE raw = derived PE = split = REA; span SHA-256 31d0de1c54501beee86c93308569a5cb80e7757b9a7d3bbbd9e7df535654ff7c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 86 bytes.
- Source SHA-256 f28d2f05cab520f97416955954e16463dcbd251a945306d251d6af5e37805aaf; compiled object SHA-256 52a983d21ffc31829dd549b991eabbba9e8bacffa47eed84f183ba13ef4cd6e6; candidate object SHA-256 3601f1de88b6b1402465f60747a4360e8076219acc5a2d863b68c030b841bc77.
- GitHub Issue: #6705 (https://github.com/soldieg/ReBLACK-XBOX/issues/6705).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
