# sub_001C2CC0

- Manifest: lot 138, position 77; address order. Candidate span: 17 bytes (0x001C2CC0 to exclusive end 0x001C2CD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B2CC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1B2040. REA read_bytes evidence ev_72d56795ef80753b4b6e4b913ae18534520cec53d3f3d23599191ef36b7746b0 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 3a523462d25e34c4551d508ff4981b3f553a6b7218049e62e4b5abf989ed575a; compiled object SHA-256 556d91d978e867f4176f671013643994459d81522d161e78bf3a4d22fac3dcce; candidate object SHA-256 e2d053d18aec34a04ef26c6bef91e005ba90efd9d5d8a64314099a8a0e2ffaae.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
