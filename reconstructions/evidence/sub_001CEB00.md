# sub_001CEB00

- Manifest: lot 139, position 33; selected in ascending candidate order for lot 106. Candidate span: 93 bytes (0x001CEB00 to exclusive end 0x001CEB5D).
- Boundary: Ghidra crosswalk has no procedure at 0x001CEB00. Boundary basis: preserved-register prologue, terminal RET, and a pointer to the entry in .rdata (raw file offset 0x27CE2C); direct incoming-call export: 0. This does not resolve indirect callers or ABI.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1BEB00. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1BDE80. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 7adfa8f2bef5caa59d65e93888cfbeec0329e67c4625d67ae877354832f341ef. REA read_bytes evidence ev_22475ddc1c7ca8c3256d93ccc32782b1c4d9fb50220bfd76143cb5f9ca5bc22d returned 93 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 93 bytes.
- Source SHA-256 896f9b1a270683d4e09b9b384f9523b7ecfe328e6ccf66958e1b417f6f5a7431; fresh object SHA-256 1da81c13b43cb1d618e0dfd1c7de103c46f8caa95d49802fa06fca239312a195; candidate object SHA-256 4dcb46f3452a65a13c3a6a2658ec2c47d190172d59c69c092e355120692421ff.
- GitHub Issue: #9277 (https://github.com/soldieg/ReBLACK-XBOX/issues/9277).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
