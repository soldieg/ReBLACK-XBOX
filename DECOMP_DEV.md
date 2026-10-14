# decomp.dev integration status

**Status:** pilot blocked before comparison; project not registered; no progress-report workflow is configured.

The XboxRecomp XBE parser accepted the local Black retail XBE (title ID `0x45410083`, XDK 5849). REA rejected this XBE format, so it supplied no independent analysis.

A candidate function has a manual C reconstruction and a local compiled object, but the pilot did not establish a genuine relocatable target object from the XBE or verify that the local object was built from that exact source. No compiler or objdiff CLI is available in the current environment. Therefore no target/base comparison or objdiff report was produced.

The existing function counts, generated lifts, harnesses, and manual reconstructions are not a verified byte-matching metric. This repository does not publish a completion percentage or placeholder report.

To resume, establish a reproducible method for producing a genuine objdiff-supported target object and a provenance-verified base object for one exact XBE function. Keep both objects local under the project's compilation folder, run and review the comparison, and only then define a report workflow. Until that gate passes, this GitHub repository remains the public project-status hub. The optional decomp.dev GitHub App does not generate project-progress reports by itself.
