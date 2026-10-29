# sub_000FAA50

- Manifest: lot 115, position 35; address order. Candidate span: 4336 bytes (0x000FAA50 to exclusive end 0x000FBB40).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEAA50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE9DD0. REA read_bytes evidence ev_f257e33934f7baa6f3e0390cf8a3a49a3ae042453bc50fe6ad4cddca37330d1a returned 4336 bytes. XBE raw = derived PE = split = REA; span SHA-256 a9db8491c439811227f6c1bc9dee6301de8895283a981c743b5882f0f0cf0296.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4336 bytes.
- Source SHA-256 797df7ac6bbf85d2036cecbf76075830d6a2cb02fafb64f29aef6f358e0e9b0d; compiled object SHA-256 dc2b22978a53c542b2a307bd748ca135ac5b4ed1108d5f9747f3a060302de745; candidate object SHA-256 4f777f56200469dd35bab7e989f914027db2ca9908ad2d653f4a1b6000c92067.
- GitHub Issue pending: GitHub API returned HTTP 403 secondary rate limit.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
