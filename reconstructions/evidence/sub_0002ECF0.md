# `sub_0002ECF0`

- Issue: [#298](https://github.com/soldieg/ReBLACK-XBOX/issues/298).
- Range: `0x2ecf0?0x2ed38` inclusive, 73 bytes.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Candidate object: `candidate/sub_0002ECF0.obj`, from the 2026-10-15 candidate snapshot (`complete=false`), SHA-256 `ed6c2f5ce3eea8f486aa5795b680c82b0c7a0be1e4af313295dbee43c935088e`.
- REA/Ghidra 12.1.3 function dossier: `ev_538e9a57f1d0d6221b769166f4f163b5e379a225df6f69f3e4b67edbd10e330f`.
- REA byte read: `ev_0c63c23726a8088457ffcf8bf404995ac99b9c22ed98c43854eec6941c31423b`.
- Observed machine behavior: Uses the observed ECX value and shared command array to update the selector and cached table value; may append command 0x42.
- Calls/references: One resolved caller FUN_0002EFC0; no direct callees. Part of the shared-state group.
- Reconstruction source uses a naked MSVC x86 inline-assembly carrier; this does not assert the original source prototype or object type.
- Compiler: MSVC 19.51.36260.0, x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`. Compile passed.
- ObjDiff 3.8.2: 100.00% against the named candidate object and 100.00% for the compiled symbol.
- Direct byte comparison: 73/73 compiled bytes equal REA loaded-PE bytes, XBE raw bytes at the mapped `.text` file offset, and candidate `.text$mn`; candidate and compiled COFF relocations: 0 and 0.
- Candidate object SHA-256: `ed6c2f5ce3eea8f486aa5795b680c82b0c7a0be1e4af313295dbee43c935088e`.
- Compiled object SHA-256: `16b44805f45b3236cb48b38a173696f75895788c0213b7a549e8b8964f7411e7`.
- Compiled `.text$mn` SHA-256: `83857ed316d772c50c8f4244b62c44f9864de30185d50e85cc198755549018d1`.
- Xbox full link, post-link XBE diff, and runtime: not run.
