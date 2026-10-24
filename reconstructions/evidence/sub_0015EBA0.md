# sub_0015EBA0

- Function task: [#1126](https://github.com/soldieg/ReBLACK-XBOX/issues/1126).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0015EBA0-0x0015EDFA inclusive, contiguous, 603 bytes.
- Call graph dossier: ev_aba5110ffbbd038214477020904bfe0627b4bac11e351e741d46dfa114d49955; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0015EBA0, 603 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0015EBA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x14EBA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_4a707471195a9544a786b78393bba0f2d007c41ed36afccdd95f921f3aaf5b08; complete read 603/603 bytes.
- Source SHA-256: a3dab4e122a9782d3ae4f850e2cad165c503153f8ad9eea84fd84c9d659b8247.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 603/603 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 47337317a91bb93d6728d1e1c5951406ee2ed8360a1b47f9f69950079107a305.
- Compiled object SHA-256: c53e3ebe9def1f8f3dfa381b142d8d89901650c22b82c431d2415a8962a21b46.
- Compiled .text$mn SHA-256: 262c79f85bda79e3e87ce5a157895668dad99dfefd95a694576ea90c12af5520.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
