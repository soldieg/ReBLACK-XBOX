# sub_000CABE0

- Function task: [#937](https://github.com/soldieg/ReBLACK-XBOX/issues/937).
- Function range: 0xcabe0–0x000CACBF inclusive, contiguous, 224 bytes; local Ghidra 12.1.4 body FUN_000cabe0 covers the same exact range.
- Candidate dashboard entry: sub_000CABE0, 224 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CABE0.obj, SHA-256 28dd6905af1d60f63903128abe753060fe6cda488e0f955ce3b5b12d6e7ecd1e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBABE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB9F60.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 89688c1e8a815a2dcd4e64d40da43c4f8acdbbdcd4598a43dce2cee080bf3c5a.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 224/224 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: cc94a78e65753df7696df91eb316cb09c3487b952de2f37c60449ca085254178; compiled .text$mn SHA-256: f18efedc48ba559a846851fc5e7517b7b6e1ff68637e61b0b410bbcd7d8504a5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
