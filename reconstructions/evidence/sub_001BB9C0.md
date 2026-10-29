# sub_001BB9C0

- Manifest: lot 138, position 6; address order. Candidate span: 3 bytes (0x001BB9C0 to exclusive end 0x001BB9C3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB9C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAD40. REA read_bytes evidence ev_e5bee47463e48b6970d4ad1690898d34e10e5c13d94ba9c393a5c03cb088fc34 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 7ab359365839dd601fd9c2d28c6553e8399cced6bfe588c54becf62f86dddcf1; compiled object SHA-256 21ae9c1ad6d12a4f9acb78e3222bba2fcece8f5a38e9a7fce2748fe9117a687f; candidate object SHA-256 8db1f2dcd8caa47b101a60b3652635424d5d7640198c8ee7b9b01195cd133f7b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
