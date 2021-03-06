//
//  ConfigurationViewController.h
//  Kantoko
//
//  Created by Maria Maria on 8/24/12.
//  Copyright (c) 2012 Kantega. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KantokoViewController.h"

@class KantokoDataController;

@interface ConfigurationViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>{
    
    
    // UIPickerView *roomPickerView;
    
    //10 des 12
    //UIPickerView *trondheimPickerView;
    NSMutableArray *trondheimrooms;
    NSMutableArray *oslorooms;
    
    //11.des 12
    NSMutableArray *trondheim;
    NSMutableArray *oslo;
    
    //30 aug 12
    UILabel *velgmoteLabel;
    UIButton *okButton;
    
    UIToolbar *toolbar;
    
}


//30 august 2012:
@property (retain, nonatomic) UILabel *velgmoteLabel;
@property (retain, nonatomic) UIButton *okButton;

@property (strong, nonatomic) KantokoDataController *dataController;

@property (strong, nonatomic) UIPickerView *osloPickerView;

//10 des 12: La til en ny PickerView og en array for Trondheims rom og en array for Oslos rom
@property (strong, nonatomic) UIPickerView *trondheimPickerView;
@property (strong, nonatomic) NSMutableArray *trondheimrooms;
@property (strong, nonatomic) NSMutableArray *oslorooms;

@property (strong, nonatomic) NSArray *meetingrooms;
@property NSInteger roomPickedIndex;

//11 des 12: La til to index-variabler for Oslo og Trondheim
@property NSInteger pickedTrondheimIndex;
@property NSInteger pickedOsloIndex;

//11.des 12: La til to nsmutablearray for stringer for Oslo og Trondheim
@property (strong,nonatomic) NSMutableArray *trondheim;
@property (strong,nonatomic) NSMutableArray *oslo;

- (IBAction)saveConfiguration:(id)sender;


@end
