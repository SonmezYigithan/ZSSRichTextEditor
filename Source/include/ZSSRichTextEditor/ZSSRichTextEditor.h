//
//  ZSSRichTextEditorViewController.h
//  ZSSRichTextEditor
//
//  Created by Nicholas Hubbard on 11/30/13.
//  Copyright (c) 2013 Zed Said Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "HRColorPickerViewController.h"
#import "ZSSFontsViewController.h"
#import "ZSSTextView.h"
/**
 *  The types of toolbar items that can be added
 */
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarBold = @"com.zedsaid.toolbaritem.bold";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarItalic = @"com.zedsaid.toolbaritem.italic";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarSubscript = @"com.zedsaid.toolbaritem.subscript";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarSuperscript = @"com.zedsaid.toolbaritem.superscript";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarStrikeThrough = @"com.zedsaid.toolbaritem.strikeThrough";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarUnderline = @"com.zedsaid.toolbaritem.underline";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarRemoveFormat = @"com.zedsaid.toolbaritem.removeFormat";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarJustifyLeft = @"com.zedsaid.toolbaritem.justifyLeft";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarJustifyCenter = @"com.zedsaid.toolbaritem.justifyCenter";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarJustifyRight = @"com.zedsaid.toolbaritem.justifyRight";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarJustifyFull = @"com.zedsaid.toolbaritem.justifyFull";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarH1 = @"com.zedsaid.toolbaritem.h1";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarH2 = @"com.zedsaid.toolbaritem.h2";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarH3 = @"com.zedsaid.toolbaritem.h3";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarH4 = @"com.zedsaid.toolbaritem.h4";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarH5 = @"com.zedsaid.toolbaritem.h5";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarH6 = @"com.zedsaid.toolbaritem.h6";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarTextColor = @"com.zedsaid.toolbaritem.textColor";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarBackgroundColor = @"com.zedsaid.toolbaritem.backgroundColor";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarUnorderedList = @"com.zedsaid.toolbaritem.unorderedList";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarOrderedList = @"com.zedsaid.toolbaritem.orderedList";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarHorizontalRule = @"com.zedsaid.toolbaritem.horizontalRule";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarIndent = @"com.zedsaid.toolbaritem.indent";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarOutdent = @"com.zedsaid.toolbaritem.outdent";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarInsertImage = @"com.zedsaid.toolbaritem.insertImage";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarInsertImageFromDevice = @"com.zedsaid.toolbaritem.insertImageFromDevice";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarInsertLink = @"com.zedsaid.toolbaritem.insertLink";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarRemoveLink = @"com.zedsaid.toolbaritem.removeLink";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarQuickLink = @"com.zedsaid.toolbaritem.quickLink";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarUndo = @"com.zedsaid.toolbaritem.undo";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarRedo = @"com.zedsaid.toolbaritem.redo";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarViewSource = @"com.zedsaid.toolbaritem.viewSource";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarParagraph = @"com.zedsaid.toolbaritem.paragraph";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarAll = @"com.zedsaid.toolbaritem.all";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarNone = @"com.zedsaid.toolbaritem.none";
static NSString * _Null_unspecified const ZSSRichTextEditorToolbarFonts = @"com.zedsaid.toolbaritem.fonts";

// source string for parsing JSON
static NSString * _Null_unspecified const ZSSEditorHTML = @"zss_editor.getHTML();";
static NSString * _Null_unspecified const ZSSEditorText = @"zss_editor.getText();";
static NSString * _Null_unspecified const ZSSEditorContent = @"document.activeElement.id=='zss_editor_content'";

@class ZSSBarButtonItem;

/**
 *  The viewController used with ZSSRichTextEditor
 */
@interface ZSSRichTextEditor : UIViewController <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, HRColorPickerViewControllerDelegate, UITextViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate,ZSSFontsViewControllerDelegate>


/*
 *  WKWebView for writing/editing/displaying the content
 */
@property (nonatomic, strong) WKWebView * _Null_unspecified editorView;

/*
 *  ZSSTextView for displaying the source code for what is displayed in the editor view
 */
@property (nonatomic, strong) ZSSTextView * _Null_unspecified sourceView;

/**
 *  The base URL to use for the webView
 */
@property (nonatomic, strong) NSURL * _Null_unspecified baseURL;

/**
 *  If the HTML should be formatted to be pretty
 */
@property (nonatomic) BOOL formatHTML;

/**
 *  If the keyboard should be shown when the editor loads
 */
@property (nonatomic) BOOL shouldShowKeyboard;

/**
 *  HTMLTextBox focus sorunu için eklendi
 */
@property (nonatomic) BOOL isFocusedTextView;

/**
 * If the toolbar should always be shown or not
 */
@property (nonatomic) BOOL alwaysShowToolbar;

/**
 * If the sub class recieves text did change events or not
 */
@property (nonatomic) BOOL receiveEditorDidChangeEvents;

/**
 *  The placeholder text to use if there is no editor content
 */
@property (nonatomic, strong) NSString * _Null_unspecified placeholder;

/**
 *  Toolbar items to include
 */
@property (nonatomic, strong) NSArray * _Null_unspecified enabledToolbarItems;

/**
 *  Color to tint the toolbar items
 */
@property (nonatomic, strong) UIColor * _Null_unspecified toolbarItemTintColor;

/**
 *  Color to tint selected items
 */
@property (nonatomic, strong) UIColor * _Null_unspecified toolbarItemSelectedTintColor;


- (void) setCursorPositionToEnd;

/**
 *  Sets the HTML for the entire editor
 *
 *  @param html  HTML string to set for the editor
 *
 */
- (void)setHTML:(NSString  * _Null_unspecified)html;

/**
 *  Returns the HTML from the Rich Text Editor
 *
 */
- (void)getHTML:(void (^ _Nullable)(_Nullable id, NSError * _Nullable error))completionHandler;

/**
 *  Returns the plain text from the Rich Text Editor
 *
 */
- (void)getText:(void (^ _Nullable)(_Nullable id, NSError * _Nullable error))completionHandler;

/**
 *  Inserts HTML at the caret position
 *
 *  @param html  HTML string to insert
 *
 */
- (void)insertHTML:(NSString * _Null_unspecified)html;

/**
 *  Manually focuses on the text editor
 */
- (void)focusTextEditor;

/**
 *  Manually dismisses on the text editor
 */
- (void)blurTextEditor;

/**
 *  Shows the insert image dialog with optinal inputs
 *
 *  @param url The URL for the image
 *  @param alt The alt for the image
 */
- (void)showInsertImageDialogWithLink:(NSString * _Null_unspecified)url alt:(NSString * _Null_unspecified)alt;

/**
 *  Inserts an image
 *
 *  @param url The URL for the image
 *  @param alt The alt attribute for the image
 */
- (void)insertImage:(NSString * _Null_unspecified)url alt:(NSString * _Null_unspecified)alt;

/**
 *  Shows the insert link dialog with optional inputs
 *
 *  @param url   The URL for the link
 *  @param title The tile for the link
 */
- (void)showInsertLinkDialogWithLink:(NSString * _Null_unspecified)url title:(NSString * _Null_unspecified)title;

/**
 *  Inserts a link
 *
 *  @param url The URL for the link
 *  @param title The title for the link
 */
- (void)insertLink:(NSString * _Null_unspecified)url title:(NSString * _Null_unspecified)title;

/**
 *  Gets called when the insert URL picker button is tapped in an alertView
 *
 *  @warning The default implementation of this method is blank and does nothing
 */
- (void)showInsertURLAlternatePicker;

/**
 *  Gets called when the insert Image picker button is tapped in an alertView
 *
 *  @warning The default implementation of this method is blank and does nothing
 */
- (void)showInsertImageAlternatePicker;

/**
 *  Dismisses the current AlertView
 */
- (void)dismissAlertView;

/**
 *  Add a custom UIBarButtonItem by using a UIButton
 */
- (void)addCustomToolbarItemWithButton:(UIButton * _Null_unspecified)button;

/**
 *  Add a custom ZSSBarButtonItem
 */
- (void)addCustomToolbarItem:(ZSSBarButtonItem * _Null_unspecified)item;

/**
 *  Scroll event callback with position
 */
- (void)editorDidScrollWithPosition:(NSInteger)position;

/**
 *  Text change callback with text and html
 */
- (void)editorDidChangeWithText:(NSString * _Null_unspecified)text andHTML:(NSString * _Null_unspecified)html;

/**
 *  Hashtag callback with word
 */
- (void)hashtagRecognizedWithWord:(NSString * _Null_unspecified)word;

/**
 *  Mention callback with word
 */
- (void)mentionRecognizedWithWord:(NSString * _Null_unspecified)word;

/**
 *  Set custom css
 */
- (void)setCSS:(NSString * _Null_unspecified)css;

@end
