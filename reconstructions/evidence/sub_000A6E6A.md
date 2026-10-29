# sub_000A6E6A

- Manifest: lot 106, position 29; address order. Candidate span: 19 bytes (0x000A6E6A to exclusive end 0x000A6E7D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96E6A; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x961EA. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 c2a0bdf458687089bdabf23d036ff5e47a5dd9395b17aab657130b15e58dd782.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 eef8e6df82e77862194014e397ec007ad5cff52f467baf40ecbb0dd926400883; compiled object SHA-256 7730a8e8821d2250ea3433728bacf866d6a2e1ef3a83a417afeed86d130d911e; candidate object SHA-256 1eadc7ffa17bdb2a1234da3a7848b2a65418f24304ffa295f2620d9ac2d2b753.
- GitHub Issue: #9861 (https://github.com/soldieg/ReBLACK-XBOX/issues/9861).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
