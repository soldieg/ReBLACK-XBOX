# sub_000CABE0

- Function task: [#937](https://github.com/soldieg/ReBLACK-XBOX/issues/937).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CABE0-0x000CACBF inclusive, contiguous, 224 bytes.
- Call graph dossier: ev_72bf75b6ec003c101bd957a2abcec85d01f52316328965225223402553685c72; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CABE0, 224 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CABE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBABE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_3a12afd386d7706d1f9117d043b3941b97daa39b1ed81e1134d503d22d05e86e; complete read 224/224 bytes.
- Source SHA-256: 89688c1e8a815a2dcd4e64d40da43c4f8acdbbdcd4598a43dce2cee080bf3c5a.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 224/224 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 28dd6905af1d60f63903128abe753060fe6cda488e0f955ce3b5b12d6e7ecd1e.
- Compiled object SHA-256: 6dc42b699c6902c8e394e4696c4e58937f4255f737169af477bc3e138da5fefe.
- Compiled .text$mn SHA-256: f18efedc48ba559a846851fc5e7517b7b6e1ff68637e61b0b410bbcd7d8504a5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
