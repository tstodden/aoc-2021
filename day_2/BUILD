cc_library(
    name = "lib",
    srcs = [
        "input.cc",
        "position.cc",
    ],
    hdrs = [
        "input.h",
        "position.h",
    ],
)

cc_binary(
    name = "part_1",
    srcs = ["part_1.cc"],
    data = ["input.txt"],
    deps = [":lib"],
)

cc_binary(
    name = "part_2",
    srcs = ["part_2.cc"],
    data = ["input.txt"],
    deps = [":lib"],
)

cc_test(
    name = "unit",
    size = "small",
    srcs = ["position_test.cc"],
    deps = [
        ":lib",
        "@com_google_googletest//:gtest_main",
    ],
)
