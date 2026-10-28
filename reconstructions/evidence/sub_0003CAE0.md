# sub_0003CAE0 — lote 82, exatidificação estática

Issue #8490. REA/Ghidra 12.1.3 confirmou 1.140 bytes de corpo em duas faixas no span de 1.148 bytes; callers sub_00033F10/sub_00039800, callees sub_0003B770/sub_0003C5E0 e nenhuma chamada direta sem destino. Cobertura completa.

REA, XBE raw, PE derivada, split, candidato nomeado e objeto MSVC coincidem byte a byte em 1.148/1.148; SHA-256 F0BC2AF5CE33A141EC7B90DEFA4E2B43EA78DB14439B2AB757D26620A9FB7136. MSVC 19.51.36260 x86 compilou sem diagnósticos, zero relocações. ObjDiff 3.8.2: símbolo e .text$mn 100% (1.148/1.148).

Emissor estático fixado ao endereço; C semântico e ABI formal não provados. Identidade fica fora do contador até reconciliar o roster do lote. Link Xbox, diff pós-link, runtime e gameplay pendentes. Relatório: decompilacao/compilacao/lot82-sub_0003CAE0-recheck-20261027/static-byte-validation.json.
