# sub_0021CD1B

- Function task: [#6280](https://github.com/soldieg/ReBLACK-XBOX/issues/6280).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0021CD1B-0x0021CDC5 inclusive, contiguous, 171 bytes.
- Static Ghidra references: 1 incoming direct call references, 3 resolved direct callees, 0 unresolved direct calls, 5 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: closed-call-component; members: SUB_0021B642, SUB_0021CD1B, SUB_00222113. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0021CD1B`, 171 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (171/171 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 171 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `f2c6495dc7634a6737e304adbcbc42bd4a71f948718bb25d90ed26aff1a8f5e2`; candidate object SHA-256: `5ef9f21293edff685960863394b9cb3aba21c78aee5dd65a8cf94cd3e9b56278`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
