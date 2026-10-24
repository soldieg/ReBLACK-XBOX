# sub_000AF5A0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaf5a0–0x000AF5F1 inclusive, contiguous, 82 bytes; local Ghidra 12.1.4 body FUN_000af5a0 covers the same exact range.
- Candidate dashboard entry: sub_000AF5A0, 82 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000830d0 (0x000830d0) at 0x000af5e8; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AF5A0.obj, SHA-256 9a35fcd67c1e34187fe363cc85d13809d39466b470c9fe1fcb8fb30eaa7daf40; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9F5A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9E920.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f4ad200bcefd3813756f264676f76d61efbd3a65f3257d2cdaa9365599a0fc6a.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 82/82 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: daf146e490028780cb7d1bca5adcdea9a16c82a10084e6ea10a42b29dab44c17; compiled .text$mn SHA-256: d93696c9b18467d29726d1d4dfd26f06e8ad8379293b5f14ff73c1ac7cef43ad.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
