# sub_001AD0A0

- Manifest: lot 134, position 3; selected in ascending candidate order for lot 106. Candidate span: 117 bytes (0x001AD0A0 to exclusive end 0x001AD115).
- Boundary: Ghidra crosswalk has no procedure at 0x001AD0A0. Boundary basis: preserved-register prologue, terminal RET, and a pointer to the entry in .rdata (raw file offset 0x27A5AC); direct incoming-call export: 0. This does not resolve indirect callers or ABI.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x19D0A0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x19C420. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 6ddc2aab6c65622c8e51a580e211290543884dad583a77e577bbd959ef3ff5a1. REA read_bytes evidence ev_147951ef7066b05740c8a71265102943926c0cbdbbbf0957d9ed81e0dc4f0bb3 returned 117 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 117 bytes.
- Source SHA-256 374e2d552605735e54318dbafc2aea74d8f252c9ac010b8ac97ca248f59e9061; fresh object SHA-256 73cb95e27616dd396633ac74f7da1560c6bd1d23b6d52884c11f7adf3ae9ac66; candidate object SHA-256 baab50ea842fdb18eaf1e88a3d7feb5d7eb2349d24a0ad661fcaf43899348330.
- GitHub Issue: #9257 (https://github.com/soldieg/ReBLACK-XBOX/issues/9257).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 134 manifest candidate evidence (2026-10-29)

- Manifest: lot 134, position 3; address order. Candidate span: 117 bytes (0x001AD0A0 to exclusive end 0x001AD115).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19D0A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x19C420. REA read_bytes evidence ev_09aa7b12e3e14a745b024d46ad60cabfe4fdddbc7f042b38e20c6ece352178fd returned 117 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ddc2aab6c65622c8e51a580e211290543884dad583a77e577bbd959ef3ff5a1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 117 bytes.
- Source SHA-256 374e2d552605735e54318dbafc2aea74d8f252c9ac010b8ac97ca248f59e9061; compiled object SHA-256 11c2ae59f0366be155a201681e569042badcc5893128c1aaaab59f481923dade; candidate object SHA-256 baab50ea842fdb18eaf1e88a3d7feb5d7eb2349d24a0ad661fcaf43899348330.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
