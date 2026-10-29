# `sub_000AB3CA`

- Manifest candidate: Lot 106, row 85, address `0x000AB3CA`, 105-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_ed4740af70fbfc2709b47fa4112afe7777c4e982d4549dbc1e27f1b200010efa` records 94 body bytes. Caller evidence `ev_6207b6c044ce0801a70f87d3d3abd3fa6fe0fd3286c23c0c4d00b5c68c3921aa`; callee evidence `ev_c26d4a952cc0ab22e3b8e3bd0d1b6371af5b4590cb82e8540f59c7835e49a8fc`. caller 0xAA37C; callees 0xA2DA4 and 0xA2DDF; graph complete.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 105/105 bytes.
- XBE, split, candidate `.text` and fresh `.text` match 105/105 bytes; relocations 0/0.
- Byte SHA-256 `B152AA15E8E2788B4C0F32A8E2995A6C6751BCCC22F7E3EE9521BB17685AEEB5`; candidate object SHA-256 `550E30D7342B14EB5047BD10313EDFFA610F1A74926CE0F1443E374483B52661`; source SHA-256 `A12B151BAD01501F57A82321C0BC024098520C4F677700DDE1B3D05B7E73E7C9`; fresh object SHA-256 `3A8D1615DCBBDE37D117AD88B7DE113F980E273C154AFB3979B515B5732B4D14`.
- Source uses a split-byte `_emit` shortcut; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
