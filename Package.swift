// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "AerisWeatherKit",
    defaultLocalization: "en",
    platforms: [.iOS(.v10)],
    products: [
        .library(name: "AerisCore", type: .dynamic, targets: ["AerisCore"]),
        .library(name: "AerisCoreUI", type: .dynamic, targets: ["AerisCoreUI"]),
        .library(name: "AerisWeatherKit", type: .dynamic, targets: ["AerisWeatherKit"]),
        .library(name: "AerisMapKit", type: .dynamic, targets: ["AerisMapKit"])
    ],
    targets: [
        .binaryTarget(
            name: "AerisCore",
            path: "lib/AerisCore.xcframework"
        ),
        .binaryTarget(
            name: "AerisCoreUI",
            path: "lib/AerisCoreUI.xcframework"
        ),
        .binaryTarget(
            name: "AerisWeatherKit",
            path: "lib/AerisWeatherKit.xcframework"
        ),
        .binaryTarget(
            name: "AerisMapKit",
            path: "lib/AerisMapKit.xcframework"
        )
    ]
)
