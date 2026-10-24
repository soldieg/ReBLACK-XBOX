# sub_000B7EB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xb7eb0–0x000B7F60 inclusive, contiguous, 177 bytes; local Ghidra 12.1.4 body FUN_000b7eb0 covers the same exact range.
- Candidate dashboard entry: sub_000B7EB0, 177 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00081da0 (0x00081da0) at 0x000b7ec9, FUN_00081da0 (0x00081da0) at 0x000b7edc, FUN_00081da0 (0x00081da0) at 0x000b7eef, FUN_00081da0 (0x00081da0) at 0x000b7f02, FUN_00081da0 (0x00081da0) at 0x000b7f15, FUN_00081da0 (0x00081da0) at 0x000b7f28, FUN_0007ef10 (0x0007ef10) at 0x000b7f48, FUN_0007ef10 (0x0007ef10) at 0x000b7f56; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000B7EB0.obj, SHA-256 2254cedf17387a6a05cad34b9434fa37c35da1ce309f6aa288c06586b5ce5437; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xA7EB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xA7230.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: d4de2260fac1e5bdccccbb783558d634581d5a86844e5124c1ab741563bb7f69.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 177/177 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 244dce865ba62679068e4575505109517f152e31f771676b175ab37bc429a3ee; compiled .text$mn SHA-256: 7212fcb2c3ce1e61e198e6c455e318879fc7f50655a3c0e7ca91a504ea314281.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
