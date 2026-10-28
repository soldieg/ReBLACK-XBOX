# sub_000E3FB0

- Function task: [#245](https://github.com/soldieg/ReBLACK-XBOX/issues/245).
- Function range: 0xe3fb0â€“0x000E402C inclusive, contiguous, 125 bytes; local Ghidra 12.1.4 body FUN_000e3fb0 covers the same exact range.
- Candidate dashboard entry: sub_000E3FB0, 125 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0001c040 (0x0001c040) at 0x000e3fbe; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E3FB0.obj, SHA-256 93c8eebc2a781ec45db442da59720004daf92fab158e02c53a28a6ca44ffbb6e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD3FB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD3330.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 636ec7099b287f0b064f0b7ef5f785d603eab25e218427baab84c79a2c313c03.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 125/125 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: af1522a9f7fd5e501173e9e09e81f2d9e2dd80468dcaf6323f39a687a4eb52b2; compiled .text$mn SHA-256: 5f68ed9ff61a703c3f16857987336342dd2e769f22bc1ed392d47eec59d3c192.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 92 static revalidation

- Function task: [#245](https://github.com/soldieg/ReBLACK-XBOX/issues/245).
- Function range: 0x000E3FB0–0x000E402C inclusive, contiguous, 125 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 125 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_2499a2d0fd5b330cdba621c0a438d710706752e0606878a0d2318073005d2229`; REA `ev_af8a7e95c180de6d4cd966d50e4e3ada5bf19ac508fd7b7793e88c71327e9f38`.
- Relationship coverage: partial for callers. Ghidra diagnostic: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body. No unresolved direct calls were reported. Caller inventory is not complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 125/125 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `45e1e97b0e83827707885f197ae97a71e7409d3544d063a981ee2ac59192415f`; candidate COFF SHA-256: `93c8eebc2a781ec45db442da59720004daf92fab158e02c53a28a6ca44ffbb6e`; compiled COFF SHA-256: `ab905a5dc758ead53a6a834c452f64ce42bc044c3f2bbc85275be11d2fe3504a`; ObjDiff report SHA-256: `7fb64477f2be7eb9f225f198e1d82dae4fefb1e5a26ac76a1e10cdcf84600a7b`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
