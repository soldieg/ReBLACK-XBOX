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

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1547](https://github.com/soldieg/ReBLACK-XBOX/issues/1547); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_dda46222e1839276179f14214f4d8c317b34eeca5772779a78edf2b13b03804a`; complete REA byte-read Evidence: `ev_c5da0507593a9de1bef3ae52d7f33f916cc6afa279642dc74bcf647fe6a65c54`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 167 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `4b1417c223f0f7356a6729769c362adadcb2976c7cec85737b53697bf5688d5f`; candidate COFF SHA-256: `e6e8f7f6b89c0bda94804b6fa40047d659eca9dcf49c214500e7f065bb80392e`; compiled COFF SHA-256: `847b739efa8371b9372179d7dcd2747b751e7adc9b4d8c2ebf20aae6d7a2d23c`; ObjDiff report SHA-256: `84b4cf76707ea4d845b33ed5f3a20d2b0fdc2884d725666e987f79ba1fc4144e`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
