//
//  KVALocationServices.h
//
//  Created by John Bushnell on 11/1/16.
//  Copyright © 2017 - 2020 Kochava, Inc.  All rights reserved.
//



#ifndef KVALocationServices_h
#define KVALocationServices_h



#pragma mark - IMPORT



#ifdef KOCHAVA_FRAMEWORK
#if TARGET_OS_TV
#if TARGET_OS_SIMULATOR
#import <KochavaCoreTVOSSimulator/KochavaCoreTVOSSimulator.h>
#else
#import <KochavaCoreTVOSDevice/KochavaCoreTVOSDevice.h>
#endif
#else
#if TARGET_OS_SIMULATOR
#import <KochavaCoreiOSSimulator/KochavaCoreiOSSimulator.h>
#else
#import <KochavaCoreiOSDevice/KochavaCoreiOSDevice.h>
#endif
#endif
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



