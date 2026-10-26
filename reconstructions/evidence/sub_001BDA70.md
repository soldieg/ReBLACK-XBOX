# sub_001BDA70

- Function task: [#1497](https://github.com/soldieg/ReBLACK-XBOX/issues/1497).
- Function range from REA/Ghidra dossier: 0x001BDA70-0x001BDAF1 inclusive, contiguous, 130 bytes.
- Function dossier evidence: ev_b96cf6c72261e4472c8839c83bc65adc5d0a23e2d95e47d134eba185e55a71e1.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDA70, 130 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDA70.obj from the identified progress snapshot; SHA-256 70806558e8308cee97792027f773cdabb734eb914bf9b97e272b9cf44ce7179a; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADA70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ACDF0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: a79f823e6c5bb2a355170de19036219d5fd82056df6f4028f60f6cd6583fe772.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 130/130 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 546b58aef7caf75c54cf98b2d76e055f2dd25348aaaba63053e9e91a3e8bf0e2.
- Compiled .text$mn SHA-256: cdffe1e28ec7c24fae7d32c4b9c25246f9becdeecdb82aa659870a7908015c6d.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
