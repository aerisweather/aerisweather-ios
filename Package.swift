// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "AerisWeatherKit",
    defaultLocalization: "en",
    platforms: [.iOS(.v10)],
    products: [
        .library(name: "AerisWeatherKit", targets: ["AerisWeatherKit"]),
        .library(name: "AerisMapKit", targets: ["AerisMapKit"])
    ],
    dependencies: [
        .package(name: "AerisCore", path: "lib/AerisCore.xcframework"),
        .package(name: "AerisCoreUI", path: "lib/AerisCoreUI.xcframework")
    ],
    targets: [
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
