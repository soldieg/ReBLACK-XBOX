# Contributing function reconstructions

Use the public progress dashboard to find a candidate, then use the repository Issue and pull request flow below. Issues organize and review work; they are not a place to upload game data or submit code as an unstructured comment.

## 1. Find or propose a function

1. Search the [progress dashboard](https://soldieg.github.io/ReBLACK-XBOX/) for a candidate ID. Filter or zoom by size, select a block, and review its byte-match status and active task/issues. The size filters enlarge the selected size range; they do not imply that one candidate contains another.
2. Check [existing function Issues](https://github.com/soldieg/ReBLACK-XBOX/issues?q=is%3Aissue+label%3Afunction-task) to avoid duplicate work.
3. If there is no suitable Issue, select the candidate in the dashboard and use **Claim this function** to open a pre-titled Function task Issue. Include the candidate ID, known address range and size, related callers/callees or shared state, and links to public evidence. An open task Issue marks the candidate blue. Maintainers curate the high-priority list in [`docs/data/function-priorities.json`](data/function-priorities.json); it is separate from claimed work.
4. Wait for a maintainer to confirm the function identity, boundaries, dependencies, and whether the task is ready. Dashboard split candidates can have heuristic boundaries; an Issue does not make those boundaries authoritative.

## 2. Reconstruct and submit

1. Work from a copy of the game you are authorized to use. Keep the Issue focused on task metadata and discussion.
2. Add one source file per function at `reconstructions/functions/<function-id>.c` and its evidence summary at `reconstructions/evidence/<function-id>.md`. Use the Issue ID/address in each filename; submit both in your pull request.
3. Open a PR linked to the Issue. Complete the PR template with compiler/toolchain version, target ABI, options, reproducible steps, evidence references, and one status row per function.
4. For a batch, report every function independently. A function with unresolved dependencies or missing evidence stays pending while independently reviewable functions can be assessed separately.

## 3. Evidence and review states

- **Static review:** the reconstruction was compared instruction by instruction with the recorded analysis evidence.
- **Compile:** the source compiled in the stated target context; this alone does not show binary equivalence.
- **Exact byte diff:** the compiled function body matches the documented target range byte for byte under the recorded settings.
- **Xbox link/runtime:** integration or behavior was observed at the corresponding level. Do not infer it from static review or a byte diff.
- **Approximate or pending:** similarity is not exact equivalence; missing boundaries, dependencies, toolchain details, or evidence remain explicit.

Maintainers review submissions and update the progress report only when the evidence supports the reported status. A pull request is not automatically accepted because it builds or has a high similarity score.

## Review an existing reconstruction

Use the dashboard's **Report a problem or suggest an improvement** action to open a Function review Issue. An unresolved review Issue marks the candidate red and links the report to that function. Red means review requested, not that an error has been confirmed. A maintainer must inspect the report and its evidence. If the report is confirmed, update the official progress record, add the `review-accepted` label, and close the Issue. If it is not confirmed, add `review-declined` and close it. Closing without a maintainer decision label leaves the candidate red. The existing exact-byte record remains visible while a review is pending.

## Submission limits

Do not include game files, extracted executable/data binaries, target byte dumps, local filesystem paths, credentials, or other private material in Issues or pull requests. Share public evidence IDs/links and your reconstruction source instead. Do not claim runtime or whole-game completion without evidence at that level.
