# sub_000BE5A0

- Manifest: lot 108, position 99; address order. Candidate span: 6 bytes (0x000BE5A0 to exclusive end 0x000BE5A6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE5A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAD920. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 d4bfae29cacde5faa47ebcfd9eba38f2cda5f3f538dc79588045890ac39a6970.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 5841570077539d24374f2c65c9d02d571f914f08d3126d6b6ee188282903a7af; compiled object SHA-256 93c37dd26bedd911567116c4313c647022e113b7d966ac5e49bfe598026f9298; candidate object SHA-256 3ef4a065af301292f8d48e22f425adc917942c401340df04e0969de7156619da.
- GitHub Issue: #10112 (https://github.com/soldieg/ReBLACK-XBOX/issues/10112).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
