# sub_001FACA0

- Manifest: lot 143, position 95; selected in ascending candidate order for lot 106. Candidate span: 985 bytes (0x001FACA0 to exclusive end 0x001FB079).
- Boundary: Ghidra 12.1.3 procedure entry 0x001FACA0, sum of disassembled body bytes 982, span 985 bytes across ranges 001faca0-001fad8c;001fad90-001fb078. Direct incoming call-reference export: 0; callers: none listed in the direct-reference export. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1EACA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1EA020. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 a61201732053a00d4d4ddfe99e04b0eefc5f3fc58e6291aea6b5ef4dd5335b66. REA read_bytes evidence ev_d604da1c88183e37eebc3bfdd26ff3cebfce79d4acb965c28afc538acd5533c9 returned 985 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 985 bytes.
- Source SHA-256 8508e43a38b8dded185cbd84c91573ee5e26816cf0b2081bc400c3ef13dfda7f; fresh object SHA-256 1e07c794dd3c8fbe46d8f686e2c95d64ed216f9f341569fd479b23673a09a4db; candidate object SHA-256 8321f6084d83776a5874a49f4e49efad3afd5aa31d6e28278c392df45d80ea3b.
- GitHub Issue: #9304 (https://github.com/soldieg/ReBLACK-XBOX/issues/9304).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
