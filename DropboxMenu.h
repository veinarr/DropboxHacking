/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMenu.h"

#import "NSMenuDelegate-Protocol.h"

@interface DropboxMenu : NSMenu <NSMenuDelegate>
{
    BOOL contextMenu;
}

- (void)menuItemSelected:(id)arg1;
- (void)eatMenuDescriptor:(char *)arg1 withLength:(int)arg2 fillMenu:(id)arg3;
- (BOOL)useMessageResponse:(char *)arg1 withLength:(int)arg2;
- (BOOL)initContextMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)initWithContextMenuBehavior:(BOOL)arg1;

@end

