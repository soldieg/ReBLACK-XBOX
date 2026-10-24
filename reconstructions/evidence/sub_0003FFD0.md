# sub_0003FFD0

- Function task: [#1687](https://github.com/soldieg/ReBLACK-XBOX/issues/1687).
- Function range: 0x3ffd0–0x0004000E inclusive, contiguous, 63 bytes; local Ghidra 12.1.4 body FUN_0003ffd0 covers the same exact range.
- Candidate dashboard entry: sub_0003FFD0, 63 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0003FFD0.obj, SHA-256 77664f82ca233d6b5606748156f327149c2f19ed7a2d9d2b4267406b620e1178; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x2FFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x2F350.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f92cf4391340d4d0602e4a85a41bb5fb9995388210f39241ef06964a8fa28e95.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 63/63 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: e90763656a19e3a48ca57fb66f35bbf70adbb6a6e61f3d89ffd7617c6338af3d; compiled .text$mn SHA-256: 50d33f05e1fec54c0683244ec0712b8c508a329dc6e0b579dbebd5770004f93a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
