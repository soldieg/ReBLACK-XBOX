# sub_000A5AC9

- Function task: [#4104](https://github.com/soldieg/ReBLACK-XBOX/issues/4104).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A5AC9-0x000A5AED inclusive, contiguous, 37 bytes; evidence `ev_19a17d37d5d890361a749b5036c7736337b6abe6193d9877b6c271e433805a78`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A5AC9`, 37 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d72343a34a318789b3ec558633b8d05f96acb96aad93bdc78f2a63b2766052fc`; candidate object SHA-256: `30dcd437dff8bd889a1df2514f4c1233648f8648378739b024a3c4ea4c1a57fd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
