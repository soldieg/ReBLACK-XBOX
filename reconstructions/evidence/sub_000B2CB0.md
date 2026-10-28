# sub_000B2CB0 — lote 82, validação estática

Issue #8525. Fonte de bytes presa ao endereço; não representa C semântico nem ABI formal. O ordinal está pendente de reconciliar o roster.

- REA/Ghidra 12.1.3 confirmou 59 bytes de corpo em `0xB2CB0–0xB2CC9` e `0xB2CD0–0xB2CF0`, totalizando span de 65 bytes. Caller direto observado: `sub_000B3500`; callees e chamadas não resolvidas: nenhum.
- Evidências REA: análise `ev_460918746fb821ebbea5bab6057e5ab9961032fd97f4853d2b9dd8492991b9a8`; bytes `ev_4ba193c285fdf925cf8fe0d78e9dce67639e527b7e09191467932cbccd7656fd`; mapeamento do arquivo PE `ev_14a97186f4091019734a99995669134a9d8888079d2da08fd623b8e4202dc620`.
- Os 65 bytes coincidem entre REA, original XBE, derived PE, XboxRecomp split, candidato nomeado e objeto compilado. SHA-256 do span: `923AC00C6D40BF04D3B084A50B7C6204CA5BBABE42ACDA6352BDB35A4588C588`.
- MSVC 19.51.36260 x86 compilou sem diagnósticos com `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; seção `.text$mn` com 65 bytes e zero relocações. ObjDiff 3.8.2 reporta símbolo e seção em 100% contra `_sub_000B2CB0`.

Link Xbox, diff pós-link do XBE, runtime e gameplay não foram executados.
