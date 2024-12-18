// swift-tools-version:5.5

import PackageDescription

//let package = Package(
//    name: "ZSSRichTextEditor",
//    defaultLocalization: "en",
//    platforms: [
//        .iOS(.v12)
//    ],
//    products: [
//        .library(
//            name: "ZSSRichTextEditor",
//            targets: ["ZSSRichTextEditor"]
//        ),
//    ],
//    targets: [
//        .target(
//            name: "ZSSRichTextEditor",
//            path: "Source",
//            publicHeadersPath: ".",
//            cSettings: [
////                .headerSearchPath("Editor"),
//                .define("SPM_SUPPORTED", to: "1")
//            ]
//        )
//    ]
//)

let package = Package(
    name: "ZSSRichTextEditor",
    platforms: [ 
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "ZSSRichTextEditor",
            targets: ["ZSSRichTextEditor"]
        ),
    ],
    targets: [
//        .target(
//            name: "ZSSRichTextEditor_ObjC",
//            path: ""
//        ),
        .target(
            name: "ZSSRichTextEditor",
            path: "Sources",
            resources: [
                .process("icons")
            ],
            publicHeadersPath: "include"
//            cSettings: [
//                .headerSearchPath("include")
//            ]
        )
    ]
)
