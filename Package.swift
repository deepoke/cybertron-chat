// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "cybertron",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "cybertron",
            targets: ["cybertron"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "cybertron",
            url: "https://github.com/deepoke/cybertron-chat/releases/download/1.0.17/cybertron-1.0.17.zip",
            checksum: "2a24e0b919d6ef84a9f62aa7c90350c6b30e388dba79e1358d4ea1c1afe66100"
        ),
    ]
)
