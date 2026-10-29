# sub_001DFD90

- Manifest: lot 139, position 86; selected in ascending candidate order for lot 106. Candidate span: 907 bytes (0x001DFD90 to exclusive end 0x001E011B).
- Boundary: Ghidra 12.1.3 procedure entry 0x001DFD90, sum of disassembled body bytes 907, span 907 bytes across ranges 001dfd90-001e011a. Direct incoming call-reference export: 1; callers: 001e5fe1@001e5fa0. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1CFD90. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1CF110. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 ca5ffe64f9df49a7096dd3e24c3b581dd4e8c992a07eaa7e37a1dc638ec355cd. REA read_bytes evidence ev_e906c8e4a786a376f9098fd20370e53c65ba1f05ec721f69193e3e4f3d0acb22 returned 907 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 907 bytes.
- Source SHA-256 1ae6e6f3add4361d935093053c73a6fe466a6687eb474e53f7e798d9928450fc; fresh object SHA-256 bf84a94059dc1b43c2566156417b89ca2e10653f533202d543801500b0da2a8e; candidate object SHA-256 1304a299ca81c8a810bc1f9418f1706dd2819b00e7f19ad5824a52509b9523ca.
- GitHub Issue: #9293 (https://github.com/soldieg/ReBLACK-XBOX/issues/9293).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
