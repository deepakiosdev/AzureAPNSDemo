//
//  ViewController.h
//  AzureAPNSDemo
//
//  Created by Deepak Pandey on 08/01/16.
//  Copyright © 2016 Neuron. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonHMAC.h>
#import "HubInfo.h"

@interface ViewController : UIViewController <UITextFieldDelegate, NSXMLParserDelegate>
{
    NSXMLParser *xmlParser;
}

// Make sure these outlets are connected to your UI by ctrl+dragging
@property (weak, nonatomic) IBOutlet UITextField *notificationMessage;
@property (weak, nonatomic) IBOutlet UILabel *sendResults;

@property (copy, nonatomic) NSString *statusResult;
@property (copy, nonatomic) NSString *currentElement;

@end