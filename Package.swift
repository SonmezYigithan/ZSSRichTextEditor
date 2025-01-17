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
            path: "Source",
            sources: ["Core"],
            resources: [
                .process("Images"),
                .process("editor/editor.html"),
                .process("editor/jQuery.js"),
                .process("editor/JSBeautifier.js"),
                .process("editor/ZSSRichTextEditor.js")
            ],
            publicHeadersPath: "include/ZSSRichTextEditor",
            cSettings: [
                .headerSearchPath("Core")
            ]
        )
    ]
)
