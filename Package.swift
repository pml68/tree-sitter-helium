// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "TreeSitterHelium",
    products: [
        .library(name: "TreeSitterHelium", targets: ["TreeSitterHelium"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterHelium",
                path: ".",
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries"),
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")]
        )
    ]
)
