# ReBLACK-XBOX — BLACK Xbox Reconstruction

This repository publishes an AI-assisted, human-directed reconstruction of *BLACK* for the original Xbox. It contains 13,675 function candidates and one XBE entry-point source, with a matching evidence note for each source.

## 1. Xbox reconstruction

The C and x86 assembly files are reverse-engineered reconstructions of code observed in the Xbox executable; they are not the game's recovered original source. The published snapshot was built and compared against recorded XBE candidate ranges. All 13,676 candidate ranges matched byte-for-byte after relocation replay. The archived reports also record two boundaries without independent confirmation and 16 ObjDiff cases in the review band. These static results do not establish a complete semantic decompilation, an Xbox-linked XBE, runtime behavior, or gameplay.

The work used XboxRecomp for XBE-aware parsing and splitting, Ghidra and REA for supported static analysis, and MSVC x86 plus ObjDiff for compilation and comparison. Reconstruction and documentation were produced with AI assistance under human project direction and review. Tool and evidence details are in [`docs/REFERENCES.md`](docs/REFERENCES.md).

- [Reconstructed function sources](reconstructions/functions/)
- [Per-function evidence notes](reconstructions/evidence/)
- [How sources map to evidence](reconstructions/README.md)
- [Complete source package, build instructions, and validation reports](reconstructions/codigo-completo/README.md)

## 2. PC port

The next project is the native PC port, maintained separately in [Project ReBlack](https://github.com/soldieg/Project-ReBlack). This repository remains the Xbox reconstruction and evidence base.
