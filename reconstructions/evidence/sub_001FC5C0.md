# sub_001FC5C0

- Manifest: lot 144, position 5; address order. Candidate span: 5 bytes (0x001FC5C0 to exclusive end 0x001FC5C5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1EC5C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EB940. REA read_bytes evidence ev_fe524d850cd63f55cf3d89c12a9db8594e6c1433f26f72103e42a57e1d4c4cb1 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 9e8d372603206354c7972e6e70aa9283e61687e21a8377ebd5dccfff49102788.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 1b928b585a49dff5acd90e0f334a363676d4f3f653e245c83341d56f8efa2ef9; compiled object SHA-256 88e146457b1fd603b6e22ac73ee32beb2abd05f8b3f3b2c2a8fb5b821a12664f; candidate object SHA-256 f7618fc7a66d3930c97d0576b8bb138d1c05bcef9516ddb2073a3efc5b81e37e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
