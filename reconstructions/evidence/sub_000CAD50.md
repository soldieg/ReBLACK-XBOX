# sub_000CAD50

- Manifest: lot 112, position 16; address order. Candidate span: 110 bytes (0x000CAD50 to exclusive end 0x000CADBE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xBAD50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xBA0D0. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 110 bytes. XBE raw = derived PE = split = REA; span SHA-256 3e4a8c0c79b18956d213841171cfbbff820269e64465de12a7890e7cced6e94c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 110 bytes.
- Source SHA-256 85560ca8c10c680874ed3a6eb153480c5b1b46cf63577c50e2929b633d78e757; compiled object SHA-256 4e4245b58816ee82fc9879741d8a4f53aa5fb2ba6a47db4195aeb6fafa3184da; candidate object SHA-256 0a4e1830a0ccbb1e748a69eded83871c5b6386c7f84ed0295b2c791bbf729bde.
- GitHub Issue: #10352 (https://github.com/soldieg/ReBLACK-XBOX/issues/10352).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
