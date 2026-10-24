# sub_001BDFA0

- Function task: [#1500](https://github.com/soldieg/ReBLACK-XBOX/issues/1500).
- Function range from REA/Ghidra dossier: 0x001BDFA0-0x001BDFC2 inclusive, contiguous, 35 bytes.
- Function dossier evidence: ev_35b5cd2bd91eeb9b0df2bf658f2c722165a6f5adf981aeefabc2ebb4b17b79ea.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDFA0, 35 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDFA0.obj from the identified progress snapshot; SHA-256 c5593f3eb6ee2c660183332d22713b99ad987a5cf7be3820c135af8df2093fb9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADFA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AD320.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 6c7da7817cdfb21871e7d9fd59209fed13063bd444fb7c1432c213ef4fd2e56d.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 35/35 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 96482523db3694993a027724d0b69608aa24192f00e2a9ab986bb59da2e49710.
- Compiled .text$mn SHA-256: e520364d3c11883c6ac9f797955d1560ef1635e07e923e0e7691eb1eb22546d9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
