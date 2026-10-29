# sub_001D2DD0

- Manifest: lot 139, position 49; selected in ascending candidate order for lot 106. Candidate span: 325 bytes (0x001D2DD0 to exclusive end 0x001D2F15).
- Boundary: Ghidra 12.1.3 procedure entry 0x001D2DD0, sum of disassembled body bytes 322, span 325 bytes across ranges 001d2dd0-001d2dec;001d2df0-001d2f14. Direct incoming call-reference export: 1; callers: 001d5ddb@?. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1C2DD0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1C2150. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 707ffc5a913dcd4e6fc419335b70649d0a1c60afe07cc070ea267d151fa2e979. REA read_bytes evidence ev_9bd901c542776ae906a412859930d6620276e41a967487bb8b9c403308f2f2b9 returned 325 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 325 bytes.
- Source SHA-256 85b5bca2f90a69b4acfad8557a3f3db3b4d7f289006b53934547add07c69a357; fresh object SHA-256 38fdd5e91c05953b5c7da838fa08b609c440bf3c360798bcc2c0716f862133a1; candidate object SHA-256 dab699afd382dc054b28c56d5243697629c2413fed290bd22969157c86daed35.
- GitHub Issue: #9281 (https://github.com/soldieg/ReBLACK-XBOX/issues/9281).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 49; address order. Candidate span: 325 bytes (0x001D2DD0 to exclusive end 0x001D2F15).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001d5ddb@?. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1C2DD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1C2150. REA read_bytes evidence ev_884cd9966d100b0866f196de8adf832ed7b60483e63c155fdc7c9ef322746447 returned 325 bytes. XBE raw = derived PE = split = REA; span SHA-256 707ffc5a913dcd4e6fc419335b70649d0a1c60afe07cc070ea267d151fa2e979.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 325 bytes.
- Source SHA-256 85b5bca2f90a69b4acfad8557a3f3db3b4d7f289006b53934547add07c69a357; compiled object SHA-256 a7fca0d5ac2d4a88a38f4ce536ff147af865c81cd6549d3c6ce8d47c63d7eae8; candidate object SHA-256 dab699afd382dc054b28c56d5243697629c2413fed290bd22969157c86daed35.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
