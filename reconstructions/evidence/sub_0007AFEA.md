# sub_0007AFEA

- Manifest: lot 104, position 51; address order. Candidate span: 2253 bytes (0x0007AFEA to exclusive end 0x0007B8B7).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x6AFEA; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x6A36A. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 2253 bytes. XBE raw = derived PE = split = REA; span SHA-256 a7e0e55b5255ce92773ed015fde96a83424cd86039d84e402725716978e7cc83.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 2253 bytes.
- Source SHA-256 76250c44a58608e874252147349ee76539912d30cb1b8bfc704d14ce09e49dbe; compiled object SHA-256 501eada889e6bb295ce95ab6c374583d4d829061f9d0545baefb401607f99e10; candidate object SHA-256 978b251864dc0dfcf236b26dad81e387a7630e93bb68d070c70c77ebb3cd18da.
- GitHub Issue: #9705 (https://github.com/soldieg/ReBLACK-XBOX/issues/9705).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
