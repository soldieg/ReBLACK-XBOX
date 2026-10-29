# sub_000FEC30

- Manifest: lot 115, position 47; address order. Candidate span: 174 bytes (0x000FEC30 to exclusive end 0x000FECDE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEEC30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEDFB0. REA read_bytes evidence ev_053a47a022dc6492f29ff0b59db1ce36b55702940b869df5cc0b44f474231eff returned 174 bytes. XBE raw = derived PE = split = REA; span SHA-256 7245b3447c7b458fa75af0b613f11fbdc8358df6c293165118b13af0ba7621a8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 174 bytes.
- Source SHA-256 598876f0fd9ba119691c046d31320dbde3a215a34141f3860c4805eb5bd88323; compiled object SHA-256 2dc1f995bc0a8f9223b7ea74e409340077765c09b4c5c640f0d6beba7ded25e2; candidate object SHA-256 0865976405ef1be9e14857748403130504e4bbcb69ec45e89ba467e69ebfc1df.
- GitHub Issue: #5935 (https://github.com/soldieg/ReBLACK-XBOX/issues/5935).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
