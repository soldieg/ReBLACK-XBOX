# sub_000FBEC0

- Manifest: lot 115, position 37; address order. Candidate span: 1180 bytes (0x000FBEC0 to exclusive end 0x000FC35C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEBEC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEB240. REA read_bytes evidence ev_fa2ebaad95cac64c07bd21df1dd58a42773cf2f157f51461ec2295f689d45760 returned 1180 bytes. XBE raw = derived PE = split = REA; span SHA-256 2f9c97eca7a98c66f49d01b9a63360f153472d682c93c1c05e35a555aea6fffb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1180 bytes.
- Source SHA-256 401e289a9b063cf910f22eb9ce678d709c2e89b2f0dd24c9f328df9fd4f99bc4; compiled object SHA-256 59db783c004618cb48f098e14b40c72e96006cb5675ffa02da4f19ec66b7ddc4; candidate object SHA-256 9c1c8b9926d1f9e68b32884f4fb19b5cc9f3baf57b2ec45f76e23e7bcc940782.
- GitHub Issue: #1856 (https://github.com/soldieg/ReBLACK-XBOX/issues/1856).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
