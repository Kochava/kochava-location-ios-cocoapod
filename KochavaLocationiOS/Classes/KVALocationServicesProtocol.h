//
//  KVALocationServicesProtocol.h
//  KochavaLocation
//
//  Created by John Bushnell on 2/1/18.
//  Copyright © 2018 - 2021 Kochava, Inc.  All rights reserved.
//



#if TARGET_OS_IOS



#ifndef KVALocationServicesProtocol_h
#define KVALocationServicesProtocol_h



#pragma mark - IMPORT



#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - INTERFACE - INTERNAL



@protocol KVALocationServicesProtocol <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



@end



#endif



#endif



