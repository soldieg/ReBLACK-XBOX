# sub_000DBD10 — exact ObjDiff evidence

- **Dashboard candidate:** `candidate/sub_000DBD10`, 132 bytes, currently `unmatched`; public candidate metadata says `complete=false`.
- **Boundary:** Ghidra 12.1.3 identifies the entry at `0x000DBD10` and inclusive body `0x000DBD10`–`0x000DBD93` (132 bytes).
- **Call graph and ABI evidence:** the sole observed direct caller is `0x000DC8C0`; it places the object in EAX and calls this function. The helper reads one stack word and returns with `ret 4`. No direct callees or unresolved calls were reported. Global and descriptor types remain unknown.
- **Static bytes:** the emitted 132-byte body matches the candidate and original XBE raw range at file offset `0xCBD10`; the raw range matches Ghidra's initialized memory in the derived PE. Original XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`. Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- **Build:** MSVC 19.51.36260 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed without diagnostics. This is a host object build, not an Xbox link.
- **ObjDiff:** 3.8.2, **100.00% (132/132 bytes)** for `_sub_000DBD10` against `candidate/sub_000DBD10`. Candidate object SHA-256: `98C5069A91E2D1AEFA1317BCC24F0924F5DE37F1B9A15AFDC4D724CA1641550C`.
- **Source SHA-256:** `35347F574A9EA5C1516545FE957E0046C0B5C343980975AA0FFD0E6E6860DEFD`.

Four absolute global reads are emitted at their observed x86 encodings. Xbox link, post-link XBE comparison, and runtime are pending. ObjDiff proves only the comparison against this incomplete candidate object.

## REA evidence

- Boundary: `ev_25a971ce39815782de2bfa80f2b12da6db9c47150ff88408a35dc3b916337c57`.
- Function relationships and caller setup: `ev_648088fbde4a8c2009964d734fd28cececdcf3571e5301c9bdf2cad04bb16aac`; caller analysis: `ev_2b48f7bed3b336ffd6cbf46d5aa2767c27832578ed42619469cc80e6f34b4d89`.
- Instruction listing: `ev_83805fbf37d3beda02ec5102668f65ec2c7a7ef5d27be4b988c02ac8193992d4`.
- Derived PE initialized-memory read: `ev_c75d82bb12d3b849b8d304811460cc491f69e19996bf7eed9f78324330378aab`.
