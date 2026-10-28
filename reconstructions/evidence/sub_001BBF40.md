# sub_001BBF40

- Function task: [#1484](https://github.com/soldieg/ReBLACK-XBOX/issues/1484).
- Function range from REA/Ghidra dossier: 0x001BBF40-0x001BBFBB inclusive, contiguous, 124 bytes.
- Function dossier evidence: ev_06c525396f565df5709ebf124cb45d700f819cd45032be6f4dee4aac2b32f3d3.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BBF40, 124 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BBF40.obj from the identified progress snapshot; SHA-256 7cde7c83ffb33d35b96b90ff8c0268fbe46aec531c470edcd636f94baa31cf28; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ABF40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AB2C0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 4059049d63468e5d95732291100ca6881368c75101ad6868aed83189f50558bf.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 124/124 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 93f52a1d0e760d4ef1c98327944946f8c0696196ff4f216bcfbf51c589302c4f.
- Compiled .text$mn SHA-256: 9e842a2932a643da7c64a52963da9554af7fccb8cc1441944f99deafc0451e84.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1484](https://github.com/soldieg/ReBLACK-XBOX/issues/1484); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_67a555228f35edf0f83d5d2e68201382ed8933f31e5013e8c6af1019b9ccf8d4`; complete REA byte-read Evidence: `ev_9454f89b724f9e0db3214e4c712e8ee5e0459ce96111d6a59b10da53d2e950f6`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 124 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `5f000c959c798b6e55caf1c648e153963ae4066e473291e18e8b6aeda16e87c9`; candidate COFF SHA-256: `7cde7c83ffb33d35b96b90ff8c0268fbe46aec531c470edcd636f94baa31cf28`; compiled COFF SHA-256: `be128c2aafa42ad3f1b0a46d40b9500097565c12928cc592798f1e1222aaaa2f`; ObjDiff report SHA-256: `0942ac32ece019c39594c3c3544aa4bc545728db4d92ab62420384abe7fe87b6`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
