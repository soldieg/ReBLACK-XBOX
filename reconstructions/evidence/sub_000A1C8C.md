# `sub_000A1C8C`

- Manifest candidate: Lot 105, row 92, address `0x000A1C8C`, 67-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_99b64c7ba84f69314e0d807ae7bedc55e6bfc3010015f79bdee24ffda3717fbc` records 67 body bytes. Caller evidence `ev_ccf954ea7ba693c89db77e731a8f975099380c60c54bf9bf0d5c524b60cc1063`; callee evidence `ev_e6d3d705d472944773d8ae340de779f443b8f60710daa188a9bf668e810b5208`. 53 callers resolved; 37 incoming sources omitted; two callees resolved.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 67/67 bytes.
- XBE, split, candidate `.text` and fresh `.text` match 67/67 bytes; relocations 0/0.
- Byte SHA-256 `0602BE0D1BBF741AD618114F8AA67A3173EBFABC9699D6C98CDF6684A9842AF5`; candidate object SHA-256 `B2800BCF7EF5879233536A6E89024CF10F6FA1132539EA4B60938522F448CF9E`; source SHA-256 `6406D056741CB1D7620D259A73379B4C3EDFEDD16E6FA51A73321B75547D5E0A`; fresh object SHA-256 `5643E1886342FAA923C07333AF044679280F8298CEE51D523F8740944E8742AF`.
- Source uses a split-byte `_emit` shortcut; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
