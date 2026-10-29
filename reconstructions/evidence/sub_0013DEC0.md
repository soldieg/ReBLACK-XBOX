# sub_0013DEC0

- Manifest: lot 121, position 28; address order. Candidate span: 3 bytes (0x0013DEC0 to exclusive end 0x0013DEC3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DEC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D240. REA read_bytes evidence ev_90fba56cd43d8fa2f64dd28e4a499aaadb83a21a71f799c1acd2e8e0671d0695 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 c2373fe94846680bfeea01aaeeebb99c91863505636a25f612214861f6a8a5e9; compiled object SHA-256 04fbc250bd5318e3331f2021ee481e8fde7fc587e82d6c2b44e260840476727e; candidate object SHA-256 0874455f0d757db53f0e4dc48f47ac2c862950bc32acea3d34ac513f13538fa2.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
