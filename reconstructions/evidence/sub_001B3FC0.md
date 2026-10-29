# sub_001B3FC0

- Manifest: lot 134, position 25; address order. Candidate span: 1 bytes (0x001B3FC0 to exclusive end 0x001B3FC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3FC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3340. REA read_bytes evidence ev_ae359f49c346a8031d19509fde98d49c4f7cf63007dc0e4845e4fe7aab562623 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 753afe0012e066a3ab9b1df896ecb26a12445379b4f3f6c50e9e8d92c39005ba; compiled object SHA-256 568c27424b438a311581c9e904b89a133bb514a3635dd81bb28103f5f3d57c92; candidate object SHA-256 d7517471b75ae235a03286120e1348092e5fdaa798735753de8499595f674410.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
