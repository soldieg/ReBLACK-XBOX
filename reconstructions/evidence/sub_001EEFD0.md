# sub_001EEFD0

- Manifest: lot 140, position 23; selected in ascending candidate order for lot 106. Candidate span: 4479 bytes (0x001EEFD0 to exclusive end 0x001F014F).
- Boundary: Ghidra 12.1.3 procedure entry 0x001EEFD0, sum of disassembled body bytes 4473, span 4479 bytes across ranges 001eefd0-001efa19;001efa20-001f014e. Direct incoming call-reference export: 1; callers: 001f027a@001f0210. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1DEFD0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1DE350. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 1a6075cd55090f619fd212d9a1fbf5e579d5de36e4c46e24e64a209ba760e6f3. REA read_bytes evidence ev_619f070386dfbab30fe0fc96dd6d70e8b95727c4c80dde030de1f17a2a8fdc31 returned 4479 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 4479 bytes.
- Source SHA-256 5f8f37b75fcd04642b1e6b337c39b1c7d931af9f34cf2d03ec31a9fa2c9c3b3a; fresh object SHA-256 5b66182ef3e22e23e82b97d80bf2ee3d3aabe6ed051773ca367a82d179f45250; candidate object SHA-256 011dc36f8b436dbd91048b832004c31a026ee92f6815e1552f2014e022fd83d0.
- GitHub Issue: #9306 (https://github.com/soldieg/ReBLACK-XBOX/issues/9306).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 140 manifest candidate evidence (2026-10-29)

- Manifest: lot 140, position 23; address order. Candidate span: 4479 bytes (0x001EEFD0 to exclusive end 0x001F014F).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001f027a@001f0210. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1DEFD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1DE350. REA read_bytes evidence ev_55693e810fd658188b79fd122226fca2d6a1ebcb2a0af7686755755b86713e23 returned 4479 bytes. XBE raw = derived PE = split = REA; span SHA-256 1a6075cd55090f619fd212d9a1fbf5e579d5de36e4c46e24e64a209ba760e6f3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4479 bytes.
- Source SHA-256 5f8f37b75fcd04642b1e6b337c39b1c7d931af9f34cf2d03ec31a9fa2c9c3b3a; compiled object SHA-256 c38bc35481d2f4827762bbae286beb22c98f757f134864d2c6ff1bc9a0ba8060; candidate object SHA-256 011dc36f8b436dbd91048b832004c31a026ee92f6815e1552f2014e022fd83d0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
