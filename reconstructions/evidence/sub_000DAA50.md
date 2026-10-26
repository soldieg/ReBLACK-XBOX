# sub_000DAA50

- Function task: [#955](https://github.com/soldieg/ReBLACK-XBOX/issues/955).
- Function range: 0xdaa50–0x000DAB11 inclusive, contiguous, 194 bytes; local Ghidra 12.1.4 body FUN_000daa50 covers the same exact range.
- Candidate dashboard entry: sub_000DAA50, 194 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DAA50.obj, SHA-256 c0fe94d532497649467cbd566a55622d9a9088eca4b1fb015e41a89ce3f3b440; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCAA50.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xC9DD0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2a258cbee4ce652b86f8b268aac71d46680b2cc4c9704852aafcce3292a93149.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 194/194 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: cd112bdfd9cfa8135525f399049acfa11db2b88bc8a4b88c1a9ea758047c14f6; compiled .text$mn SHA-256: 75df91243216d3253968e12823bd4e77e61ccb772ffa933d22041e55c086b5ca.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
