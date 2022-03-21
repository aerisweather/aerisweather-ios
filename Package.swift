// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "AerisWeather",
    defaultLocalization: "en",
    platforms: [
        .iOS(.v10),
        .tvOS(.v10)
    ],
    products: [
        .library(name: "AerisCore", targets: ["AerisCore"]),
        .library(name: "AerisCoreUI", targets: ["AerisCoreUI"]),
        .library(name: "AerisWeatherKit", targets: ["AerisWeatherKit"]),
        .library(name: "AerisMapKit", targets: ["AerisMapKit"])
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
