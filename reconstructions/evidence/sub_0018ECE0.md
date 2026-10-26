# sub_0018ECE0

- Function task: [#1287](https://github.com/soldieg/ReBLACK-XBOX/issues/1287).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0018ECE0-0x0018ED24 inclusive, contiguous, 69 bytes.
- Call graph dossier: ev_d359b3eb32fb452170e3f9834e8ba343ba6569d89882bb680c246c13063e2068; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0018ECE0, 69 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0018ECE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x17ECE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_8ec22029f0f28ce2942dad065e807663254edf3cecf8e9d7a9fec93f6907c88c; complete read 69/69 bytes.
- Source SHA-256: e8e938f7398dbd536064f56c88a50f72b4e08b5c0b1387a7787844fccdc98516.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 69/69 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: b1ff67efcc62bc5e77dc91ab7ee7c2f42e08e8535efa1e002741c5e97e9503d4.
- Compiled object SHA-256: 7e72cf07b77e3720f71ba277f0e6c8400ecf1734b6481245827068b90f77e17f.
- Compiled .text$mn SHA-256: beafc14485523d345e6457d9bed4a8ef288d2e79db1cdd89e9142d7eee1b1360.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
