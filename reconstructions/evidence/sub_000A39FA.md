# sub_000A39FA

- Manifest: lot 106, position 9; address order. Candidate span: 61 bytes (0x000A39FA to exclusive end 0x000A3A37).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x939FA; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x92D7A. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 61 bytes. XBE raw = derived PE = split = REA; span SHA-256 8fbfe8ea0b3bda3e3cdc123b2d6ae5cc8ec282a48af9e55387958d1a6460090d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 61 bytes.
- Source SHA-256 968ef2d594211165ced3e42487494f1f39910dd4ba136420c1a1caf329cc2175; compiled object SHA-256 2e45610e6a8ea8e43c84e5ecb938002bcf1b53f685984bacd3799c7aab46d01b; candidate object SHA-256 5d59abc02e08c9856492d95de17fa2f77d394145ff1ccfd3b87502e2acfee58e.
- GitHub Issue: #9843 (https://github.com/soldieg/ReBLACK-XBOX/issues/9843).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
