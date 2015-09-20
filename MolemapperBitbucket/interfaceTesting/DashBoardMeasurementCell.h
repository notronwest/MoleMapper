//
//  DashBoardMeasurementCell.h
//  MoleMapper
//
//  Created by Karpács István on 16/09/15.
//  Copyright © 2015 Webster Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DashboardModel.h"

@interface DashBoardMeasurementCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIButton *viewMoleBtn;
@property (weak, nonatomic) IBOutlet UIImageView *lineOfMeasurement;
@property (weak, nonatomic) IBOutlet UILabel *biggestMoleLabel;
@property (weak, nonatomic) IBOutlet UILabel *locatedMoleLabel;

//@property DashboardModel* dbModel;

@end