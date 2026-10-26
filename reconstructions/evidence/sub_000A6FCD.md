# sub_000A6FCD

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa6fcd–0x000A706F inclusive, contiguous, 163 bytes; local Ghidra 12.1.4 body FUN_000a6fcd covers the same exact range.
- Candidate dashboard entry: sub_000A6FCD, 163 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __startOneArgErrorHandling (0x000a6ea7) at 0x000a700b, FUN_000a6e90 (0x000a6e90) at 0x000a7012; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A6FCD.obj, SHA-256 85ecb8072dd505921f9a64e363aff5041700d01706e52acd97c23df9661a4399; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x96FCD.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9634D.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 8bb822e9581f41785139da466c3ffd2354091c6ad4c65ab8db506228715c9a75.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 163/163 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 5183d7bfa60ad704d2b0f3ad4d951eed359b267e7cf51c9ef20bf733bcf1585f; compiled .text$mn SHA-256: e83936324500102a40ecf5b2c13ce3bc39a4827f65ace2d5c8ed991aa83199ca.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
