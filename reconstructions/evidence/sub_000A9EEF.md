# sub_000A9EEF

- Manifest: lot 106, position 68; address order. Candidate span: 20 bytes (0x000A9EEF to exclusive end 0x000A9F03).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x99EEF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9926F. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 9e579e34144795d65b13072d92e28713aa24cd9745fd7c323696ade7d7a0e803.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 947add48a91238f6b0a5a3e3db2a222696d92848a672b16e25b1d9d096f64b1a; compiled object SHA-256 3ad45b8d804cf285c508eb3d303b46cb3d3bf9100f154e1070745ec18dcb82d3; candidate object SHA-256 defbd78badcd823a753957a05dca22ef0adcbc111c8a412d99fe02af4358240f.
- GitHub Issue: #9896 (https://github.com/soldieg/ReBLACK-XBOX/issues/9896).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
