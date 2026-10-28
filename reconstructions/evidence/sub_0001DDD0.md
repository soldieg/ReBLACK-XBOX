# `sub_0001DDD0`

- Function task: [#342](https://github.com/soldieg/ReBLACK-XBOX/issues/342).
- Confirmed REA/Ghidra 12.1.3 body: `0x0001DDD0–0x0001E39C` inclusive, contiguous, 1485 bytes.
- Call graph: 1 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: `sub_0001DDD0`, 1485 bytes, category `unmatched` in live progress snapshot SHA-256 `79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c` (retrieved 2026-10-23).
- Candidate object: `candidate/sub_0001DDD0.obj` from the 2026-10-15 snapshot (`complete=false`), SHA-256 `485c4e7c69f33e7472bbe4f6d61af0d7034d4b48b884b72d94126b2fc2bd12ce`.
- Target Xbox XBE SHA-256: `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; compared raw file span at `0xDDD0`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- REA/Ghidra dossier evidence: `ev_9420c4b34eb50420ed36f5f783554885af5ab896fd7df4edc53f591b54e746d6`.
- REA byte-read evidence: `ev_faf5dbe71d8bf9e7b9075c3be24b7e8e8812cd88f74dc2c977e79c4fbe76e019`; complete read `1485/1485` bytes.
- Source SHA-256: `25618bff2aa545c1611a782c187dbed76510bc900c949a9a833300801d9364a4`.
- Compiler: MSVC 19.51.36260.0 x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate `.text$mn` = compiled `.text$mn`, 1485/1485 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: `485c4e7c69f33e7472bbe4f6d61af0d7034d4b48b884b72d94126b2fc2bd12ce`.
- Compiled object SHA-256: `7484e82455a0530b6001a56d5b6f0dd3d66f360185f495eefd4b706cda5c3ba0`.
- Compiled `.text$mn` SHA-256: `e30f41f44f8f8fd24d445b48f02543d87db7c6e8dae5e7539f42794ff298f599`.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#342](https://github.com/soldieg/ReBLACK-XBOX/issues/342).
- Fresh Ghidra boundary and relationship evidence: `ev_51122929dbd8246b7c22b8a6775a898824936a892a485c71f68877bad2626c39`; REA complete-byte read: `ev_2fd0728bd3767e18bd7203698a1e9fb4ced00e56d0de834cc8ce733f5831587b`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 1485 bytes; SHA-256: `e30f41f44f8f8fd24d445b48f02543d87db7c6e8dae5e7539f42794ff298f599`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
