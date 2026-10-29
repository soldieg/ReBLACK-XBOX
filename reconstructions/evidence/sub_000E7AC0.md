# sub_000E7AC0

- Manifest: lot 114, position 46; address order. Candidate span: 122 bytes (0x000E7AC0 to exclusive end 0x000E7B3A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD7AC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD6E40. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 122 bytes. XBE raw = derived PE = split = REA; span SHA-256 2c692553f07381820727a12bbec37d66124e4b953d084d76028dd6fde4fbb579.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 122 bytes.
- Source SHA-256 ce2c9c589bcdf5f6af7df60a29f5b7b98dcdb5984cd30dca42f2cf96f290142c; compiled object SHA-256 e97ab77c9dc5d59cca56752efdedc32c73b3445b9fcd63a2c4fd161310f4f097; candidate object SHA-256 caedc3d9e7021cb450ce94ec23ee1b40e6332a0902f1e065bfde7473f3b26b7f.
- GitHub Issue: #10551 (https://github.com/soldieg/ReBLACK-XBOX/issues/10551).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
