//
//  OCSModel.h
//  EOModeller
//
//  Created by OC on 5/10/13.
//  Copyright (c) 2013 OC. All rights reserved.
//

@class EOModel,OCSEntitiesAC,OCSAttributesAC,OCSRelationshipsAC;

@interface OCSModel:NSDocument <NSSplitViewDelegate,NSTableViewDelegate> {
    NSIndexSet *currentSelection; // used in Table Delegate, temporarily
}
@property (retain,nonatomic) EOModel *model;

@property (retain,nonatomic) IBOutlet NSWindow *sqlWindow; // so as it does not get released
@property (assign,nonatomic) IBOutlet NSTextView *sqlTextView; // in there

@property (assign,nonatomic) IBOutlet NSDrawer *inspectorDrawer; // just so as...
@property (assign,nonatomic) IBOutlet NSSplitView *inspectorSplitView; // ... they state can be stored (damned framework does not do that)

@property (assign,nonatomic) IBOutlet NSSplitView *mainSplit,*leftSplit,*rightSplit;
@property (assign,nonatomic) IBOutlet NSTableView *entityTable,*attributesTable,*relationshipTable;

@property (assign,nonatomic) IBOutlet OCSEntitiesAC *entityAC;
@property (assign,nonatomic) IBOutlet OCSAttributesAC *attributesAC;
@property (assign,nonatomic) IBOutlet OCSRelationshipsAC *relationshipAC;

@property (readonly) BOOL smartSort;

@property (readonly,nonatomic) NSMutableDictionary *externalIndexAccess;
@end
