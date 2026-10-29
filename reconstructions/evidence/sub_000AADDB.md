# sub_000AADDB

- Manifest: lot 106, position 72; address order. Candidate span: 116 bytes (0x000AADDB to exclusive end 0x000AAE4F).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 000a9dcc@000a9dac. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9ADDB; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A15B. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 116 bytes. XBE raw = derived PE = split = REA; span SHA-256 314064dd9fac61bb79c78ed7b3287d842601e9a70d819d5f5d7800cb160cd7bb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 116 bytes.
- Source SHA-256 f731359738cb97114d4736993ec612e515de549dad0d31164d7930bdf726b1c1; compiled object SHA-256 452cf8eb1fa334867e04e9c5cc62300e2b99bd12cd0571ca95a06f462d79f690; candidate object SHA-256 cb514147ca9770f2d51baefd86c81b4dddcf713d116389e50ef27162a9613449.
- GitHub Issue: #9899 (https://github.com/soldieg/ReBLACK-XBOX/issues/9899).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
