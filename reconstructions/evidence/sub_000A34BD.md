# `sub_000A34BD`

- Manifest candidate: Lot 106, row 2, address `0x000A34BD`, 23-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_56d7468d74d2ada21a703f1505d3d06575e638b0abfb64b3553836a93d476477` records 20 body bytes. Caller evidence `ev_99fcc2f69b5353dfff3cb74835b8f969ecaee9e5124c26299d9a210c265970c2`; callee evidence `ev_7ffdda2c222faed4772e2133a86e63390ebd13a984c14ee75d7348b07fb2aa45`. caller 0x26E28; callees 0xA3485 and 0xA5A92; call graph complete.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 23/23 bytes.
- XBE, split, candidate `.text` and fresh `.text` match 23/23 bytes; relocations 0/0.
- Byte SHA-256 `4B73FF0E71AD2F5F7177469F6BE209AB0F20162D161E743AE95306AA88BB8983`; candidate object SHA-256 `7B296DF1017C7DAD9AD732AFB1E7BF301E8AD74B9DD5EBEA0F2A09387D977387`; source SHA-256 `DAEFE8663CE94E49203AD1A7E10728C19CE814B67265F8A809F63AAEDB07BEB4`; fresh object SHA-256 `4207CF5DB384B7839EFACDF7163BE81372B30ADF947A999660C157AB5D564BFB`.
- Source uses a split-byte `_emit` shortcut; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
