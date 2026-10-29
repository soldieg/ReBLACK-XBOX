# sub_000A6FB9

- Manifest: lot 106, position 31; address order. Candidate span: 20 bytes (0x000A6FB9 to exclusive end 0x000A6FCD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96FB9; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x96339. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 5d7a20b60c7cfd16489675e6e675bd4caa47abfda70ce97dd96d0d3ee8861225.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 c63fa62af149486494655a8b63536e48c2f0acbec4744929ab2f567e39e137f5; compiled object SHA-256 88e29d026842bdc8cea70cd4e572b33ed72582a427862942379e23fe6b651b00; candidate object SHA-256 eecad2be00d74906bf3b265e8b611ff0e273da7e96d593f6711d358693a11ef1.
- GitHub Issue: #9864 (https://github.com/soldieg/ReBLACK-XBOX/issues/9864).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
