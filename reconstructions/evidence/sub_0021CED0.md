# sub_0021CED0

- Function task: [#6283](https://github.com/soldieg/ReBLACK-XBOX/issues/6283).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0021CED0-0x0021CFA5 inclusive, contiguous, 214 bytes.
- Static Ghidra references: 1 incoming direct call references, 1 resolved direct callees, 0 unresolved direct calls, 2 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: independent-no-unowned-reference; members: SUB_0021CED0. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0021CED0`, 214 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (214/214 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 214 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `1d01a3da3fe5c2e288e97fb4e688619c5934f087f21bfc112518d5c60213e544`; candidate object SHA-256: `ea6b447f09e36ead8f56665e7f655a0df385f3cdcdbe58d20e5bc5954451664a`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
