# sub_000E1FC0

- Manifest: lot 113, position 24; address order. Candidate span: 26 bytes (0x000E1FC0 to exclusive end 0x000E1FDA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1FC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1340. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 2699dfa5a101da07c32dc6aeda040f49c612892af345051db2ea59e5df22bbe1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 16a4061b462fd21ce1fb6561583b8ce0bb57251dfc358065a57977a3d3cea449; compiled object SHA-256 6dc6e4cb7f008a32109c3c1ce1401c12e52efa797001d9fe3870924643150352; candidate object SHA-256 21558ed848b74990b400c0ad0d73bf2445e842a7146fc8c45b3ba59001764a22.
- GitHub Issue: #10438 (https://github.com/soldieg/ReBLACK-XBOX/issues/10438).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
