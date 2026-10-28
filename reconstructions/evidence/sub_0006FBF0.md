# sub_0006FBF0

- Function task: [#3857](https://github.com/soldieg/ReBLACK-XBOX/issues/3857).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0006FBF0-0x0006FC5A inclusive, contiguous, 107 bytes; evidence `ev_5c6a0d936fb0ff6ee0f7f187646f70035a2c692cfb79c0cc7e78637c415c1751`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0006FBF0`, 107 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (107/107 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 107 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `10976abba150372ceadd9d5e6345a830000fed89321b5debd40875be7f359ff0`; candidate object SHA-256: `c29209cdbcbb2fed942846d4051cd6108bb5dfe40c8d69aae8f3e93f381b4f73`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 97 revalidation — 2026-10-28

- Task: [#3857](https://github.com/soldieg/ReBLACK-XBOX/issues/3857).
- Fresh REA/Ghidra 12.1.3 body: 0x6fbf0–0x6fc5a inclusive, contiguous, 107 bytes; analysis evidence `ev_5c6a0d936fb0ff6ee0f7f187646f70035a2c692cfb79c0cc7e78637c415c1751`.
- Fresh REA byte read: complete 107/107 bytes; SHA-256 matches the named candidate; evidence `ev_3378ff3a829c6879a3de70c23695005abe81ab3edcc0b58e1b63dafe59034dec`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
