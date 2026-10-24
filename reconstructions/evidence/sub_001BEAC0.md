# sub_001BEAC0

- Function task: [#1510](https://github.com/soldieg/ReBLACK-XBOX/issues/1510).
- Function range from REA/Ghidra dossier: 0x001BEAC0-0x001BEB1A inclusive, contiguous, 91 bytes.
- Function dossier evidence: ev_9a8004e42f2f59d975f565b7d25bbb0d48760791e48438b5ab82920615d08d57.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BEAC0, 91 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BEAC0.obj from the identified progress snapshot; SHA-256 d304c834d508c1a584a16dc79cc64c79436f7268779bc06e650f0b2302b4ccce; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AEAC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ADE40.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: ea222cfacc8b1090affc7aab4a474314744c89c9253dbc9aba058286bb3b720d.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 91/91 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 3295b85bfbd6e9df2746477bbc57298eb2cbdf80bf189f887940820138b07534.
- Compiled .text$mn SHA-256: 008a40242948ec1ee81d59f35ff847eeec0c731d9bb12f8bd8a3c74f68b8507c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
