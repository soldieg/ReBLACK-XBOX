# sub_001BE1B4

- Manifest: lot 138, position 49; address order. Candidate span: 22 bytes (0x001BE1B4 to exclusive end 0x001BE1CA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AE1B4; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD534. REA read_bytes evidence ev_679cb6e12e9ee381c510b3993b13cd614ac6ebe7b7720d6f470990ce0449a838 returned 22 bytes. XBE raw = derived PE = split = REA; span SHA-256 13a3872f906d7e82476a0a2897dfde36184a8b7e824b910d0b5636264df2c335.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 22 bytes.
- Source SHA-256 88576472fd1a4626f5bf9c8cf721ff766046c1803d89d0896ee64f151ad82ff6; compiled object SHA-256 31f83712eaf1fd82088bdeb151701b48788f02daa729d0b71f9ef79c473c9d15; candidate object SHA-256 241c4b6c740c458cac36a416c6ea054436812d1c2b5f66c39664567f035971d1.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
