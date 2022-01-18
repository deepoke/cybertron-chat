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
            url: "https://github.com/airtimemedia/cybertronSDK/blob/master/cybertron-1.0.17.zip",
            checksum: "f75e0c826c5ac6b772c71315d81180cb979faf2597fc9cfe305603af52eaf162"
        ),
    ]
)
