# sub_0012ABE0

- Manifest: lot 119, position 79; address order. Candidate span: 8 bytes (0x0012ABE0 to exclusive end 0x0012ABE8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ABE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119F60. REA read_bytes evidence ev_dbc1bee6a13b1a587d103108132e4d016e6d3253e622555e253d56df94f71426 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 a43239b427486a9322c3eefccb9b63b46c20df8833d0cdd489a24578e5b6710b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 f619173e67dd7321cc8f2faa764933cefee5ca7ffbab8d71c7169837ef437b8f; compiled object SHA-256 407826c96e54dfd5c186e2afdc44f86565d533921b3b00739cf92c45368c7771; candidate object SHA-256 d0a3f3065640fe4296ea31dd27e3bc1c9741e3516e651003fec22871dfea91a0.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
