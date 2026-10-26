# sub_001B7EF0

- Function task: [#1452](https://github.com/soldieg/ReBLACK-XBOX/issues/1452).
- Function range from REA/Ghidra dossier: 0x001B7EF0-0x001B7F6A inclusive, contiguous, 123 bytes.
- Function dossier evidence: ev_35266b4e6ce17913265c4c42f692872cb8245416ae9af802ff140eee1732fc87.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001B7EF0, 123 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B7EF0.obj from the identified progress snapshot; SHA-256 0347529c5c63c0869cdcb39089492e6c5369374d88375e29f8faec177f4e9455; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1A7EF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A7270.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 09ec1847c03787cfbd3edd2c403ef45ab0d89b5272907a8d86e32e405a511f17.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 123/123 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 227aef880f14edaa79f08a4a38f171b0a66bf330cd6a663713a1911c0d5804f2.
- Compiled .text$mn SHA-256: d980d7844d5bd6dc240924f2a5a3352087738891e7062958931bc5ddc5b4362a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
