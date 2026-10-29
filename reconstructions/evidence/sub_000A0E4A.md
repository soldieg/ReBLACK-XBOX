# sub_000A0E4A

- Manifest: lot 105, position 91; address order. Candidate span: 844 bytes (0x000A0E4A to exclusive end 0x000A1196).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x90E4A; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x901CA. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 844 bytes. XBE raw = derived PE = split = REA; span SHA-256 75e8bf589bccdbfc8862de22bd84e4e8a729653fb046b777e60d5e96d9b51779.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 844 bytes.
- Source SHA-256 77be90334072ad28c0849ef7446d17aa759fa5cf177ecb1079ee2563bcbea478; compiled object SHA-256 78e7d54358cbabb647b9a9503406c52160d677203e3a326fa07ef79653bac5b0; candidate object SHA-256 80e60084d5af67896e9fe782266339b5cf0c898e2f702181cf833158a42e2151.
- GitHub Issue: #9829 (https://github.com/soldieg/ReBLACK-XBOX/issues/9829).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
