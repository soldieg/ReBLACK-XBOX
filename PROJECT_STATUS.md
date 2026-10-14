# Project status

**Snapshot date:** 2026-10-14  
**State:** analysis foundation and tooling are in place; function-level reconstruction continues. A complete game recompilation has not been established by the artifacts listed here.

## Work present in the local workspace

- A preserved copy of the original Xbox game and a documented XBE identity/integrity check.
- Structural XBE analysis: headers, sections, imports, strings, references, ABI estimates, function catalog, and disassembly.
- **13,676** split function assembly files, preserving instruction/byte evidence.
- Two unique XboxRecomp-generated C lift snapshots. These are approximate instruction translations, not original source.
- **82** manually reconstructed C function files, each requiring its associated evidence and review notes.
- **12** isolated function harnesses and **10** standalone object files. These validate narrow contracts and do not prove whole-level or gameplay behavior.
- A local XboxRecomp tool snapshot, REA CLI 6.4.0, and Ghidra 12.1.4 for compatible targets. The XBE workflow uses XboxRecomp; Ghidra's acceptance of this XBE is not assumed.

## What the inventory does not prove

- Complete recovery of the game's original source.
- A full executable rebuild or binary equivalence.
- Correct behavior across a complete level or gameplay session.
- That generated C lifts preserve all original semantics.

## Working approach

1. Select a specific function or subsystem and state the question to answer.
2. Use XboxRecomp's XBE-aware tools for XBE parsing, splitting, and recompilation work. Use REA for supported analysis and to retain evidence; record any unsupported operation explicitly.
3. Trace the function from bytes/instructions through callers, data, and observed behavior before changing a reconstruction.
4. Keep original artifacts, generated lifts, manual reconstructions, and harnesses distinct and traceable by source identity and hash.
5. Report the evidence level clearly: static analysis, isolated harness, process/runtime observation, or visible gameplay.

## Current integration state

- The public GitHub repository is intended to hold status and planning documents, not a copy of the local game-data workspace.
- decomp.dev registration/reporting is pending a project-specific, verifiable progress metric and compatible GitHub Actions report.
