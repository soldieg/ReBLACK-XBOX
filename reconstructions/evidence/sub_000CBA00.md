# sub_000CBA00 — lote 82, exatidificação estática

Issue de status: #8558. posição única pendente de reconciliação do roster.

## Fronteira e relações

- Ghidra 12.1.3: 704 bytes de instruções em `0xCBA00–0xCBA2C` e `0xCBA30–0xCBCC2`; span confirmado de 707 bytes, incluindo o intervalo de alinhamento de 3 bytes.
- Callers diretos: `sub_000D8750`, `sub_000D8A10`, `sub_000D8B80` e `sub_000D8C80`. Callees diretos e chamadas não resolvidas: nenhum. Cobertura de relações: completa.
- Evidência Ghidra: `ev_a5670c9be3951bc66fd440c06c06b509ef16d014d7a08b9445f56cb0550c250b`.

## Comparação estática

Os 707 bytes conferem entre leitura REA, XBE original, PE derivada mapeada, split XboxRecomp, objeto candidato nomeado e objeto MSVC x86. SHA-256 do span: `359E5C686AA07869F26C1957FDA1FE67F639A3EE3B469C295022CC2ABA28F97B`.

- Leitura REA: `ev_eafeb19b81b7f7018249cbd37f06c75949f12e899600c0b07e1967523c39a2f1`.
- Mapeamento REA para o offset PE: `ev_ea870a8b7c403a71166f30aac7bccd125a47a73c3df8e6fc93f5b227b26b2ed3`.
- MSVC 19.51.36260 x86: compilou sem diagnósticos com `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; `.text$mn` compilado tem 707 bytes e zero relocações.
- ObjDiff 3.8.2: símbolo `_sub_000CBA00` e seção `.text$mn` em 100,00% (707/707); objeto candidato e compilado têm zero relocações.

O fonte é um emissor de bytes preso ao endereço, não C semântico nem confirmação de ABI formal. Link Xbox, diff pós-link do XBE, runtime e gameplay permanecem pendentes.
