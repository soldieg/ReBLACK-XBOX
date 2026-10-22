# `sub_0027EFA8`

- Related function task: [Issue #28](https://github.com/soldieg/ReBLACK-XBOX/issues/28).
- Function range: `0x0027EFA8–0x0027EFAC` (exclusive end); four contiguous bytes, two instructions.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- REA/Ghidra 12.1.4 (x86) evidence: function body `ev_3ba3416d57bcf10e1ce11eded6f657fd1958074654cd8125735d1854f8865f73`; assembly `ev_01fbd40164e6b19c72827ed21a19721db46ed4374962264b6fafc5e5591e4da4`; pseudocode `ev_0067415f732b8ce8eaec35a3c0d3621ccf300c3bb808ff189a5adee322ae9908`; analyzed bytes `ev_3978397bcac2a5a3f59d6a1dc45c61359a3ffb54876a7e37abfc4b0468c57a39`; PE source-file mapping `ev_47b0c799097c1f162e1ab8ce76ea0de6958df0cac961410b668abe04df364c30`.
- Observed behavior: reads the 32-bit field at `[ECX+0x1C]` into EAX, then returns. The example caller sets ECX from its object pointer and uses EAX as a pointer-like value. The source is an exact-byte emitter; its declaration is not a proven original C/C++ signature or complete semantic type.
- Caller evidence `ev_ced8d0ab90fac327046dd77909dd7e9f90d0e91d8c0773289bbd31b9a5dbbe4d`: 16 resolved callers, partial coverage with two unresolved incoming reference owners. Callees `ev_ac921c8868d678f9e1c1204c043d1c6ca4d00788ff329b1b247000044a4b07b6`: none resolved. Example caller assembly `ev_93eb74498508fbaeaa056fb7419bacea4f412ace60318f026e01a2901dc14019`.
- Boundary corroboration: the XBE section table maps this VA to XPP; the mapped original-XBE span, the REA-mapped PE span, the four-byte split entry, and the candidate assembly were checked independently. The split boundary method is `call_target` with heuristic confidence 0.90; no competing body owner was recorded.
- Compiler and version: MSVC 19.51.36260.0, x86; developer environment initialized with `VsDevCmd.bat -arch=x86 -host_arch=x64`.
- Target/build options: x86 emitter; `/TC /c /O2 /GS- /Zl /Gd /Gy`. ECX input/EAX output behavior is observed; the original C/C++ types and declaration are not proven.
- Reproduction: compile the source with `cl.exe /nologo /TC /c /O2 /GS- /Zl /Gd /Gy`; the compiled COFF `.text$mn` body is four bytes.
- Compile: passed.
- Exact byte diff: passed. The compiled body equals the mapped four-byte spans in the original XBE XPP section and the derived PE; the split reference identifies the same two instructions.
- ObjDiff 3.8.2: 100.00% for `_sub_0027EFA8` against the explicitly identified four-byte `sub_0027EFA8` target candidate object. This candidate object is a comparison reference, not an Xbox-linked object; the result is corroborative, while the direct body-byte comparisons are the exact-byte claim.
- Xbox full link/runtime: not run.
- Static self-review: passed for the observed register-level behavior and stated limits. Independent PR review: pending.

## Validation scope

The four-byte body is byte-identical across the compiled object, mapped target PE/XBE spans, and split reference. This does not prove the field's semantic type, a source-level prototype, full caller coverage, Xbox linking, or runtime behavior.
