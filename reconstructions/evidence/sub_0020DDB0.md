# sub_0020DDB0

- Manifest: lot 144, position 61; address order. Candidate span: 24 bytes (0x0020DDB0 to exclusive end 0x0020DDC8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FDDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FD130. REA read_bytes evidence ev_948d2a8ddec4e57cc32601a53dd84442deb8e5efb2dec7628b60d53e97d12800 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 8d85f1706b53e6ef06238b71aa29af5c5e15e26e5aa8dfad908cd343b1d13e22.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 f59d31a95f1aa476ccd3caebf7fe6d1fb53dd471836dc5ae8016ea771a3d14b7; compiled object SHA-256 fd812a9c509b335d0aada2e580e28aac591c7895a00c73f4f67616ed1c807427; candidate object SHA-256 9cc331865ef1f90f7de3f198e4d54734c15f0665e0e2bbad3616c4fe8d384991.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
