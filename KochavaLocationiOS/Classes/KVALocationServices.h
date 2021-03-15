//
//  KVALocationServices.h
//  KochavaLocation
//
//  Created by John Bushnell on 11/1/16.
//  Copyright © 2017 - 2021 Kochava, Inc.  All rights reserved.
//



#if TARGET_OS_IOS



#ifndef KVALocationServices_h
#define KVALocationServices_h



#pragma mark - IMPORT



#import "KVALocationServicesProtocol.h"



#pragma mark - INTERFACE



/*!
 @class KVALocationServices
 
 @brief A controller for working with location services.
 
 @discussion This class observes for location changes and reports back.
 
 @author John Bushnell
 
 @copyright 2017 - 2021 Kochava, Inc.
 */
@interface KVALocationServices : NSObject <KVALocationServicesProtocol>



@end



#endif



#endif



