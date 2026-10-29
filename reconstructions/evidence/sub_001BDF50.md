# sub_001BDF50

- Manifest: lot 138, position 47; address order. Candidate span: 22 bytes (0x001BDF50 to exclusive end 0x001BDF66).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADF50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD2D0. REA read_bytes evidence ev_ab1ff0ecb063b6bcdb201cc111c998f8817614b9067191c34d465784e4d024be returned 22 bytes. XBE raw = derived PE = split = REA; span SHA-256 a58e1fb1e22e561029608ac9abc7a4de1ccd3e18656b507c1544a088a9f969d8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 22 bytes.
- Source SHA-256 940181e446ce73d93845fd13e8a9f8d51660aa9bfe218db3bfa81bf426e6f20c; compiled object SHA-256 e620257409fedbe5a2ec9cdddb3b98a2bd58f925981a635de91b098e3e574241; candidate object SHA-256 11330ac8b62e6588ecf824864a445b9e6eb23a7be58647b8629ed12c4b6b7a8a.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
