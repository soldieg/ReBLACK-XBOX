# sub_000BFDB0

- Function task: [#894](https://github.com/soldieg/ReBLACK-XBOX/issues/894).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BFDB0-0x000BFE63 inclusive, contiguous, 180 bytes.
- Call graph dossier: ev_eb1b394ffadc12e22c53455e3437558486a7e54aa5e5708e4f4980c7934bf726; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BFDB0, 180 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BFDB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAFDB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_ff8c961805b330b201c7d641b8aab84ffaf64141c809040aaa6a5fe313653d85; complete read 180/180 bytes.
- Source SHA-256: 396b3ae76e6061f0d01df1dc2f9d51a80cbb1b06cf52e59bfceb1addea565aac.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 180/180 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 7e316095b0a593f191c89f7b769be440735494c968f8daaf27425c936311c3a2.
- Compiled object SHA-256: 1a4ed9e3f6689d36e627bce7dbc85a9ff96bf5d2588304ccfe9567127759cef1.
- Compiled .text$mn SHA-256: 6df6439ebfe635a7843baa74bfee184666f715c7bead3c30f4de271f213ab86a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
