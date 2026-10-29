# sub_0013CEA0

- Manifest: lot 120, position 78; address order. Candidate span: 21 bytes (0x0013CEA0 to exclusive end 0x0013CEB5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CEA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12C220. REA read_bytes evidence ev_98015a7cb746a8cdc58120b57b38caecb25e131ca8df8ca9a19e8d0525b5fe7f returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 c36a7367bcc69536c4f783c39a3e5e6ddae638f2be6da37a194a07b04c81695e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 35b044e554787038a52fa4e997d213f09731d759e496d8144557a65bed45fa46; compiled object SHA-256 d5415711fbedc829d12f7657c2dd2238616375ea822dba8451a7e0447b2cf156; candidate object SHA-256 ee010eacbd9296405c685d29d3774eec8d1541a9b5955aae900cd32f7fa8b20c.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
