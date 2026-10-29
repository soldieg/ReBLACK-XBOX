# sub_000FFC00

- Manifest: lot 115, position 51; address order. Candidate span: 552 bytes (0x000FFC00 to exclusive end 0x000FFE28).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEFC00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEEF80. REA read_bytes evidence ev_053a47a022dc6492f29ff0b59db1ce36b55702940b869df5cc0b44f474231eff returned 552 bytes. XBE raw = derived PE = split = REA; span SHA-256 6b87aca29992ec589132945d7d27cd55c6cbd75b5844d2a8988bca910920998b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 552 bytes.
- Source SHA-256 9da04a7bcf493946881670cfb64938daeed0aa0494ca01fcf901c08679439144; compiled object SHA-256 4eb4a124f809b8ab7f37f9d42595fb40bc5b9ec7072bcb1e0c011a41739b2722; candidate object SHA-256 6619b128acad8ff7a60e3400a5b40afd7fecdab5e14f2ae84652015a1c64090b.
- GitHub Issue: #5939 (https://github.com/soldieg/ReBLACK-XBOX/issues/5939).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
