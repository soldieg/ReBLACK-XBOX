# sub_000AA07B

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaa07b–0x000AA189 inclusive, contiguous, 271 bytes; local Ghidra 12.1.4 body FUN_000aa07b covers the same exact range.
- Candidate dashboard entry: sub_000AA07B, 271 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000aa050 (0x000aa050) at 0x000aa0aa; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AA07B.obj, SHA-256 dffe82f4d70f811b9356fb7962e5cae74dd68abd374c632dc16ee9482f4caec1; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9A07B.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x993FB.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2aae3b6feb9f20fb494de45de6a67da8a12ca4b3d7257c0ca1ab29f096c444d7.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 271/271 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 658f8d6905f487c6025ac085b7d3ff8d4c53672f9a9220bd2aa32e769e100816; compiled .text$mn SHA-256: 9d342bb9fe0443b708334c1f6bac8827401e27e4b3f69d99eb41f9fa8e6cf64b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
