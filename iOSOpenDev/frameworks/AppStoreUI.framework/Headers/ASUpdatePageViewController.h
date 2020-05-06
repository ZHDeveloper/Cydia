/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>
#import <AppStoreUI/ISURLOperationDelegate.h>

@class ASUpdatePageView, SUStructuredPage;

@interface ASUpdatePageViewController : XXUnknownSuperclass <ISURLOperationDelegate> {
	SUStructuredPage *_page;	// 212 = 0xd4
	ASUpdatePageView *_pageView;	// 216 = 0xd8
}
- (void)_updatePageView;	// 0x1b605
- (id)_newApplicationIconOperationForItemImage:(id)itemImage;	// 0x1b425
- (id)_itemArtworkImage;	// 0x1b30d
- (id)_applicationIconURL;	// 0x1b2e5
- (id)_applicationIcon;	// 0x1b225
- (id)_activeItem;	// 0x1b205
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x1b175
- (void)viewDidAppear:(BOOL)view;	// 0x1b111
- (void)reloadWithStorePage:(id)storePage forURL:(id)url;	// 0x1b0b9
- (void)loadView;	// 0x1aed5
- (void)dealloc;	// 0x1ae5d
- (id)init;	// 0x1ade9
@end