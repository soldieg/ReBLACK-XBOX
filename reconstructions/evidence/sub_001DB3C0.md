# sub_001DB3C0

- Manifest: lot 139, position 81; selected in ascending candidate order for lot 106. Candidate span: 163 bytes (0x001DB3C0 to exclusive end 0x001DB463).
- Boundary: Ghidra crosswalk has no procedure at 0x001DB3C0. Boundary basis: preserved-register prologue, terminal RET, and a pointer to the entry in .rdata (raw file offset 0x27CE98); direct incoming-call export: 0. This does not resolve indirect callers or ABI.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1CB3C0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1CA740. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 7a2e5bdc439970a3d8986e87788a35c493b49d292b5d39b6fa010f3e5d84e845. REA read_bytes evidence ev_aef03e3b3c4fbfb3fbe53132ea7cc74112ebcf8395f49126a609d2bd4afe09d2 returned 163 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 163 bytes.
- Source SHA-256 8cf3ba8df507bce62661ed9e7ca08987985dcbdb010c9320717f48105f7ab4a0; fresh object SHA-256 9ee14160e697a5dd2a37c01329580df82c89c280b41fdfe77020b2ae4f9c69b8; candidate object SHA-256 cc55d39cad66d4e3bb5aaa4f63245c024ef50908f42e620c0d1add66daea9778.
- GitHub Issue: #9290 (https://github.com/soldieg/ReBLACK-XBOX/issues/9290).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 81; address order. Candidate span: 163 bytes (0x001DB3C0 to exclusive end 0x001DB463).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1CB3C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1CA740. REA read_bytes evidence ev_727d7f30e1853ef77a8790f07f2202316f7f5054a19f1686c2cfa1ce3a481e59 returned 163 bytes. XBE raw = derived PE = split = REA; span SHA-256 7a2e5bdc439970a3d8986e87788a35c493b49d292b5d39b6fa010f3e5d84e845.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 163 bytes.
- Source SHA-256 8cf3ba8df507bce62661ed9e7ca08987985dcbdb010c9320717f48105f7ab4a0; compiled object SHA-256 86e2ffbc6a0137aff26c244ef2ea131bc58c649e033f1c554423783de86bf4f3; candidate object SHA-256 cc55d39cad66d4e3bb5aaa4f63245c024ef50908f42e620c0d1add66daea9778.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
