# sub_001B4AF0

- Manifest: lot 134, position 59; address order. Candidate span: 1 bytes (0x001B4AF0 to exclusive end 0x001B4AF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4AF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3E70. REA read_bytes evidence ev_f8d1f4e82eab475445ce92e9b66d379f23df689b3f656817e14aac0a96df8010 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 ea2dbded545d7a1f82c0578aeadc16a09df334f6162a657208fb69f3f7a4b8fa; compiled object SHA-256 82237efffb593e15444b7b9fe1b9ce933a3dd3abd053f495fa774615ceb1c6e9; candidate object SHA-256 4328ba83f1317ddcdbf9481c394c9e6fc201892149281d755c6a7bed0f2d2e9b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
