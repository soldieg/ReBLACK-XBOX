# sub_0018CFC0

- Manifest: lot 132, position 28; address order. Candidate span: 24 bytes (0x0018CFC0 to exclusive end 0x0018CFD8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17CFC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17C340. REA read_bytes evidence ev_57888b02f9dbfb0ad74fee7a3a165a2b1d3bb9185f5b746588c767ea6ab37a63 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 f5c60e9477e00f0556365312f45187133e64ae9874c13a011458eae0045df6b9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 e2a91616bd25163f51fd08c078fea95eea3746ee626cff9c76b469947d87768c; compiled object SHA-256 8717601ebc1e0cb87aac069aa4b9b38549a50dc34bfe7a1f1da19b2feb58f095; candidate object SHA-256 583721e23b1fae77bb69ae5621c4d05993f2686895b6d6dd504dcb4933a584ba.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
