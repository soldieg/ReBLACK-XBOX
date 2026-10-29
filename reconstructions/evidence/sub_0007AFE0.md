# sub_0007AFE0

- Manifest: lot 104, position 50; address order. Candidate span: 10 bytes (0x0007AFE0 to exclusive end 0x0007AFEA).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 000775d3@000775c0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x6AFE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x6A360. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 95cdc90be099c6df783035754e0880f792888dec17081f2b0eb55a548bbff09e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 a9d1b7267766afb8eaf4785b854dd42fb310d1fdabca7487cd31c08321a8818b; compiled object SHA-256 59811fe513f09e7f2be6fb22407524c68c66c6094210844270191d14d2235b31; candidate object SHA-256 bdae1dc25dbb21e4938250ab55bc1f66fc26f7f7f5e94424afef391937bbd4f3.
- GitHub Issue: #9704 (https://github.com/soldieg/ReBLACK-XBOX/issues/9704).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
