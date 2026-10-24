# sub_000CFF30

- Function task: [#950](https://github.com/soldieg/ReBLACK-XBOX/issues/950).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CFF30-0x000CFF98 inclusive, contiguous, 105 bytes.
- Call graph dossier: ev_dbcbec13f0308c60604408fab9f21df8673ced13e74ddcf4b3043d1700d377a8; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CFF30, 105 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CFF30.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBFF30.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_7b108240d549b070f4fccbb1edf75d64947dd90095b6d41b98c42f016c71ec1d; complete read 105/105 bytes.
- Source SHA-256: 60d579f4b352f84db3e3f37af281ba4a79a0c43e3000fe2d96b9de5733156687.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 105/105 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: f3316d05ddf01002015d10f86ddb0cd979898cc4af67640b3e4e95001518e017.
- Compiled object SHA-256: 29da5258a1452169460168d69908cc1fe530c2d68f3deeaa160da57c44233c00.
- Compiled .text$mn SHA-256: d2c285b48c6b49b28798beb6dfddb86be1896e9b0f42da5fd5abf42e6e531c90.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
