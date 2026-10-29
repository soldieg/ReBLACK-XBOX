# sub_000BD6E0 — lote 63

- Issue: [#6667](https://github.com/soldieg/ReBLACK-XBOX/issues/6667).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000BD6E0–0x000BD70D (inclusive), 46 bytes, 12 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 4 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 46/46 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000BD6E0; tamanho 46 bytes.
- SHA-256 da fonte: d2bdae4878f50d440d6140b028e31fa31c612999bee4e2206f81cd8f4b074e2b; candidato: 8f97629d1efedd5005adf681ec3fb13ed9c4161da338c02663edc821590fa244; compilado: 6c83a652d74c64c35351da83e2cfbcfb559a27452280ad2863f342ed6d0628f2.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 91; address order. Candidate span: 46 bytes (0x000BD6E0 to exclusive end 0x000BD70E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAD6E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xACA60. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 46 bytes. XBE raw = derived PE = split = REA; span SHA-256 65a47170c4c027de6bba488c2d654b8428bcaea71184e11ae92f5b214abe0e70.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 46 bytes.
- Source SHA-256 d2bdae4878f50d440d6140b028e31fa31c612999bee4e2206f81cd8f4b074e2b; compiled object SHA-256 e1809516aad256bb183ea803882beebf7818b37532afa9c5bd50fe28f2a4978c; candidate object SHA-256 8f97629d1efedd5005adf681ec3fb13ed9c4161da338c02663edc821590fa244.
- GitHub Issue: #10105 (https://github.com/soldieg/ReBLACK-XBOX/issues/10105).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
