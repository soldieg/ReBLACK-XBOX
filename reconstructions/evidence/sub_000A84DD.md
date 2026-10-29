# sub_000A84DD

- Manifest: lot 106, position 41; address order. Candidate span: 6 bytes (0x000A84DD to exclusive end 0x000A84E3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x984DD; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9785D. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 a4ee0815e3b14da08fa8a57ef6d83d216c510ffbb9fc148642fb791410bbecbb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 984003263bbdc306c9554afe91d084e957cb45c0ba02458f6201e957fe5510d7; compiled object SHA-256 e17c8b14fa369aecc633bc74f254b60c0e60b9bb021ed291f0cd6180fbf2262e; candidate object SHA-256 e9286ee4f8240b17ba07d8dd58f9ed43bcc92c0ae3cdb3378e5070b9de2f6917.
- GitHub Issue: #9873 (https://github.com/soldieg/ReBLACK-XBOX/issues/9873).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
