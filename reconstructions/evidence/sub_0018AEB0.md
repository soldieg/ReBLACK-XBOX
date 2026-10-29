# sub_0018AEB0

- Manifest: lot 132, position 13; address order. Candidate span: 31 bytes (0x0018AEB0 to exclusive end 0x0018AECF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17AEB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17A230. REA read_bytes evidence ev_3fef693836cef2110ec4683c2904d98138a906bd32e45cc0544acbe6d8bc1571 returned 31 bytes. XBE raw = derived PE = split = REA; span SHA-256 9aa940425d1a9eadd3c7de5b81a6cd030285c888331c393698f3c1f65aba3dc9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 31 bytes.
- Source SHA-256 ff44859f1c7e5c8604d237c198020a98dd84902992b2a3fee2c14e40d6d4186f; compiled object SHA-256 c6e8810e83bd2f9aa2f4731fc5318e51988d970891a896b75def8824f4c320df; candidate object SHA-256 99a8082d003522c7984236c346142f9b3f9a168cedc500d274fe0252a8793fed.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
