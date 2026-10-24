# sub_000BB1A0

- Function task: [#879](https://github.com/soldieg/ReBLACK-XBOX/issues/879).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BB1A0-0x000BB2CC inclusive, contiguous, 301 bytes.
- Call graph dossier: ev_8bb7b2086943442b4a6eb54b958009489bed872655d3ff4fc02ea054607e4a32; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BB1A0, 301 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BB1A0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAB1A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_b13cc3a23b2259ab37fbf16c98eeb06da8528f641e77dda54e93b1c92b5a59d0; complete read 301/301 bytes.
- Source SHA-256: d10d8bff7ee6a1afac8ffacb8a44a87ebb2cf478163838546bc0428ba9d8bd41.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 301/301 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: e3be742ded04aebdc085739254dad939197f183ddbfeb3ee8bb9cde8c64189aa.
- Compiled object SHA-256: 0347ada5622602baf0fe18873f6acefb01d8da58e4a71c67e6f4ba79ff6f0f4f.
- Compiled .text$mn SHA-256: b97573c7383ac86651b0c3a272ee86cf63b05aec8553e64394daf29b09298b8a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
