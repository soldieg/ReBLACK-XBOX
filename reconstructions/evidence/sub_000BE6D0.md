# sub_000BE6D0

- Manifest: lot 109, position 5; address order. Candidate span: 7 bytes (0x000BE6D0 to exclusive end 0x000BE6D7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE6D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADA50. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 ad9644019f4abc54fc51ddf9d22fc4a51f9dc23b21bf15a1f0b31109ff8da6ab.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 1ee915bcd137f2f502ebfe523618e04b53dee7f20baea1de4ff1d34da9a2726b; compiled object SHA-256 6c4846a139c3a7893f1874eb0f40eca21a004421a00bcac516917ea54871b00d; candidate object SHA-256 469aa6ec97f245b85e3169f363982648667b153e2044e5d944015b28de7bf01b.
- GitHub Issue: #10117 (https://github.com/soldieg/ReBLACK-XBOX/issues/10117).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
