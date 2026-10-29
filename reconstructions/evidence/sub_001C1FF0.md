# sub_001C1FF0

- Manifest: lot 138, position 72; selected in ascending candidate order for lot 106. Candidate span: 400 bytes (0x001C1FF0 to exclusive end 0x001C2180).
- Boundary: Ghidra 12.1.3 procedure entry 0x001C1FF0, sum of disassembled body bytes 392, span 400 bytes across ranges 001c1ff0-001c20d7;001c20e0-001c217f. Direct incoming call-reference export: 0; callers: none listed in the direct-reference export. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1B1FF0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1B1370. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 4aca68a7facd36ad9a46ff363d0b11cd2af01380cdaea46fb9e03ba434a53695. REA read_bytes evidence ev_fb096fcfb98002e046099fd973a5df13e644e426136ad5fe05a9a390538ad6db returned 400 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 400 bytes.
- Source SHA-256 51652d6a59f0cf96aa6504024872997410469a4525f72ca61170fe6036c8355c; fresh object SHA-256 9c4484954798eecfa1eee79c5d032e08835339b9d33909187b48a6f9188ff933; candidate object SHA-256 c2c9125d3102529f17241692951464c5f4636d1a76ba25115602bb1dcb3e2916.
- GitHub Issue: #9265 (https://github.com/soldieg/ReBLACK-XBOX/issues/9265).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
