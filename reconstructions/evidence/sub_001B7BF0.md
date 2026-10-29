# sub_001B7BF0

- Manifest: lot 137, position 12; address order. Candidate span: 110 bytes (0x001B7BF0 to exclusive end 0x001B7C5E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A7BF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6F70. REA read_bytes evidence ev_0b83416784c4718d5ef723ac0b8f311bdf9919748565193999cd9fdd6f914034 returned 110 bytes. XBE raw = derived PE = split = REA; span SHA-256 58dbcb5e87bf9fc8928237fe1518951e0cc3797699629472cd39c4fcfc9c4d1a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 110 bytes.
- Source SHA-256 c314d3652a2a00dd88c191de090e66117517557cdb05b775a05e1af4db11064a; compiled object SHA-256 dd6be8a76e111f1addc776e85014ef07267cb64ff48a3668b35aad914a07f466; candidate object SHA-256 5b411fc139bfdbfd33ad659b0dcb4090e131654771c7a1a1b9192e78e27ef208.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
