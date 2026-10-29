# sub_000E6EE0

- Manifest: lot 114, position 41; address order. Candidate span: 111 bytes (0x000E6EE0 to exclusive end 0x000E6F4F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD6EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD6260. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 111 bytes. XBE raw = derived PE = split = REA; span SHA-256 9fad7a47031e13dfe09d8b562110858c74ab26b754cc033e07b44b926749710f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 111 bytes.
- Source SHA-256 9921378c5b45aec7559ce88e47b6faeaea26136da4cb95b4bc83a9dcd4c26eb9; compiled object SHA-256 721652aae8d7b991f81e1496294df190efbbc7411147c893a60c3b25af2463b9; candidate object SHA-256 72bc20658c97e3d256761deaf217e7fe81c55b2a2018a329c400294775c7bb40.
- GitHub Issue: #10547 (https://github.com/soldieg/ReBLACK-XBOX/issues/10547).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
