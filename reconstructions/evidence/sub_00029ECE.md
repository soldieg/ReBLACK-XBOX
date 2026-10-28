# `sub_00029ECE`

- Function task: [#365](https://github.com/soldieg/ReBLACK-XBOX/issues/365).
- Confirmed REA/Ghidra 12.1.3 body: `0x00029ECE–0x00029ED3` inclusive, contiguous, 6 bytes.
- Call graph: 4 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: `sub_00029ECE`, 6 bytes, category `unmatched` in live progress snapshot SHA-256 `79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c` (retrieved 2026-10-23).
- Candidate object: `candidate/sub_00029ECE.obj` from the 2026-10-15 snapshot (`complete=false`), SHA-256 `4773415b40011ccfcbf84a78cd7c3f5be3f5e97179cde21b14df3fc8077731e3`.
- Target Xbox XBE SHA-256: `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; compared raw file span at `0x19ECE`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- REA/Ghidra dossier evidence: `ev_a9449c768046fcddd708a7dab4f6adfab35bbca1f2772aecfbe060423091973c`.
- REA byte-read evidence: `ev_a9825fea25aeb7baa01e49ca6795f70dbc3b064663914b56e2025649c2ca50da`; complete read `6/6` bytes.
- Source SHA-256: `2e6848b816c948e1d237f0c33570a31c3299c24becabb4f1dd13da11f9b6ff96`.
- Compiler: MSVC 19.51.36260.0 x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate `.text$mn` = compiled `.text$mn`, 6/6 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: `4773415b40011ccfcbf84a78cd7c3f5be3f5e97179cde21b14df3fc8077731e3`.
- Compiled object SHA-256: `389a6abbc375df77fefe390513dacac6bcd272e017d4aa1b7443b19cae61dab9`.
- Compiled `.text$mn` SHA-256: `9b4af572db620400fb652b88f9809bb7fa64faea6c385260e381bc619e2c4dc1`.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#365](https://github.com/soldieg/ReBLACK-XBOX/issues/365).
- Fresh Ghidra boundary and relationship evidence: `ev_a9449c768046fcddd708a7dab4f6adfab35bbca1f2772aecfbe060423091973c`; REA complete-byte read: `ev_e45a2c17d584423bead7de51e7d77322d5bb571bf0369c755d408b586752d586`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 6 bytes; SHA-256: `9b4af572db620400fb652b88f9809bb7fa64faea6c385260e381bc619e2c4dc1`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
