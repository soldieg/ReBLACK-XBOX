# sub_000bbb70 — lote 63

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
