# sub_000C8BB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xc8bb0–0x000C8C44 inclusive, contiguous, 149 bytes; local Ghidra 12.1.4 body FUN_000c8bb0 covers the same exact range.
- Candidate dashboard entry: sub_000C8BB0, 149 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00011b90 (0x00011b90) at 0x000c8bd0; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000C8BB0.obj, SHA-256 bc6994e65f734ced6d68e03222fc64621a2275a4ca929a53196bc1f3a917c5e9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xB8BB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB7F30.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: ffd73d4eef24bd06419c062f705b55060cc22e50eb70b290920c8e0eac055a00.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 149/149 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f545c521e7a06c1a0151b3e7cdb60f434e32e61f725cb29dd6c33c28513f81a0; compiled .text$mn SHA-256: 8e85bbdd1b97b31ed0fa81d5c1a053499b260cadd97088600b6de42912b21732.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
