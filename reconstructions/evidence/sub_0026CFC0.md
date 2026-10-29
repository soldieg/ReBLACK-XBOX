Candidate sub_0026CFC0 — manifest lot 151, position 27; span 98 bytes.

Source is an exact-byte emitter; semantic C reconstruction remains pending.
Ghidra analysis evidence ev_b340d827b8af0a1f5f626ea880fae8e66ce228862824fa66615189bf6aac7823: body 90 bytes across 2 ranges (0x26cfc0-0x26cff7 and 0x26d000-0x26d021), span 98 bytes; relationship coverage partial, one resolved callee (0x26D0C0) and zero unresolved direct calls. Ghidra has no procedure for caller 0x26BBAB; its instruction at 0x26BBAB was confirmed as a direct call to this candidate.
REA byte-read evidence ev_772ff7147f5a2c229829812d05b54a666dce1e866fe9fa67cad7098fd8442f14 returned the complete 98-byte span and matches the XboxRecomp split bytes.
MSVC x86 compilation passed. ObjDiff 3.8.2: function 100.00%, .text$mn 100.00% (98 bytes).
Source SHA-256 fca233b759d29f167de8edc98091468202f1d27cf05cefb192ac6cc0e2b13ec6.

## Lot 151 manifest candidate evidence (2026-10-29)

- Manifest: lot 151, position 27; address order. Candidate span: 98 bytes (0x0026CFC0 to exclusive end 0x0026D022).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 0026bbab@?. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x25D740; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x25C0E0. REA read_bytes evidence ev_2f597b6b7b0f251f22ddc1fa458d06a758b7d44a5a0634a332e25ab6980b7d1c returned 98 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae02755beeeea85b909ef0681c91f97d835ad3fbb5502d6799cac2c7f81e4718.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 98 bytes.
- Source SHA-256 4604ab0118ef8377b16e4ab9023092a43ff1a75ab38b05888a4f0e9eb3e36005; compiled object SHA-256 9a1ea18813aca983ab6cd54d1abb4aa10b6e4a87a597d1e9e0f889c4926d3317; candidate object SHA-256 5efb69d142b2ca5b07076ca5ebbbe4d8840f1b9f9e6a70a4b2b58a708816ab57.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
