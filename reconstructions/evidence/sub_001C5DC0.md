# sub_001C5DC0

- Function task: [#1535](https://github.com/soldieg/ReBLACK-XBOX/issues/1535).
- Function range from REA/Ghidra dossier: 0x001C5DC0-0x001C5ED4 inclusive, contiguous, 277 bytes.
- Function dossier evidence: ev_c9fbf249f44322693b673cc89321b1bc87ab3c364e8e9ee61223e50370e3f5dc.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001C5DC0, 277 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001C5DC0.obj from the identified progress snapshot; SHA-256 2f74133c9d8c5d18c568580ddb8364639caf4806300fc29bf0e5c5d85e9ae3ba; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1B5DC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1B5140.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 01bda2e074ff7576ce2fca2f8532e3c9ff473296c45489efc449cefb1acc82a3.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 277/277 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 3b3471b2c27380a36b7dfd68f01beeda396b9e17fbafa59a2a69afa080a6987d.
- Compiled .text$mn SHA-256: ccd4048245c8d3066764d89f92a7fbe98d9483682883f596fff52e5c4e20cad6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
