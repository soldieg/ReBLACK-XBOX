# sub_001BEE60

- Function task: [#1547](https://github.com/soldieg/ReBLACK-XBOX/issues/1547).
- Function range from REA/Ghidra dossier: 0x001BEE60-0x001BEF06 inclusive, contiguous, 167 bytes.
- Function dossier evidence: ev_28999620eddced4c84e98ac33b64e905667fa557cb3c297976420c03297a1412.
- Call analysis: Local Ghidra 12.1.4 direct-call inspection: FUN_00012600 (0x00012600), at 0x001BEE8F. Callee sources exist in the base checkout.
- Dashboard candidate: sub_001BEE60, 167 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BEE60.obj from the identified progress snapshot; SHA-256 e6e8f7f6b89c0bda94804b6fa40047d659eca9dcf49c214500e7f065bb80392e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AEE60.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AE1E0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 186e9cd7f076e17538b9baef3dd828b4ea3ac00e45eb8ea8f57eae0c2626b8dc.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 167/167 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: a811bd08359b98aa5bc2e9cae8c73fc2eefb595456031713a7d533ad2bcacb50.
- Compiled .text$mn SHA-256: 8f9e56b872b5204bfdf497107e985c63dbd6dcaab409c2b7a5f341cd6e2693e5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
