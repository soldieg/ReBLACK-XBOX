# sub_000DBC80 — exact ObjDiff evidence

- **Dashboard candidate:** `candidate/sub_000DBC80`, 98 bytes, currently `unmatched`; public candidate metadata says `complete=false`.
- **Boundary:** Ghidra 12.1.3 identifies the entry at `0x000DBC80` and inclusive body `0x000DBC80`–`0x000DBCE1` (98 bytes).
- **Call graph and ABI evidence:** the sole observed direct caller is `0x001F97E0`; it loads the object into ECX, calls this function, and tests EAX. No direct callees or unresolved calls were reported. The source is an exact object emitter; semantic field names and a reusable C prototype remain unverified.
- **Static bytes:** the emitted 98-byte body matches the candidate and original XBE raw range at file offset `0xCBC80`; the raw range matches Ghidra's initialized memory in the derived PE. Original XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`. Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- **Build:** MSVC 19.51.36260 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed without diagnostics. This is a host object build, not an Xbox link.
- **ObjDiff:** 3.8.2, **100.00% (98/98 bytes)** for `_sub_000DBC80` against `candidate/sub_000DBC80`. Candidate object SHA-256: `7F1029A66B17192A3E4526FF2A0FEA4B0DC1E97546E6AF297DDD4E9EA8B9914D`.
- **Source SHA-256:** `A893477C4EC838AC9DD02FE1410D02D806915A65A7F7E421D53C1196A077D43C`.

An absolute float read is emitted with its observed x86 encoding. Xbox link, post-link XBE comparison, and runtime are pending. ObjDiff proves only the comparison against this incomplete candidate object.

## REA evidence

- Boundary: `ev_1f39bbf9dd25f0819df248c3ccb6ba186ffda38c9ccd97d772c26333a7194aa3`.
- Function relationships and caller analysis: `ev_fec55a49fd3ab2349f80e68c92da745179986dc6d1b0d1d4d3b344899d5c8043`; caller setup: `ev_bc2efea43d2f70e90b084d3bba21f3058cb20c1ed203555aebdb77e634613836`.
- Instruction listing: `ev_8e78c25c6ad5b38f62e742ef4373066212d0997b8479f6ba8b900bf37ce4d664`.
- Derived PE initialized-memory read: `ev_b96ab067998758fed8710879fcdfcf48148d2e785d82346fd917bd47c26935e6`.
