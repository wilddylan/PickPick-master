/************************************************************
  *  * EaseMob CONFIDENTIAL 
  * __________________ 
  * Copyright (C) 2013-2014 EaseMob Technologies. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of EaseMob Technologies.
  * Dissemination of this information or reproduction of this material 
  * is strictly forbidden unless prior written permission is obtained
  * from EaseMob Technologies.
  */

#import <UIKit/UIKit.h>
#pragma clang diagnostic push
#pragma clang diagnostic ignored"-Wdeprecated-declarations"
#import "BaseTableViewCell.h"

@interface EMSearchDisplayController : UISearchDisplayController<UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate>

@property (strong, nonatomic) NSMutableArray *resultsSource;

//编辑cell时显示的风格，默认为UITableViewCellEditingStyleDelete；会将值付给[tableView:editingStyleForRowAtIndexPath:]
@property (nonatomic) UITableViewCellEditingStyle editingStyle;

@property (copy) UITableViewCell * (^cellForRowAtIndexPathCompletion)(UITableView *tableView, NSIndexPath *indexPath);
@property (copy) BOOL (^canEditRowAtIndexPath)(UITableView *tableView, NSIndexPath *indexPath);
@property (copy) CGFloat (^heightForRowAtIndexPathCompletion)(UITableView *tableView, NSIndexPath *indexPath);
@property (copy) void (^didSelectRowAtIndexPathCompletion)(UITableView *tableView, NSIndexPath *indexPath);
@property (copy) void (^didDeselectRowAtIndexPathCompletion)(UITableView *tableView, NSIndexPath *indexPath);

@end
#pragma clang diagnostic pop