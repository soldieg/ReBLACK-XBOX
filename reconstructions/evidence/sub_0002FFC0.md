# sub_0002FFC0

- Function task: [#1641](https://github.com/soldieg/ReBLACK-XBOX/issues/1641).
- Function range: 0x2ffc0–0x000300B9 inclusive, contiguous, 250 bytes; local Ghidra 12.1.4 body FUN_0002ffc0 covers the same exact range.
- Candidate dashboard entry: sub_0002FFC0, 250 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0002FFC0.obj, SHA-256 a4e868dc2976f10b7094af1b18e06b22296aeee95ff389d4dc8fde49a05b678a; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x1FFC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x1F340.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 5d73116d7f719314c1dfd81eb48929aec336c9610c11920a87c2cb245edf0993.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 250/250 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 5ac84484a6b881f0d073c9396c6c9ec7b15b11ea766c2dbdc0316ecd9db423d7; compiled .text$mn SHA-256: f6ff4d0e696e1e48b43c40efc4660e407f0fb3e2999296f290010ea289ad45a6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

### Lot 94 static revalidation (2026-10-28)

Issue: [#1641](https://github.com/soldieg/ReBLACK-XBOX/issues/1641). Fresh Ghidra 12.1.3 confirms one contiguous 250-byte body at 0x0002FFC0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_fd4e6443b733cc61a8d5b2cdfe1204a5f049326d7db0c398fd804e9b45b220af`, REA bytes `ev_5f5b7367699dd4568382849ded9c66722622f75451e8a1adabc38b08c26fd852`. Relationship coverage: partial; 1 resolved callers, 0 resolved callees, 3 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
