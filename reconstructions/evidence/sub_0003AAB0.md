# sub_0003AAB0

- Function task: [#398](https://github.com/soldieg/ReBLACK-XBOX/issues/398).
- Confirmed REA/Ghidra 12.1.3 body: 0x0003AAB0-0x0003AAF4 inclusive, contiguous, 69 bytes.
- Call graph: 1 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0003AAB0, 69 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-23).
- Candidate object: candidate/sub_0003AAB0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 183136549af9d7f08edf7b966706ec6723eb41aa1ae82cd538e494c2fed2a31c.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x2AAB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_3f8f9b730eb0a9fd4aed0a963fe6d37fc877674e22e5b98ad751b6fb6370cb1d.
- REA byte-read evidence: ev_24daabaeee0f47bd38ecb0df98bafebc03ba71675129556ac4bb432b796056c7; complete read 69/69 bytes.
- Source SHA-256: 6df2fa52447572f8d074fee46512c2582e16926a1b5d3959efb148fba5edc3ce.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 69/69 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 183136549af9d7f08edf7b966706ec6723eb41aa1ae82cd538e494c2fed2a31c.
- Compiled object SHA-256: dfdbe744e2d30240fb7a25e4e5913ace235885a5ac323e34dff7794118ac2065.
- Compiled .text$mn SHA-256: c2652cb5dfd74957fddcb19b08df164c0c9d1e9bc0219c9c0b97307c7a0079ae.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 85 fresh revalidation (2026-10-28)

- GitHub Issue: [#398](https://github.com/soldieg/ReBLACK-XBOX/issues/398); the Issue was open and had no prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary and relationship Evidence: `ev_41d731ca8e58075321089c28a30ec9a6a318642bd1007bcc86587ead7dc6de18`; complete REA byte-read Evidence: `ev_24daabaeee0f47bd38ecb0df98bafebc03ba71675129556ac4bb432b796056c7`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 69 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `2ebe304f273be99547177e11e435e60452ef4cde0e926870ead1805c07b54c03`; candidate COFF SHA-256: `183136549af9d7f08edf7b966706ec6723eb41aa1ae82cd538e494c2fed2a31c`; compiled COFF SHA-256: `91ff19bec7d4639828521c09867d4649164abf4b18ac5f944898a9f4b4e4950d`; ObjDiff report SHA-256: `5a8e332a829425f821182b99abbb80f92db220005303579257063ccdd8cce82a`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
