# sub_000E1CA0

- Manifest: lot 113, position 8; address order. Candidate span: 1 bytes (0x000E1CA0 to exclusive end 0x000E1CA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1020. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 f86a5f42c5ead9316634abb8dbd58275830c5042db2458c39641f41f2fbc632a; compiled object SHA-256 20bfe3b8b899b918349ae4d5a440902c813c07354eb14366a4910d028e8155f5; candidate object SHA-256 a58b480fab9b2e6209a8db6e5d548c1277ef833836acf256bc653ed868e8788d.
- GitHub Issue: #10420 (https://github.com/soldieg/ReBLACK-XBOX/issues/10420).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
