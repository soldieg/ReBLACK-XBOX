# Documentation

Quick entry points for the ReBlack Xbox project.

- [Project status](../PROJECT_STATUS.md) — current local workspace, evidence boundaries, and integration state.
- [Roadmap](../ROADMAP.md) — planned work and priorities.
- [Progress dashboard](https://soldieg.github.io/ReBLACK-XBOX/) — function-size map and objdiff snapshot.
- [Contribution guide](CONTRIBUTING.md) — how to propose a function task and submit a reconstruction.
- [Reconstruction log](RECONSTRUCTION_LOG.md) — dated technical updates moved out of the root README.
- [References and tools](REFERENCES.md) — related projects, analysis tools, and assistance used.
- [decomp.dev history](../DECOMP_DEV.md) — background on the former external report flow and its replacement.

## Working method

1. Select the next small function or dependency group from the local Xbox queue. Keep callers, callees, aliases, and shared-state writers together when they affect the same behavior.
2. Use XboxRecomp for XBE-aware parsing, splitting, and recompilation work; use REA for supported reverse-engineering analysis and evidence. Treat them as paired sources: compare REA findings with the XBE bytes and XboxRecomp split. A rejected XBE or unsupported provider is not a completed REA decompilation.
3. Trace bytes, instructions, callers, data, and relevant state before writing or changing a C reconstruction.
4. Recreate the behavior in C, then review each read, write, call, branch, and return against the evidence. Compile with the Xbox target toolchain when its ABI and build context are known.
5. Validate at the strongest available level. Keep static review, isolated compilation, byte-for-byte build/diff, Xbox linking, runtime observation, and visible gameplay separate. If a function depends on an unresolved caller, callee, table, or shared state, record that dependency and leave the stronger validation pending.
6. Save the function reconstruction, source identity, hashes, evidence links, validation results, and queue update in the local workspace. Only update the public progress report after a reviewed report snapshot is ready.

## Evidence labels

- **Static reconstruction:** C was reviewed against saved instruction-level evidence; this alone does not establish binary equivalence.
- **Isolated compile:** the reconstructed C compiles in the stated toolchain and context; this alone does not establish integration with the Xbox executable.
- **Exact byte diff:** the compiled body matches the recorded XBE span byte for byte under the recorded build settings.
- **Xbox link/runtime/gameplay:** integration and behavior were checked at the corresponding level. Do not infer these from static or byte-diff evidence.

The repository dashboard is an incomplete XboxRecomp split-candidate snapshot. Its exact/fuzzy matching values are separate from the local reconstruction tracker and are not a whole-game completion percentage.

- [Historical decomp.dev report notes](DECOMP_DEV_HISTORY.md)
