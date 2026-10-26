# sub_000A41DF

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa41df–0x000A4214 inclusive, contiguous, 54 bytes; local Ghidra 12.1.4 body ___CxxFrameHandler covers the same exact range.
- Candidate dashboard entry: sub_000A41DF, 54 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: ___InternalCxxFrameHandler (0x000a8b89) at 0x000a4200; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A41DF.obj, SHA-256 8461963a56840782f5a4c191bef29ec38beccc1ee29ab37f00964dd759c556ad; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x941DF.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9355F.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 8ac27873f3f791c0ae6f8dd1d1b5284639694679654e012f4bb889e87872db12.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 54/54 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 6bd717a37fc2a76dcc2c5a145775c9a49555bc07ed83f061fef307bc8d0399df; compiled .text$mn SHA-256: 6d1d22600ac7c6bdbcdda67fdc76e6e0c066998dd95dc483c7c5481db44c7390.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
