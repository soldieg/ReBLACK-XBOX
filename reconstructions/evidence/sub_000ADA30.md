# sub_000ADA30

- Manifest: lot 107, position 9; address order. Candidate span: 25 bytes (0x000ADA30 to exclusive end 0x000ADA49).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9DA30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9CDB0. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 762035d1ab3bc403ce63a441bfe1250bda9153fe5509724f948bd353fc1290d6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 4680645e2734b616534edbfe7ff8328ba35132f07e6314993e40d3c4b03f90de; compiled object SHA-256 2dfc5fe43b3351698f380a85aa5837dd91c55dad131faeb0e16c5c88fe7a5216; candidate object SHA-256 a989f0fa3d10b4626f2115ff3bfe2380516fc9d2539d77bc0c7b74e7f3327166.
- GitHub Issue: #9936 (https://github.com/soldieg/ReBLACK-XBOX/issues/9936).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
