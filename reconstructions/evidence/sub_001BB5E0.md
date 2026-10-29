# sub_001BB5E0

- Manifest: lot 137, position 100; address order. Candidate span: 15 bytes (0x001BB5E0 to exclusive end 0x001BB5EF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB5E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AA960. REA read_bytes evidence ev_16ae4b7d6517e6ec6dc98a3d0ef8e23463cd525482b28eebcea6edbd70be297c returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 ef900f704e332e7097dfe180e8989d5545db2686d933f12923b5914c3b4ee391.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 a83caf1f69167ffcd5a9bba8536b30982db107dcb99381ef8b5f3321bd68f930; compiled object SHA-256 db4b67554d68946470f8b3d168cf72a51a12ba2e8d933f93fff045498ebe526d; candidate object SHA-256 5394264360c44fd276439a74349348cb2acdb745fd153e0070dd14eb17989842.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
