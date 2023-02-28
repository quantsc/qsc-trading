# Contributing

Contributions are welcome, and they are greatly appreciated. Every little bit
helps, and credit will always be given.

## Types of Contributions

- **Report Bugs:** Refer to the
  [Issue Tracker](https://github.com/quantsc/qsc-trading/issues). Please
  include details such as operating system, Python version, and ribs version,
  as well as detailed steps to reproduce the bug.
- **Fix Bugs:** Look through the Issue Tracker for bugs. Anything tagged with
  "bug" and "help wanted" is open to whoever wants to implement it.
- **Propose features:** To request new features in the trading system, submit
  a Feature Request on the Issue Tracker. In the request, please:
  - Explain in detail how the feature would work.
  - Keep the scope as narrow as possible, to make the features easier to
    implement.
- **Implement Features:** Look through the Issue Tracker for features. Anything
  tagged with "enhancement" and "help wanted" is open to whoever wants to
  implement it.

## Development

Ready to contribute? Here's how to set up for local development.

1. [Fork](https://github.com/qsc/qsc-trading/fork) the repo on GitHub.
1. Clone the fork locally:

   ```bash
   # With SSH:
   git clone git@github.com:USERNAME/qsc-trading.git

   # Without SSH:
   git clone https://github.com/USERNAME/qsc-trading.git
   ```

1. Install the local copy and dev requirements into an environment.

TODO

1. Create a branch for local development:

   ```bash
   git checkout -b name-of-bugfix-or-feature
   ```

   Now make the appropriate changes locally.

   - Please follow the
     [Google Style Guide](https://google.github.io/styleguide/cppguide.html)
     (particularly when writing comments).
   - Make sure to auto-format the code using clang-format. We highly recommend
     installing an editor plugin that auto-formats on save, but clang-format
     also runs on the command line:

     ```bash
     clang-format -i FILES
     ```

1. After making changes, check that the changes pass the tests:

   Finally, to lint the code:

1. Add your change to the changelog for the current version in `HISTORY.md`.

1. Commit the changes and push the branch to GitHub:

   ```bash
   git add .
   git commit -m "Detailed description of changes."
   git push origin name-of-bugfix-or-feature
   ```

1. Submit a pull request through the GitHub website.

## Pull Request Guidelines

Before submitting a pull request, check that it meets these guidelines:

1. Style: Code should follow the
   [Google Style Guide](https://google.github.io/styleguide/cppguide.html) and be
   auto-formatted with [clang-format](https://clang.llvm.org/docs/ClangFormat.html).
1. The pull request should include tests.
1. If the pull request adds functionality, corresponding comments and other
   documentation should be updated.

## Instructions

### Running a Subset of Tests

### Documentation

### Referencing Papers

When referencing papers, refer to them as `Lastname YEAR`, e.g. `Smith 2004`.
Also, prefer to link to the paper's website, rather than just the PDF. This is
particularly relevant when linking to arXiv papers.
