# Project status

**Snapshot date:** 2026-10-16
**State:** analysis foundation and tooling are in place; function-level reconstruction continues. A complete game recompilation has not been established by the artifacts listed here.

## Work present in the local workspace

- A preserved copy of the original Xbox game and a documented XBE identity/integrity check.
- Structural XBE analysis: headers, sections, imports, strings, references, ABI estimates, function catalog, and disassembly.
- **13,676** split function assembly files, preserving instruction/byte evidence.
- Two unique XboxRecomp-generated C lift snapshots. These are approximate instruction translations, not original source.
- The XboxRecomp split tracker marks **331 function candidates complete** and **77 in progress** out of 13,676 split candidates (**2.42%** tracker-complete). This is a local static reconstruction status; build/diff and runtime validation are tracked separately and are not implied by this count.
- Current dependency group: `sub_000270FF`, `sub_0002721F`, `sub_00027240`, `sub_000272D3`, `sub_0002745E`, `sub_00027703`, `sub_00027C46`, `sub_00027D64`, `sub_00029770`, `sub_00028D21`, `sub_00027EEB`, and cleanup adapters `sub_00028F15` and `sub_00029640` have C/static review recorded. `2745E` and `27D64` close the helper path into `sub_000285B9`; the related free-path parent `sub_00028D34` is the next open item. The root allocator has a manual C draft under static review. A partial semantic review compared its major allocation, bin, split/coalescing, cleanup, and callback stages against the saved REA pseudocode without finding a concrete discrepancy; it is not an instruction-by-instruction proof. Focused static cross-checks confirm the SEH state transition into cleanup and the callback event/order and post-call result flow. A related free-path callsite uses the same dispatch slot with event 11, supporting the shared callsite shape without resolving the active object or ABI. Full C review and exact SEH frame/table reproduction remain pending. Isolated MSVC compilation passes for the recorded sources, but Xbox link/diff and runtime remain pending. `sub_000A5900` is complete at the static C-review level; `sub_000A3A37` has a reviewed C body but remains in progress until `sub_000285B9` is complete. `sub_000272D3`'s optional callback ABI remains an adapter.
- A separately validated subset includes 44 isolated function reconstructions that compiled and matched their recorded Xbox byte spans. Six still have unresolved global/table dependency groups; five other candidates failed byte comparison and are excluded from those exact-match results.
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
- The project is registered at [decomp.dev](https://decomp.dev/soldieg/ReBLACK-XBOX). GitHub Actions publishes an explicitly incomplete report over 13,676 XboxRecomp split candidates; 130 locally compiled reconstruction objects were compared, with 47 exact function matches (406 bytes, 0.0177% exact code). The 44 new local build-and-byte-diff results contributed 35 functions to objdiff exact totals; nine did not register as exact at split-object level.
- The local split static-review tracker (328 complete, 76 in progress as of 2026-10-16) is a separate progress measure and does not change the decomp.dev binary-match result.
- The report is not a complete linked-unit inventory: the split ranges include heuristic boundaries and 1,517 overlaps, and the broader detector produced 16,598 candidates. The 0.2113% fuzzy match is a candidate-snapshot measure, not whole-game completion. Six new reconstructions remain semantically pending because of shared global/table dependencies; all report units remain explicitly incomplete.
