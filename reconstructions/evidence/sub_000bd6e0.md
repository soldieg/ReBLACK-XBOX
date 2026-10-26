# sub_000bd6e0 — lote 63

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
