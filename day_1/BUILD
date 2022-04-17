cc_library(
    name = "lib",
    srcs = [
        "input.cc",
        "window.cc",
    ],
    hdrs = [
        "input.h",
        "window.h",
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
