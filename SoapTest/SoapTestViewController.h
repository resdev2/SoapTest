//
//  SoapTestViewController.h
//  SoapTest
//
//  Created by Mugdha Kulkarni on 9/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SoapTestViewController : UIViewController
{
    IBOutlet UILabel * display;
    NSMutableData *webData;
    NSXMLParser *xmlParser;
    NSMutableString *soapResults;
    BOOL recordResults;
}

-(IBAction)callService:(id)sender;
@end
