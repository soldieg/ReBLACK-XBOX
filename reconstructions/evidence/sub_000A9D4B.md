# `sub_000A9D4B`

- Manifest candidate: Lot 106, row 63, address `0x000A9D4B`, 97-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_34f93aa1d7725ae8bf8f92c6c98d7902bfefa9e5000d37da64e375138584f2c5` confirms entry; body is 62 bytes over the 97-byte span. Callers `ev_ab85585095147529ec44ff60c4900a506242fab4a9ed693f908edb9c45e59be4` (0xA7227, 0xA72AB, 0xAA438); callees `ev_9a08887e5ea449b03cbaefe4e3c910de45a0f5065d19178fbbdb2c3ef52adbd6` (0xA2DA4, 0xA2DDF, 0xA9D3B); graph coverage complete.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 97/97 bytes.
- XBE, split, candidate `.text$mn` and fresh `.text$mn` match 97/97 bytes; relocations 0/0.
- Byte SHA-256 `0168239BE337D57EC65A0CF2CF1D1787DA92A9E9376937A9869595A5BE642DE5`; candidate object SHA-256 `39DCD9495FBDBB4E89DC9B2C9F1D8C44B44CE02C1E4D753AA90938C02A952E28`; source SHA-256 `D8BB7B7D7E358CCFC7B46D77756D451385A722D921233B3B470E8B823BD15774`; fresh object SHA-256 `1308B91BB146AB6CB3D3FC3432BC2ED39DC96D92A5B33FCCD40F5EB428295124`.
- Source uses split-byte `_emit`; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
