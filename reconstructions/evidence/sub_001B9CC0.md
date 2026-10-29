# sub_001B9CC0

- Manifest: lot 137, position 55; address order. Candidate span: 17 bytes (0x001B9CC0 to exclusive end 0x001B9CD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9CC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9040. REA read_bytes evidence ev_1c5743e57821c7c5445539d32b0ca1c891f0fcf02cbff487f68b8329f3977c38 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 a888b5a91027491f9bd7527c303aa40fd965ae516fae2ba28ed4b468014c308a; compiled object SHA-256 87af110ca7f6dba008834520d4e52a9d102c36189029389ad52f657ab34c54fa; candidate object SHA-256 326a8962e6b34deb245e0f594ebb9abe7bcc36fc38acce3afcadbe3daf8615c6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
