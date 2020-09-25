//
//  KVALocationServices.h
//
//  Created by John Bushnell on 11/1/16.
//  Copyright © 2017 - 2020 Kochava, Inc.  All rights reserved.
//



#if TARGET_OS_IOS



#ifndef KVALocationServices_h
#define KVALocationServices_h



#pragma mark - IMPORT



#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - INTERFACE



/*!
 @class KVALocationServices
 
 @brief A controller for working with location services.
 
 @discussion This class observes for location changes and reports back.
 
 @author John Bushnell
 
 @copyright 2017 - 2020 Kochava, Inc.
 */
@interface KVALocationServices : NSObject <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



@end



#endif



#endif



