# sub_0016EDD0

- Function task: [#6251](https://github.com/soldieg/ReBLACK-XBOX/issues/6251).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x0016EDD0-0x0016EF17 inclusive, contiguous, 328 bytes.
- Static call review: 0 unresolved direct-call site(s), 0 unresolved computed-call site(s); callers: none observed; callees: `sub_00164250`, `sub_00269880`. Ghidra reports 0 ownerless inbound call reference(s) and 1 ownerless inbound data reference(s).
- Connected table group: `sub_0016EDD0`, `sub_0016EF20`, `sub_0016F070`, `sub_0016F2D0`. One incoming `.rdata` function-pointer reference at `0x0028D03C` has no procedure owner; callback contract/formal ABI remain pending.
- Target candidate: `sub_0016EDD0`, 328 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (328/328 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 328 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `f0a8bdbc256a39a109a8f417aaa301fe249c248155f42742e4faaa59c090099f`; candidate object SHA-256: `ef651c552a1dd48d5eafc81fc18ab882d0723666b3df7dfb6e53210974f75f78`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
