# sub_000A1E2F

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa1e2f–0x000A1E40 inclusive, contiguous, 18 bytes; local Ghidra 12.1.4 body _malloc covers the same exact range.
- Candidate dashboard entry: sub_000A1E2F, 18 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __nh_malloc (0x000a1e03) at 0x000a1e39; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A1E2F.obj, SHA-256 c701d92be5fd4ed8c6a1cf17a72ae6dd368fe06ce47fefc927fa708187c615be; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x91E2F.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x911AF.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: ce01efa8c21f5082fec92402caf9fcc094f7fa69cb869e850d1319170a11db9b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 18/18 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 909fea3d22ab6db8d6e77c97d2a2c411b9658dc0e9615ff02250f221976b3d1d; compiled .text$mn SHA-256: f03d08a6406e409a2a5a5e95e8fd93b6e4e3ba21062510eb4212f4ce3acb2fd3.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
