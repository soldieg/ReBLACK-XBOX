# sub_000ADAB0

- Manifest: lot 107, position 13; address order. Candidate span: 448 bytes (0x000ADAB0 to exclusive end 0x000ADC70).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9DAB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9CE30. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 448 bytes. XBE raw = derived PE = split = REA; span SHA-256 fcc0258dd7c043072cb9fd083abff3ad5b05e4ec803881559ce6224b23739ed5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 448 bytes.
- Source SHA-256 1f81645f05024279f0e434ca8119a80c845a3130cb33ac51e930ed62f4cd6eca; compiled object SHA-256 6ef0db94d10f4d095a757ea84af101dfcedb9f9166a2b37b0cb33b80bf904d2d; candidate object SHA-256 48d370c59d50b733a6ef5ad57cc45872afd240b96a54df96848216d15d2cd7a6.
- GitHub Issue: #9940 (https://github.com/soldieg/ReBLACK-XBOX/issues/9940).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
