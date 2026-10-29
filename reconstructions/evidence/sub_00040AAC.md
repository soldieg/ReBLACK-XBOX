# sub_00040AAC

- Manifest: lot 103, position 27; address order. Candidate span: 11 bytes (0x00040AAC to exclusive end 0x00040AB7).
- Boundary: Ghidra class interior-procedure; manifest span only. This does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x30AAC; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x2FE2C. REA read_bytes evidence ev_bdfbad531712d897e012b202959632677766e1e4059cb1a874b18377009ede70 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 6dad3074d2337583264ecc8b04fc84489be1a5309bb7bdcd3df2091f1b168705.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 06fd2c2b055edb2c0252f6e8956077e6fbf716a11a23c759b94115327d674fe6; compiled object SHA-256 daa0bedac9112016a51ae4c1a24c55cd83347f47fa2f84e52f3bb4d175bf086a; candidate object SHA-256 ba19a9b2358a04292e2aa3785d96ae14f9b959dde1457dde5a5174ba2f957139.
- GitHub Issue: #9640 (https://github.com/soldieg/ReBLACK-XBOX/issues/9640).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
