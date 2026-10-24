# sub_000AA9BB

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaa9bb–0x000AAAE2 inclusive, contiguous, 296 bytes; local Ghidra 12.1.4 body __flswbuf covers the same exact range.
- Candidate dashboard entry: sub_000AA9BB, 296 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __isatty (0x000a9083) at 0x000aaa22, __getbuf (0x000a903f) at 0x000aaa2d, __write (0x000a8f94) at 0x000aaa5a, __lseek (0x000a8d5e) at 0x000aaa91, __write (0x000a8f94) at 0x000aaab4; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AA9BB.obj, SHA-256 90af5982f55914eb7aafb35d7d56300965f409972e8f491760e7dbb6e34605e0; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9A9BB.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x99D3B.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 6b250164711c95be9b81e9bde6e6655f5f95ed492d9f418059f3e8daaa359f98.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 296/296 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: d2e45e0fec6eefcd713b551aae86ad6c776aacfec09b5a47ebc95ca1098efbcd; compiled .text$mn SHA-256: c85f27365065ef37f86e9fb0b54e87af8915ff50a8d01bb4e78fe6794ada5e6c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
