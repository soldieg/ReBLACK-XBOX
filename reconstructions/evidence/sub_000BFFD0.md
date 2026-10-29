# sub_000BFFD0

- Manifest: lot 110, position 16; address order. Candidate span: 19 bytes (0x000BFFD0 to exclusive end 0x000BFFE3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFFD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF350. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 3e491db6fe4291d7411f25bc911c5648cbdd76025b1310407c14d571997a6f64.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 58f88f214bf208c3b8ef85f936e694c9d882662847b1e371d505e9c5b8baf5aa; compiled object SHA-256 ca711e8fba74e7a09d56c2c255680a2c203c368d29e2f0fbad02788cbd8db53a; candidate object SHA-256 926ea54f5ba4553bd1731dcdc50c8b7b9cec23494093d52155067d6d845e7888.
- GitHub Issue: #10208 (https://github.com/soldieg/ReBLACK-XBOX/issues/10208).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
