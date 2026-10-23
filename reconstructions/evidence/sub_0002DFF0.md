# sub_0002DFF0

- Function task: [#373](https://github.com/soldieg/ReBLACK-XBOX/issues/373).
- Confirmed REA/Ghidra 12.1.3 body: 0x0002DFF0-0x0002E1E4 inclusive, contiguous, 501 bytes.
- Call graph: 3 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0002DFF0, 501 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-23).
- Candidate object: candidate/sub_0002DFF0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 00cfca51940cbb6f6951185409ad5d6eebbc7b49476de22e48cec8dc1a827b2e.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x1DFF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_a7a7a68094b608b624dea0e0ac71eff10c42ed78b54058cbe263d65df7523a3e.
- REA byte-read evidence: ev_efc6c2474104d965edec7591e52c5a7115eedcb8f41ca5b44741c9caabdbf43c; complete read 501/501 bytes.
- Source SHA-256: 17eb1c42b58efb31d18753ca82d2f81a7f0c40bb4c90b21bd921ab5e00ea640f.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 501/501 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 00cfca51940cbb6f6951185409ad5d6eebbc7b49476de22e48cec8dc1a827b2e.
- Compiled object SHA-256: cf2798a1189e9321b71029e82e3f75e230d9401c024cfcafd4a58c5d52f822a4.
- Compiled .text$mn SHA-256: 956426a19ed8717414b728b7272d94dd5660d835722dce4a6d25cedcc2063060.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
