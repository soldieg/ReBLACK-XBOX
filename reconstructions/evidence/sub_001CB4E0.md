# sub_001CB4E0

- Manifest: lot 139, position 16; address order. Candidate span: 31 bytes (0x001CB4E0 to exclusive end 0x001CB4FF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BB4E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BA860. REA read_bytes evidence ev_d3ff93fc24447bfd24771f3942e5b171aacf5469d00c59460d9596a7e4f6c52f returned 31 bytes. XBE raw = derived PE = split = REA; span SHA-256 8663818c186d7f645a62dfcb1a2c40454e6f7daa8fc94d2581fa20c149efbdc4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 31 bytes.
- Source SHA-256 9ee519d1d00181739303bb4c7dd337dc237b8a67148ae5d187767b717ba63e26; compiled object SHA-256 81a07726b59260bd9feb5379c695254038cdae78033733c76f6d00be5846e027; candidate object SHA-256 1ef227a63755277c45282fa45494c02182d455e5134ffda05436ec661a73cc6d.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
