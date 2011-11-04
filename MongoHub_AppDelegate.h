//
//  MongoHub_AppDelegate.h
//  MongoHub
//
//  Created by Syd on 10-4-24.
//  Copyright MusicPeace.ORG 2010 . All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class ConnectionsCollectionView;
@class ConnectionsArrayController;
@class MHConnection;
@class AddConnectionController;
@class EditConnectionController;
@class SUUpdater;

@interface MongoHub_AppDelegate : NSObject <NSApplicationDelegate, NSCollectionViewDelegate>
{
    NSWindow *window;
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
    
    IBOutlet ConnectionsCollectionView *connectionsCollectionView;
    IBOutlet ConnectionsArrayController *connectionsArrayController;
    AddConnectionController *addConnectionController;
    EditConnectionController *editConnectionController;
    IBOutlet NSTextField *bundleVersion;
  
    IBOutlet NSPanel *supportPanel;
    IBOutlet SUUpdater *updater;
}

@property (nonatomic, retain) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) ConnectionsCollectionView *connectionsCollectionView;
@property (nonatomic, retain) ConnectionsArrayController *connectionsArrayController;
@property (nonatomic, retain) AddConnectionController *addConnectionController;
@property (nonatomic, retain) EditConnectionController *editConnectionController;
@property (nonatomic, retain) NSTextField *bundleVersion;

- (IBAction)saveAction:sender;
- (IBAction)showAddConnectionPanel:(id)sender;
- (IBAction)addConection:(id)sender;
- (IBAction)showEditConnectionPanel:(id)sender;
- (IBAction)editConnection:(id)sender;
- (IBAction)deleteConnection:(id)sender;
- (IBAction)resizeConnectionItemView:(id)sender;
- (IBAction)showConnectionWindow:(id)sender;
- (BOOL)isOpenedConnection:(MHConnection *)aConnection;
- (void)doubleClick:(id)sender;

- (IBAction)openSupportPanel:(id)sender;
- (IBAction)closeSupportPanel:(id)sender;

@end
