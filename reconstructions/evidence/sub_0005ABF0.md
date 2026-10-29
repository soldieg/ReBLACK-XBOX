# `sub_0005ABF0`

- Manifest candidate: Lot 104, row 10, address `0x0005ABF0`, 354-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_228a801d501871cd617dca670938b693b30828e748157e70a83de7316cfc749a` records 351 body bytes. Caller evidence `ev_683217232eb61a34aeae5d66029373d441b4540098282416f47a1858ee9cb964`; callee evidence `ev_735ea95b0fd07296b3a1a5b1c9fbcf0e3585a5b7bfca1147b41f4d3d77d78747`. caller 0x1897C0; one call destination unresolved.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 354/354 bytes.
- XBE, split, candidate `.text` and fresh `.text` match 354/354 bytes; relocations 0/0.
- Byte SHA-256 `32624166CFA0E375625AD1763890034CA066AD5DB1DD25F8CD5C87FF934F73C9`; candidate object SHA-256 `790CB8C7AF019FA5D3C207C1E5191640D89E30EF6ABEBD390B42BF839754CF0B`; source SHA-256 `8578120ACEC98CCA5F836AE8145DB5092B3EBBDB13F5B67A0E13D53B513953A2`; fresh object SHA-256 `EFDC027046B423120665514F31733EE8A589E190E360E36710429929CFCBC11D`.
- Source uses a split-byte `_emit` shortcut; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
