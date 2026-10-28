# `sub_0002ECA0`

- Issue: [#297](https://github.com/soldieg/ReBLACK-XBOX/issues/297).
- Range: `0x2eca0?0x2ece8` inclusive, 73 bytes.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Candidate object: `candidate/sub_0002ECA0.obj`, from the 2026-10-15 candidate snapshot (`complete=false`), SHA-256 `f91c6e26d3db07b1e9049e9e9175eaf3d284fecd098a96548fc228e8d0c645b1`.
- REA/Ghidra 12.1.3 function dossier: `ev_4d5223a7c5252319c3b3b3fe6bc7a33cd7017f73b888ec2f7652c95eead4d68d`.
- REA byte read: `ev_f8ec387bf1218378066bb109419a0ae76e81f92a5e85b0b1d010170ad90d04da`.
- Observed machine behavior: Uses the observed ECX value and shared command array to update the selector and cached table value; may append command 0x3f.
- Calls/references: One resolved caller FUN_0002EFC0; no direct callees. Part of the shared-state group.
- Reconstruction source uses a naked MSVC x86 inline-assembly carrier; this does not assert the original source prototype or object type.
- Compiler: MSVC 19.51.36260.0, x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`. Compile passed.
- ObjDiff 3.8.2: 100.00% against the named candidate object and 100.00% for the compiled symbol.
- Direct byte comparison: 73/73 compiled bytes equal REA loaded-PE bytes, XBE raw bytes at the mapped `.text` file offset, and candidate `.text$mn`; candidate and compiled COFF relocations: 0 and 0.
- Candidate object SHA-256: `f91c6e26d3db07b1e9049e9e9175eaf3d284fecd098a96548fc228e8d0c645b1`.
- Compiled object SHA-256: `711511e3fa348a4f610833a6ae2665b19cd927900f89e4d52d4a95f2479f32d1`.
- Compiled `.text$mn` SHA-256: `5ef665c6e3515b88b8b7928645cd5c52a8d21eb2bfd43817a10758bed17f793e`.
- Xbox full link, post-link XBE diff, and runtime: not run.

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#297](https://github.com/soldieg/ReBLACK-XBOX/issues/297).
- Fresh Ghidra boundary and relationship evidence: `ev_561b4479eeaf337989fe31b1085c70d2f23f4b695293159345ba54b89dd1f942`; REA complete-byte read: `ev_5c8dda9760f7fd22f10a23d801d6a3aad06005fe156959970d823580fff3b91c`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 73 bytes; SHA-256: `5ef665c6e3515b88b8b7928645cd5c52a8d21eb2bfd43817a10758bed17f793e`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
