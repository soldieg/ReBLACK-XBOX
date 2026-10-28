# sub_001BA9B0

- Function task: [#1463](https://github.com/soldieg/ReBLACK-XBOX/issues/1463).
- Function range from REA/Ghidra dossier: 0x001BA9B0-0x001BA9F2 inclusive, contiguous, 67 bytes.
- Function dossier evidence: ev_287898769ef37458fb3edf97a1d8cd007508cb6cf0c4b2191971e89177987c69.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BA9B0, 67 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BA9B0.obj from the identified progress snapshot; SHA-256 91eb73ad0ec6236cece5075613c7e198c5b7c10176afb02e8aef2f2d0d8db6ce; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AA9B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9D30.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 27e23c320115e97be175680282d689bde677cf020bb7d956f530e31f8ccb1150.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 67/67 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: d396824296a923f4d74696b15c8a682db1734fee5d68d17584c3e3568483320d.
- Compiled .text$mn SHA-256: 3aa4a34881780176f06e559137eb61d6b3547f8bb9cb41ea9022e81d8fc02b20.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1463](https://github.com/soldieg/ReBLACK-XBOX/issues/1463); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_fdef76579ab53e7b2405cc433d1cedcf1e2ee90585086bf2339512e6c8467faf`; complete REA byte-read Evidence: `ev_cd7d360a22bf9d415b4513d5d8c38baf24b6a9f4ebc47ddc706760163ab1f47a`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 67 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `86d0642eb20a4ec5e4f9d5df956d4c912d9886338a29e66c770779b631a59889`; candidate COFF SHA-256: `91eb73ad0ec6236cece5075613c7e198c5b7c10176afb02e8aef2f2d0d8db6ce`; compiled COFF SHA-256: `8afba48d3cb205594829509069963dd8aa34f11465383c6ff1280a04ec2d7f28`; ObjDiff report SHA-256: `8a4a014f6e8151f56bd837d146991314d9246d7249f7ddcaf0b6b16009dcb5cb`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
