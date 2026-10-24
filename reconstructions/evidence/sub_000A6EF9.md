# sub_000A6EF9

- Function task: [#810](https://github.com/soldieg/ReBLACK-XBOX/issues/810).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A6EF9-0x000A6F0F inclusive, contiguous, 23 bytes.
- Call graph dossier: ev_9d4d19c9230b664dd2cdf65cc420086ce8c23fef96fde5fd94edc3c29449feb8; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A6EF9, 23 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A6EF9.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x96EF9.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_76a2941c065fca45a83638d509411b06c091d796202c05bcd15903f0c362b0b4; complete read 23/23 bytes.
- Source SHA-256: a2484d8dd1b4a46b6c844dd33f1af8bdad1e5cd7898b4d2762d0c4126c545a64.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 23/23 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8c79c691b92a881053cf157ebe2ffa0b1813cf8bd513660c7c3693193ae52327.
- Compiled object SHA-256: c3f7d308b15bf175bec7d161f83b97dc072d749153930e0b1f53b981fcb2aa75.
- Compiled .text$mn SHA-256: e6ec999d45c3c78e22ed722d9cdd003ca3e8685d7954a7d030915df1e55eb902.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
