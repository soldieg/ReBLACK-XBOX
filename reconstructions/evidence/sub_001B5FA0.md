# sub_001B5FA0

- Manifest: lot 135, position 76; address order. Candidate span: 20 bytes (0x001B5FA0 to exclusive end 0x001B5FB4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5FA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A5320. REA read_bytes evidence ev_68c6eb44456bba8edc41a87974671803d0545f711a1103556504470967b07c93 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 51fc852457c3ca964abf3c0291a9d6fd0774a2aca977cc27776de7b743d83c71.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 b6ea2fd524c16a7f17760254348361d4fca276ee5975a5cf192b5e7c1ece7bea; compiled object SHA-256 896aa51bd36c37afde8fa6684728d748a5149132f18b1ebaba15b7c0386f1cf9; candidate object SHA-256 e76293a3c1fbcaba0c319d6bf9ed2e7cb62b7bdff2643dcca4999ee3dfbdbb31.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
