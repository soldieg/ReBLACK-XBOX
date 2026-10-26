# sub_0002DCE0

- Function task: [#1639](https://github.com/soldieg/ReBLACK-XBOX/issues/1639).
- Function range: 0x2dce0–0x0002DD01 inclusive, contiguous, 34 bytes; local Ghidra 12.1.4 body FUN_0002dce0 covers the same exact range.
- Candidate dashboard entry: sub_0002DCE0, 34 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0002DCE0.obj, SHA-256 67c63ced7a5d5fffc96c49931ef3bc96d7a67e20813cead4d72d1564e5068c7c; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x1DCE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x1D060.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 5a95e5a19181922b25512f2d1476aceb1fd99b06ba50c5bf6f8d567de1eb4ab1.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 34/34 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 2ceb46f700dd545b7675f116ffcc0e39067c9f002ded1993481e14d5a859dff7; compiled .text$mn SHA-256: 775dbed5b778d6813e50a51f36523073e80ec40d6ae8cba41bcf76f01092158b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
