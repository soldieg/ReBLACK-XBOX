# sub_001BC5D0

- Function task: [#1489](https://github.com/soldieg/ReBLACK-XBOX/issues/1489).
- Function range from REA/Ghidra dossier: 0x001BC5D0-0x001BC61D inclusive, contiguous, 78 bytes.
- Function dossier evidence: ev_47eddfac997ebafe66863f9c1d805555909519acb1dc19ba91a861898638647f.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BC5D0, 78 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BC5D0.obj from the identified progress snapshot; SHA-256 2bd3cc75a5f0608a8f06a198290e6589b0a6388e7c9996d308c1d7f178244ed3; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AC5D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AB950.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 10ad860dca5461cb3b52d72c78eb07973a634374094073cdce3b9bc38ace8cfc.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 78/78 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 3cb977b394287c0e887d891ad5c1e0505a78e9d889970b401e942371e7b9537c.
- Compiled .text$mn SHA-256: 38b01f1df8007a19e4d196dd1568c8db8169dccb9865ca59fd9e6c1da60bb9c7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
