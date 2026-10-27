# sub_000AED20 — lote 82

Issue #8520. Revalidação estática em 2026-10-27. A Issue registra que esta função pertence ao checkpoint inicial 74/100; não incrementa o lote. O checkpoint público mais recente é 83/100, registrado em #8578.

## Fronteira e relações

REA/Ghidra 12.1.3 confirma span de 171 bytes, 0xAED20–0xAEDCA, com 168 bytes de instruções em duas faixas: 0xAED20–0xAED7C e 0xAED80–0xAEDCA. Os três bytes entre elas são o NOP de alinhamento LEA ECX,[ECX], atravessado pelo JMP em 0xAED7B para 0xAED80; todos os 171 bytes foram mantidos.

Cobertura de relações completa: caller sub_000AFBF0; callee sub_0008B5E0; nenhuma chamada direta sem destino nem chamada indireta nesta função. As fontes e fichas das dependências existem no repositório. Evidências REA: função ev_dd281b8ed27018211d645f7ad14d983def323e79663cba03760af3e04ba1c761 e leitura ev_e28ae4469ee62ed2b9e89d17c75fe9b2d455f2c9bfbc0893a12e5b5e0936eac9.

## Validação estática

Os 171 bytes coincidem entre XBE original, PE derivada, leitura REA, split XboxRecomp, objetos candidatos dos relatórios de 2026-10-14/15 e o objeto MSVC recém-compilado. Offset XBE: 0x9ED20; offset PE derivada: 0x9E0A0. SHA-256 do span: B6F37F6540B84D1B0A520F19EAF39D92E5FB5FF19A35FD2B7BBA115679EEA218.

MSVC 19.51.36260 x86 compilou sem diagnósticos com /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. Seção .text$mn compilada: 171 bytes, zero relocações. ObjDiff 3.8.2 contra o objeto candidato nomeado: símbolo e seção em 100,00% (171/171), sem relocações em ambos.

SHA-256 da fonte pública: 85B3948530BF47ADB2B41F12F9C19C6B7497A0499E55B43B17E0CD68C751A08B. Objeto compilado: 943A43A7F6A449124F20967CDB4E87DC5ABF98B79619B71C40D3BB2CA8EBA8F3. Objeto candidato: BF039141AA4974BCD03DE8F2FC5F35D407DC02E866DC848DC60A07E26D6C51D7.

## Limites

A fonte preserva bytes e não reivindica C semântico ou ABI formal. Esta função já fazia parte do checkpoint inicial e não acrescenta ordinal. Link Xbox, diff pós-link do XBE, runtime e gameplay seguem pendentes.
