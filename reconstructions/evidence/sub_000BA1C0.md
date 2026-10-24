# sub_000BA1C0

- Function task: [#875](https://github.com/soldieg/ReBLACK-XBOX/issues/875).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BA1C0-0x000BA222 inclusive, contiguous, 99 bytes.
- Call graph dossier: ev_046f1916353bbc7404787680507fe3a313a350112eeec8f567146c4dab9c971b; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BA1C0, 99 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BA1C0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAA1C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_f077096cc1ae0e86c36191e769902be6ed9ac6740e83e7546be0cd1ffd74c852; complete read 99/99 bytes.
- Source SHA-256: 2fdd59facf965bd84be55e199453997ea129abe3969e4334ad24117d707ab070.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 99/99 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 89976ba52acc7e2292afaa11ac69e905d982a57d53da64e972a80d132f65bf73.
- Compiled object SHA-256: 2fbda3dade4f3fd1bcf5fd815350b65689a51a6813c7af48b830b89c3240990a.
- Compiled .text$mn SHA-256: 5c81ce0dfad185e1f76e2ef44cae18fb672dca6795fd504b4c18bbe4958c92c5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
