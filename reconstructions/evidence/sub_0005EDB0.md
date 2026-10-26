# sub_0005EDB0

- Function task: [#5740](https://github.com/soldieg/ReBLACK-XBOX/issues/5740).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0x5eeeb, 0x5ef7d, 0x5ef92, 0x5f03c, 0x5f0e1, 0x5f186, 0x5f24b, 0x5f260, 0x5f2d5, 0x5f337, 0x5f396; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x0005EDB0-0x0005F4DC inclusive, contiguous, 1837 bytes; evidence `ev_10397b4a1efceff507e6d12828ee2f33822e04d5c4ea06d00ee989892698284e`.
- Static Ghidra references: 0 caller sites, 8 resolved direct callees; call instructions without a resolved target: 11. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 11 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_0005EDB0`, 1837 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1837/1837 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1837 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b1921cea761e4eaff52ea7c894db6f6e1331543d6e08d0834049e76cec4334c7`; candidate object SHA-256: `8e9203ffe83288e83ae0529200bf479471c5abbc96abb7b00ef90c5f8e828024`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
