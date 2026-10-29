# sub_000BE5B0

- Manifest: lot 108, position 100; address order. Candidate span: 6 bytes (0x000BE5B0 to exclusive end 0x000BE5B6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE5B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAD930. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 d4bfae29cacde5faa47ebcfd9eba38f2cda5f3f538dc79588045890ac39a6970.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 5ae3864fa3c7c58372d72132b7cb2e2dfdc64da9094e77fc7e4cf6a4b36558d9; compiled object SHA-256 43b3204f9b409952127056106f2c5269e9612de03edf1a1f9161c81ea6247dc7; candidate object SHA-256 b8249badc8cf00f48de785121f291be7a76b78ba0938b24addc9eac3157c79dc.
- GitHub Issue: #10113 (https://github.com/soldieg/ReBLACK-XBOX/issues/10113).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
