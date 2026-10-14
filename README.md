# ReBLACK — Xbox

ReBLACK is an ongoing research and engineering project focused on the original Xbox version of *BLACK*. The work combines XBE analysis, function-level reconstruction, isolated validation, and research toward a playable recompilation.

This public repository is the project's status and planning hub. It is not a mirror of the local analysis workspace.

## Current status

The local workspace contains a preserved game copy and a substantial analysis base: XBE metadata and disassembly, 13,676 split function files, two distinct generated-lift snapshots, 82 manually reconstructed C function files, 12 isolated function harnesses, and 10 standalone object files. These artifacts support targeted analysis; they do not constitute recovered original source or a complete game build.

See [PROJECT_STATUS.md](PROJECT_STATUS.md) for the inventory and evidence boundaries, and [ROADMAP.md](ROADMAP.md) for the proposed next steps.

## Tooling

- **XboxRecomp** provides the XBE-oriented parser, split, and recompilation tools used for this project's Xbox binary workflow.
- **REA** is the required reverse-engineering evidence workflow where its operations support the target and question.
- **Ghidra** is available for compatible formats. The project's XBE should not be sent through Ghidra without separately verified loader support.

## Public-content scope

This repository contains project notes and status only. It does not distribute the game executable, disc image, extracted game assets, generated lifts, or reconstructed game code. The local workspace remains the source for those materials.

## decomp.dev

The decomp.dev dashboard integration is pending. It expects a supported progress report from GitHub Actions; the project has not yet established a trustworthy matching metric or report generator. See [DECOMP_DEV.md](DECOMP_DEV.md).
