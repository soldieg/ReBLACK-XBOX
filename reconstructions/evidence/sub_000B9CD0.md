# sub_000B9CD0 — lote 63

- Issue: [#6647](https://github.com/soldieg/ReBLACK-XBOX/issues/6647).
- Lote: 63 de 100; 100 funções.
- Ghidra 12.1.3: corpo contíguo 0x000B9CD0–0x000B9D46 (inclusive), 119 bytes, 35 instruções.
- Raw-static screen de 2026-10-26: mesmo endereço e tamanho.
- Bytes: XBE original section-mapped = PE derivada = Ghidra = XboxRecomp split, byte a byte; fronteiras do split contíguas.
- Grafo estático Ghidra: 0 caller(s) diretos registrados; 1 destino(s) direto(s) conhecido(s); 0 chamada(s) computada(s)/indireta(s) sem destino resolvido. Componente direto singleton; ownerless inbound refs=0, inbound data refs=0 e unknown direct callees=0 na triagem.
- Objeto .text$mn: candidato e objeto x86 compilado iguais, 119/119 bytes; relocações 0/0.
- Compilador: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; sem diagnósticos.
- ObjDiff 3.8.2: 100.00% contra o símbolo candidato nomeado _sub_000B9CD0; tamanho 119 bytes.
- SHA-256 da fonte: 45f3ca82e283e04c13cd2afbff3480be1448659adcd3878c57116f67856d9c42; candidato: 946aead1880e09ee9ce1d3f7e8cc569438bc16a815fb3c692a2b6d2031643a9e; compilado: a45bdbc13d2968352bba498c1b1111d1eda9fa0f790140ca3f7569e4e4ca58c2.

A fonte é um emissor de bytes preso ao endereço; não afirma C semântico nem ABI formal. Xbox link, diff pós-link do XBE, runtime e gameplay permanecem pendentes.

## Lot 102 manifest candidate evidence (2026-10-29)

- Manifest: lot 108, position 49; address order. Candidate span: 119 bytes (0x000B9CD0 to exclusive end 0x000B9D47).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xA9CD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9050. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 119 bytes. XBE raw = derived PE = split = REA; span SHA-256 c0348c219a0d2fd466063a0c2537efef80e86507a77763956fcd329291ae0c54.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 119 bytes.
- Source SHA-256 45f3ca82e283e04c13cd2afbff3480be1448659adcd3878c57116f67856d9c42; compiled object SHA-256 dce84bd23318c6e2e75bec02858e8a7a6491edec4ecf94a75856ff1253065c38; candidate object SHA-256 946aead1880e09ee9ce1d3f7e8cc569438bc16a815fb3c692a2b6d2031643a9e.
- GitHub Issue: #10062 (https://github.com/soldieg/ReBLACK-XBOX/issues/10062).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
