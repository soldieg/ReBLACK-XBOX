# sub_000DABB0

- Manifest: lot 112, position 47; address order. Candidate span: 28 bytes (0x000DABB0 to exclusive end 0x000DABCC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCABB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xC9F30. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ce99e6ea7278bed314bb3da459319a09e591f816073de6b51decfac102bb2a5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 200b400a29bc4a23ea461a7aca4e948430f9368a73fac31c3cec21c43fb7dc0a; compiled object SHA-256 fe5ebb8cd5aadbe6ba8aafdfa18935e40b5f45120928815276eb6aac316aa0b2; candidate object SHA-256 6ce62c7ab899746989e42b4b33044dd86bb8eef7a61f8b53d66f478728ad18cc.
- GitHub Issue: #10368 (https://github.com/soldieg/ReBLACK-XBOX/issues/10368).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
