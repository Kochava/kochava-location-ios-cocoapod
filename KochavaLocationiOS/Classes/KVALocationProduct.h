//
//  KVALocationProduct.h
//  KochavaLocation
//
//  Created by John Bushnell on 11/9/17.
//  Copyright © 2017 - 2020 Kochava, Inc.  All rights reserved.
//



#ifndef KVALocationProduct_h
#define KVALocationProduct_h



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
#import "KVAProduct.h"
#endif



#pragma mark - INTERFACE



/*!
 @class KVALocationProduct
 
 @brief A class which defines a location product.
 
 @discussion A product in this context generally refers to the result of a build.
 
 Inherits from: KVAProduct
 
 @author John Bushnell
 
 @copyright 2017 - 2020 Kochava, Inc.
 */
@interface KVALocationProduct : KVAProduct



#pragma mark - CLASS PROPERTIES
#pragma mark KVALocationProduct.shared (Singleton Shared Instance)



/*!
 @property shared
 
 @brief The singleton shared instance.
 */
@property (class, readonly, strong, nonnull) KVALocationProduct *shared;



@end



#endif



