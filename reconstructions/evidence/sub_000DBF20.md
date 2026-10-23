# sub_000DBF20 — exact ObjDiff evidence

- **Dashboard candidate:** `candidate/sub_000DBF20`, 42 bytes, currently `unmatched`; public candidate metadata says `complete=false`.
- **Boundary:** Ghidra 12.1.3 identifies the entry at `0x000DBF20` and inclusive body `0x000DBF20`–`0x000DBF49` (42 bytes).
- **Call graph and ABI evidence:** the sole observed direct caller is `0x002069F0`; it places the output buffer in EAX and the object in ECX before the call. No direct callees or unresolved calls were reported. The function writes a 16-byte vector result; semantic field names remain unknown.
- **Static bytes:** the emitted 42-byte body matches the candidate and original XBE raw range at file offset `0xCBF20`; the raw range matches Ghidra's initialized memory in the derived PE. Original XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`. Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- **Build:** MSVC 19.51.36260 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed without diagnostics. This is a host object build, not an Xbox link.
- **ObjDiff:** 3.8.2, **100.00% (42/42 bytes)** for `_sub_000DBF20` against `candidate/sub_000DBF20`. Candidate object SHA-256: `9724101DAB7D242816DEAC5C01E2E07B406F9DCDA5B21471EEA72FD865D57D05`.
- **Source SHA-256:** `14E9DF88E12B9134666281BFD1432F1C09CE34D390E914A0420850F56F69D612`.

The call uses an observed register contract and the body has no called helpers. Xbox link, post-link XBE comparison, and runtime are pending. ObjDiff proves only the comparison against this incomplete candidate object.

## REA evidence

- Boundary: `ev_72fe26f4aae86b02cc072edc52743794d4aa1b49e8f034428c407bf74f4e7106`.
- Function relationships: `ev_c61393ad1c7e5d66f7b64c87d9f71b5449529fa36dd69ed5e05043166c918356`; caller setup: `ev_4af3f671f6715ad2dc6cbf8d34b3b9ad38e1ce9540a3b8726ce3db9d1b88`.
- Instruction listing: `ev_01d02f476464dcade3db4c5725eff44efa04bd1797911ddfbe13750739ccad8e`.
- Derived PE initialized-memory read: `ev_a2921af51bc4ce31f7fce0464e734353a96e30391cd07c0072b5e5d273e1624b`.
