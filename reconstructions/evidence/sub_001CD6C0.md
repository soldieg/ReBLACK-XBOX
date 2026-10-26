# sub_001CD6C0

- Function task: [#1543](https://github.com/soldieg/ReBLACK-XBOX/issues/1543).
- Function range from REA/Ghidra dossier: 0x001CD6C0-0x001CD736 inclusive, contiguous, 119 bytes.
- Function dossier evidence: ev_29601fa294217fc6fbbe2218fbdb367d75891f85aeb2da747a4654b2ce452fed.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001CD6C0, 119 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001CD6C0.obj from the identified progress snapshot; SHA-256 f7a1078b13fd52ad78188643bc52c7368283f73c1627dca3ad03bbc558602f93; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1BD6C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1BCA40.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 840bac007f0ee4de3d4141a163bf109cb6fed283ec4b4a2e65d0cc7077f5c1cb.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 119/119 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 5b29f3088fa67085ba0c925667c85219701eabdf837b04d87d522dd10cc5bf71.
- Compiled .text$mn SHA-256: 2ef56108f914ba910ed5e38a6bc27b0e55532ce7a408b29812f18280e307e88c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
