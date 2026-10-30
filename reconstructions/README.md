# Reconstructed sources and evidence

This folder pairs each reconstructed source with its function-specific evidence note.

| Purpose | Folder | Contents |
|---|---|---|
| Reconstructed code | [`functions/`](functions/) | 13,676 separate C translation units, keyed by candidate address. |
| Explanation and evidence | [`evidence/`](evidence/) | 13,676 Markdown notes with the corresponding candidate, boundary/byte evidence, compiler and comparison record, and limitations. |
| Combined package | [`codigo-completo/`](codigo-completo/) | Continuous source listing, source ZIP, CMake build, ObjDiff and byte comparison reports. |

The pairing uses the function name: `functions/sub_00011000.c` corresponds to `evidence/sub_00011000.md`. Each note records the evidence available for that source at the time it was prepared. Issue and batch references in those notes are historical provenance, not live project status.

These are reverse-engineered source reconstructions, including address-pinned x86/assembly bodies. They should not be read as recovered original source or as proof that every function has a complete semantic model. Byte matching, compilation, ObjDiff, Xbox linking, and runtime are separate validation levels; see the package reports and each note for the exact scope.
