cc_library(
    name = "lib",
    srcs = ["example.cc"],
    hdrs = ["example.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":lib"],
)

cc_test(
    name = "unit",
    size = "small",
    srcs = ["example_test.cc"],
    deps = [
        "//example:lib",
        "@com_google_googletest//:gtest_main",
    ],
)
