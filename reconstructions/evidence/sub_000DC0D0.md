# sub_000DC0D0 — exact ObjDiff evidence

- **Dashboard candidate:** `candidate/sub_000DC0D0`, 39 bytes, currently `unmatched`; public candidate metadata says `complete=false`.
- **Boundary:** Ghidra 12.1.3 identifies the entry at `0x000DC0D0` and inclusive body `0x000DC0D0`–`0x000DC0F6` (39 bytes).
- **Call graph and ABI evidence:** the sole observed direct caller is `0x0017F670`; it places the output buffer in EAX and the object in ECX before the call. No direct callees or unresolved calls were reported. The body writes a 16-byte vector result; semantic field names remain unknown.
- **Static bytes:** the emitted 39-byte body matches the candidate and original XBE raw range at file offset `0xCC0D0`; the raw range matches Ghidra's initialized memory in the derived PE. Original XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`. Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- **Build:** MSVC 19.51.36260 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed without diagnostics. This is a host object build, not an Xbox link.
- **ObjDiff:** 3.8.2, **100.00% (39/39 bytes)** for `_sub_000DC0D0` against `candidate/sub_000DC0D0`. Candidate object SHA-256: `5D097393FF2C958913FF7E290B5C8D62DCB9DD97598605CD448EC70FAA0EFBEB`.
- **Source SHA-256:** `605151BE85799F693E4EF3C9A90C282DEBDC45B1913D00F37670445E192BBA3B`.

The call uses an observed register contract and the body has no called helpers. Xbox link, post-link XBE comparison, and runtime are pending. ObjDiff proves only the comparison against this incomplete candidate object.

## REA evidence

- Boundary: `ev_344ab46775a78aefc8c81379b600409070b920aacc666849a9d2eee66102354c`.
- Function relationships: `ev_7a5d75f1039b1c63e47345438fd7ec918c3a249ba94502bb880791d1d4c221ee`; caller setup: `ev_af57e8df805a69d47544b5344a44e6ec7b0b803d3b52357f8144aee846dd16f5`.
- Instruction listing: `ev_bffa26459ef44cee6b88e243a0e213a86854fa349a8d2132ab28d763d67b20b9`.
- Derived PE initialized-memory read: `ev_f9ab5bb8a014df3a3115011a291c4ebb61b31b30a32b58b92bd1613a88b59175`.
