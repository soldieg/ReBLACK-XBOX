# sub_000BB7B0

- Function task: [#880](https://github.com/soldieg/ReBLACK-XBOX/issues/880).
- Function range: 0xbb7b0–0x000BB81A inclusive, contiguous, 107 bytes; local Ghidra 12.1.4 body FUN_000bb7b0 covers the same exact range.
- Candidate dashboard entry: sub_000BB7B0, 107 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BB7B0.obj, SHA-256 0f49547909ad65785c8a29bb6ec0b59bc238a136757dd8146cfc35a53f337fc4; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAB7B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAAB30.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 546bdf042c666d2692b9bdd0192a3760157a5172654695982791a47c3ecfaaa4.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 107/107 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: ec0de9b45c99bc91c70a0defed97189376b0f1feaa5d7f7b024c5d238ad4694b; compiled .text$mn SHA-256: 9471a3130c0f21b65285fa73833c3dcaf7a5ad7ad332081888acb4fdd43b79db.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
