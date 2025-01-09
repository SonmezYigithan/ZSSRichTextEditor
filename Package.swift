// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "ZSSRichTextEditor",
    platforms: [
        .iOS(.v8)
    ],
    products: [
        .library(
            name: "ZSSRichTextEditor",
            targets: ["ZSSRichTextEditor"]
        ),
    ],
    targets: [
        .target(
            name: "ZSSRichTextEditor",
            path: "Sources",
            resources: [.process("Images")],
            publicHeadersPath: "Include"
        )
    ]
)
