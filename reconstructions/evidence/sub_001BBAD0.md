# sub_001BBAD0

- Function task: [#1482](https://github.com/soldieg/ReBLACK-XBOX/issues/1482).
- Function range from REA/Ghidra dossier: 0x001BBAD0-0x001BBBC5 inclusive, contiguous, 246 bytes.
- Function dossier evidence: ev_812d8a02072ce231ba6ab584873108ca0bc86581ad3b5d8cf8e87a31c37f4d43.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BBAD0, 246 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BBAD0.obj from the identified progress snapshot; SHA-256 bf3dde703926ff4a7ff5ce28bde3595e1ca97c5358881b16b103d9df28ddced4; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ABAD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AAE50.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: b5c0bf5badca1ac80219c0ba6563ddbe6663bf86ea2bea2c0911e3013aa136f5.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 246/246 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: b0972c08fe30ce5e6ead11fc099723195f93684fcb4e0a76ba44d67b01e74154.
- Compiled .text$mn SHA-256: aaecb07203df9a58414a9614839ffee75765ca84ecaefd002100823dc33e2f2b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
