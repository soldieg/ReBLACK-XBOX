# sub_000CAFD0

- Function task: [#4246](https://github.com/soldieg/ReBLACK-XBOX/issues/4246).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CAFD0-0x000CAFFF inclusive, contiguous, 48 bytes; evidence `ev_16cab50aa94d0ce3142b114ff962ad6c9bb6d2fc3c40ed44f1797965e31da050`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CAFD0`, 48 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (48/48 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 48 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b31a485d013a443c23fdfd6d487774332dfee091f43ed15aab85243352dd2bed`; candidate object SHA-256: `fcb9a1acb34b371b03bb67b5fe5b9d5a994ebf920a9b34016d346daa3588b3ba`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4246](https://github.com/soldieg/ReBLACK-XBOX/issues/4246).
- Fresh Ghidra boundary/relationship evidence: `ev_66ce1149d76c9794a70458881f6cce54fe051be5d9d486e9d584b85ab899c23b`; REA complete-byte evidence: `ev_e7024e71894c20fd4f81497f3c0ea646f6f7859dec1abee2bd9948deabaa843d`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 48 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
