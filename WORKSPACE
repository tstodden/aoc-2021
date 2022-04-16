# workspace attributes
workspace(
    name = "aoc",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# download rules_python
http_archive(
    name = "rules_python",
    sha256 = "9fcf91dbcc31fde6d1edb15f117246d912c33c36f44cf681976bd886538deba6",
    strip_prefix = "rules_python-0.8.0",
    url = "https://github.com/bazelbuild/rules_python/archive/refs/tags/0.8.0.tar.gz",
)

http_archive(
    name = "com_google_googletest",
    sha256 = "cbcbf200277828c80f1488e2215d81147e85142127449ff50b1413415a19e48b",
    strip_prefix = "googletest-80600e56cc9afe7ee02737429f9177aa87025054",
    urls = ["https://github.com/google/googletest/archive/80600e56cc9afe7ee02737429f9177aa87025054.zip"],
)
