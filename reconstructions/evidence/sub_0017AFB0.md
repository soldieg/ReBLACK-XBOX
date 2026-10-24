# sub_0017AFB0

- Function task: [#1162](https://github.com/soldieg/ReBLACK-XBOX/issues/1162).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0017AFB0-0x0017B009 inclusive, contiguous, 90 bytes.
- Call graph dossier: ev_bf46fd3e0336bdb14a1e404253876e7331be9b9e1ee062936fd67d520c888a48; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0017AFB0, 90 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0017AFB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x16AFB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_a31d581772822e0cf72f23446d4eaa353ba12bbef094b2126c271419f985b6ed; complete read 90/90 bytes.
- Source SHA-256: 38a30ea4895966088058c3ef80fe86b9733bf28bbf511e14964ebba2af95284b.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 90/90 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8b54aef8afda9100cdb496d09bf4967fc746e2eec3dcc9751e7e47f6fa8c7f91.
- Compiled object SHA-256: e61b7b68d2f85f5cd597ea2ac2aadd3d94dd6fe0e35d71e9c2ce9238e650cb95.
- Compiled .text$mn SHA-256: 5b7595e135f1b8a109a5131bd17e62a27f3cc460499db132cc6d900ed6397ea0.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
