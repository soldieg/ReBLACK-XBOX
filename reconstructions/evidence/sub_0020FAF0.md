# sub_0020FAF0

- Manifest: lot 144, position 83; address order. Candidate span: 5 bytes (0x0020FAF0 to exclusive end 0x0020FAF5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FFAF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FEE70. REA read_bytes evidence ev_4c5e13d94d1c1b179b924d580a67a15c62652911da29f074d208c90c9417202c returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 5fed5afb29946811bf02359627a94bc01d08d31b779528feaadde3866af9c855.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 058036d6ecc9b0d5702e3710dcc4701b464016a4fa04e39729023cf6f5142ff9; compiled object SHA-256 7d04cb27038b86170323db4f59f83575206f454b6067c7e927a6fd5a294e60f4; candidate object SHA-256 88010eddd3a4c309c3bd0435e4b1e7022cf6c4e5c98076a1966aa92345ca5c39.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
