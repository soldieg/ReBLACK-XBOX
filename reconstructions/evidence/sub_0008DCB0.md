# sub_0008DCB0

- Function task: [#663](https://github.com/soldieg/ReBLACK-XBOX/issues/663).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DCB0-0x0008DCC7 inclusive, contiguous, 24 bytes.
- Call graph dossier: ev_f95f5254f9d4fbb6ea8109a36560c60a44d5eeb1f620e29e8f0902c2c65d9bff; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DCB0, 24 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DCB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DCB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_a6751275f3c6baef17d0583545740bb00f154b97078aea58ea98e3c871b6a8fc; complete read 24/24 bytes.
- Source SHA-256: a8a8370f85e1a253d0a2aed76949c61d23656926a3f717301cedc5bd2e5f84f0.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 24/24 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8f7eec27847ffc8e4ab4717c0d12dce1d6c8c3bf1c9695141cad8319ac5cd5f4.
- Compiled object SHA-256: d44bd2dff8222faa134fdba5c53a2ec82b2bcde0057fa58adc3ff59e7111ed93.
- Compiled .text$mn SHA-256: 3ecfa6439f3a30f52b69ef113adb58b8f9b7fda55bdd86027777c0408d878467.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 90 fresh revalidation (2026-10-28)

- GitHub Issue: [#8820](https://github.com/soldieg/ReBLACK-XBOX/issues/8820); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_004944ec1606ece6553e0107aaec72043dc0de18de1d24cd54660931038eab7d`; complete REA byte-read Evidence: `ev_9ff34260b51cf8d5f939f2c707512c3a5bcc45805b94ac76e0ce5c469dcdad8f`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 24 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `d19ecaf82ffe898c5f8e2a1d160cc9baf815f71b10335da39a940eefb9a40766`; candidate COFF SHA-256: `8f7eec27847ffc8e4ab4717c0d12dce1d6c8c3bf1c9695141cad8319ac5cd5f4`; compiled COFF SHA-256: `71287fd4c7979cee77cd5205bb8889dc17aafc2919e74e432c87aaf7e9614146`; ObjDiff report SHA-256: `806f01202bb97f7760814a3056bce5b019b63c73d6d0cdebdc6abbce5afbd931`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
