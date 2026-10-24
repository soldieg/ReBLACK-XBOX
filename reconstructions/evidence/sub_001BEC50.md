# sub_001BEC50

- Function task: [#1513](https://github.com/soldieg/ReBLACK-XBOX/issues/1513).
- Function range from REA/Ghidra dossier: 0x001BEC50-0x001BECFA inclusive, contiguous, 171 bytes.
- Function dossier evidence: ev_d7659a16c951958150582c62f484e4e15e57e0cb50f1a1e655e5c89fc0da0d33.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BEC50, 171 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BEC50.obj from the identified progress snapshot; SHA-256 5373a325973d80daa35997b4bcfae3906dea74ac2cbd68714e26465b98b8578d; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AEC50.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ADFD0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: e73729ff77d0cf58dabe7c6f573a0d1826dc81f49be3e6c26c47c1d5fe914ac5.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 171/171 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: b9876e0566f0849c99177f18a4471ce786b28cdaa001e938c31ce25e8965d931.
- Compiled .text$mn SHA-256: 685affd670787febb0050d51cb45ec31928b1ffbd56e6554c62c176874dc8f3e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
