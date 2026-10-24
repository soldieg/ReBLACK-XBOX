# sub_000A84FE

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa84fe–0x000A8531 inclusive, contiguous, 52 bytes; local Ghidra 12.1.4 body ___DestructExceptionObject covers the same exact range.
- Candidate dashboard entry: sub_000A84FE, 52 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __SEH_prolog (0x000a2da4) at 0x000a8505, FID_conflict:_CallMemberFunction1 (0x000a4186) at 0x000a8523, __SEH_epilog (0x000a2ddf) at 0x000a852c; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A84FE.obj, SHA-256 523211880350367e0792fcd28be6985986c19d1f7a24fdae7752e9de6d87fc86; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x984FE.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9787E.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 7bbe3c965e91f700c9cf153b874e818ffb26c448046564c62cb07215d4f4c23f.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 52/52 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 87cca7d658e308c3c9a3b0c73e3811e6d0e030eed2b01aa1350f4b30e4cacaab; compiled .text$mn SHA-256: 7ba064d83a91af567f0abb7e56a44e9515f0c2e963f3f96cada03d7b0fe9e718.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
