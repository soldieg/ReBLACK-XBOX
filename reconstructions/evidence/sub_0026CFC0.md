Candidate sub_0026CFC0 — manifest lot 151, position 27; span 98 bytes.

Source is an exact-byte emitter; semantic C reconstruction remains pending.
Ghidra analysis evidence ev_b340d827b8af0a1f5f626ea880fae8e66ce228862824fa66615189bf6aac7823: body 90 bytes across 2 ranges (0x26cfc0-0x26cff7 and 0x26d000-0x26d021), span 98 bytes; relationship coverage partial, one resolved callee (0x26D0C0) and zero unresolved direct calls. Ghidra has no procedure for caller 0x26BBAB; its instruction at 0x26BBAB was confirmed as a direct call to this candidate.
REA byte-read evidence ev_772ff7147f5a2c229829812d05b54a666dce1e866fe9fa67cad7098fd8442f14 returned the complete 98-byte span and matches the XboxRecomp split bytes.
MSVC x86 compilation passed. ObjDiff 3.8.2: function 100.00%, .text$mn 100.00% (98 bytes).
Source SHA-256 fca233b759d29f167de8edc98091468202f1d27cf05cefb192ac6cc0e2b13ec6.
