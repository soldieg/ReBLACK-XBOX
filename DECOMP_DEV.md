# decomp.dev integration status

**Status:** not registered; no progress report workflow is configured.

The upstream [decomp.dev project](https://github.com/encounter/decomp.dev) describes a decompilation progress dashboard and GitHub bot. Its dashboard ingests progress reports from GitHub Actions artifacts. The associated [GitHub App](https://github.com/apps/decomp-dev) sends workflow-completion notifications and can add configured PR comments.

The local BLACK/Xbox workspace currently has inventories, generated lifts, manual reconstructions, and isolated harnesses. Those counts alone are not a valid byte-matching metric. This repository therefore does not publish a fabricated completion percentage or a placeholder objdiff report.

Before enabling dashboard reporting, define and verify a metric that maps the project's real work to the report format accepted by decomp.dev, then add a workflow that produces that report. Until then, this GitHub repository remains the public project-status hub; the optional GitHub App does not itself generate or interpret project-progress reports.
