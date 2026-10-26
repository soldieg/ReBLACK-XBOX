# sub_001CCCA0

- Function task: [#6170](https://github.com/soldieg/ReBLACK-XBOX/issues/6170).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001CCCA0-0x001CCDC1 inclusive, contiguous, 290 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001AE300`, `sub_001B3130`, `sub_001DA4F0`; callees: `sub_000126E0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001CCCA0`, 290 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (290/290 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 290 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `f0fe66dea2487fb5efec338c4ebbb5a0c98df39d5901c14d29539d0cfd71c7f1`; candidate object SHA-256: `bf1298b0f87f9961bde3b65ce3126f973971c0b82a37b12b9f129a3a672a2e6a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
