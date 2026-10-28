# `sub_0001ACE0`

- Function task: [#335](https://github.com/soldieg/ReBLACK-XBOX/issues/335).
- Confirmed REA/Ghidra 12.1.3 body: `0x0001ACE0–0x0001B2B0` inclusive, contiguous, 1489 bytes.
- Call graph: 1 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: `sub_0001ACE0`, 1489 bytes, category `unmatched` in live progress snapshot SHA-256 `79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c` (retrieved 2026-10-23).
- Candidate object: `candidate/sub_0001ACE0.obj` from the 2026-10-15 snapshot (`complete=false`), SHA-256 `4570ce95262591fe6ea9fcbf309f7e1ca3f8c1c665eaf21e1b0a3b2d85a939e5`.
- Target Xbox XBE SHA-256: `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; compared raw file span at `0xACE0`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- REA/Ghidra dossier evidence: `ev_325da23d3cdaa8f0ed5d032ed60e04506498c6d5c016b89238086d3b81ff4977`.
- REA byte-read evidence: `ev_a0b41d719a6606af107c78403405695be3e394391dfaaf8b96ab34118e200854`; complete read `1489/1489` bytes.
- Source SHA-256: `4ace7e1e60278f5ae471a8d0726deb896f9839bee41d490a2de6289e02d07ef4`.
- Compiler: MSVC 19.51.36260.0 x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate `.text$mn` = compiled `.text$mn`, 1489/1489 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: `4570ce95262591fe6ea9fcbf309f7e1ca3f8c1c665eaf21e1b0a3b2d85a939e5`.
- Compiled object SHA-256: `0d0969da9314bb3de022014b4b499b58a710011d4d2f50cd64dc4480bcc98ff9`.
- Compiled `.text$mn` SHA-256: `ee2a82fc1a6d810671d3053d7ba755c01b5d6f03d41dd43979badbe1a05da7c9`.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#335](https://github.com/soldieg/ReBLACK-XBOX/issues/335).
- Fresh Ghidra boundary and relationship evidence: `ev_f9c3e0e53d53c5544c0cbd8aafce28af7d892a2ec408a544e3435b0ef2e85006`; REA complete-byte read: `ev_625611d65662d05a7f41a6b09c0b874ada5806718b199fbb84d2b8fc90991dff`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 1489 bytes; SHA-256: `ee2a82fc1a6d810671d3053d7ba755c01b5d6f03d41dd43979badbe1a05da7c9`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
