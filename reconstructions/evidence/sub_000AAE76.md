# sub_000AAE76

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaae76–0x000AAEA0 inclusive, contiguous, 43 bytes; local Ghidra 12.1.4 body __freebuf covers the same exact range.
- Candidate dashboard entry: sub_000AAE76, 43 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a3791 (0x000a3791) at 0x000aae89; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AAE76.obj, SHA-256 ecd2533bbfbb7bca107aefb6014fdc82be4f08b1f484230f9e4b6e6cfffc65c3; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9AE76.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9A1F6.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: eedc777391a012dde58c1e2d61ca6dda67253f8b9c0e1cda764435096bf64bb1.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 43/43 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 93897a4fbe27b0de810f0fca4f3f0e5cae909c2fdd3509f29378b94a3c9b8f0f; compiled .text$mn SHA-256: bb1d4c06010296db72f14c51a4285104d987290ed64e7466c0e6d3b911d4e2fb.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
