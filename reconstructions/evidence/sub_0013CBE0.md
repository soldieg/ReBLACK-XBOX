# sub_0013CBE0

- Manifest: lot 120, position 64; address order. Candidate span: 8 bytes (0x0013CBE0 to exclusive end 0x0013CBE8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CBE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12BF60. REA read_bytes evidence ev_2e347de14500ddfb45b23c5faca6f72b21847a23ace5f75a6bdc47fb8828d099 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 cfe336bdbfbdfec07627fa330afad4324b02a08a6c5b16d55b5d00271de0f858.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 9147b0637e9366258d1f79dbad68c4ef4bc9bcf9292b6fe3182d28ff6ccce2ec; compiled object SHA-256 24374148f41547ee99f60b9662ec5e96c2ab2f683ba827bf427da683aa4fb3ca; candidate object SHA-256 df1ee4c7408394c2a7751982ad3352e1fe2bf585bd25a8eca087a1315e7f2496.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
