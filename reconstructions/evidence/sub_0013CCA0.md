# sub_0013CCA0

- Manifest: lot 120, position 69; address order. Candidate span: 3 bytes (0x0013CCA0 to exclusive end 0x0013CCA3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CCA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12C020. REA read_bytes evidence ev_19a40d61c0a7adb03860d20d46dabcf9f0b3b967f5175fd1e048e3129613d234 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 f678948fa5e6943a35c75134d259e86bddd65f5b02311d5cd7d9fd312db74f2c; compiled object SHA-256 6c774ae1a4a3d0c69810d85fc9d9a6c34db7292348b23fcdfbc9c490f51757b4; candidate object SHA-256 ccec9a4738f13b91b69ecd041f3f1e7653e2484462b82b708cd4bfda347e8479.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
