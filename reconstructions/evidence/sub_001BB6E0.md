# sub_001BB6E0

- Function task: [#1478](https://github.com/soldieg/ReBLACK-XBOX/issues/1478).
- Function range from REA/Ghidra dossier: 0x001BB6E0-0x001BB71C inclusive, contiguous, 61 bytes.
- Function dossier evidence: ev_032f571c90b0ee450d3100c4cb9356a8adb0316ae94792513728f39cee243807.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BB6E0, 61 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BB6E0.obj from the identified progress snapshot; SHA-256 737809aaef2dd216612c371b4d10088465fe08c055f6eb913a0a4628a184a8de; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AB6E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AAA60.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 18a91bafaa22105f9440a9e5145a1e6415c706b8fa6fe90d92f826f6805896df.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 61/61 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 189549e290110422c91f7e35b1dc06a0cbdf338335580321e7582f4adc9dc62b.
- Compiled .text$mn SHA-256: 02d1b7cbbc834d6c9aed50f32167f55b8de45db96590bef979f40920f0ce4522.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
