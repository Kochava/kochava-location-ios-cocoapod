//
//  AppDelegate.swift
//  KochavaLocationiOS
//
//  Created by johnbushnell on 05/01/2019.
//  Copyright (c) 2019 Kochava. All rights reserved.
//



import UIKit



@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate, KochavaTrackerDelegate
{

    
    
    var window: UIWindow?


    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool
    {
        // KVALocationProduct
        KVALocationProduct.shared.register()
        
        // trackerParametersDictionary
        var trackerParametersDictionary: [AnyHashable: Any] = [:]
        trackerParametersDictionary[kKVAParamAppGUIDStringKey] = "_YOUR_KOCHAVA_APP_GUID_"
        trackerParametersDictionary[kKVAParamLogLevelEnumKey] = kKVALogLevelEnumTrace

        // KochavaTracker.shared
        KochavaTracker.shared.configure(withParametersDictionary: trackerParametersDictionary, delegate:self)
        
        return true
    }

    
    
}

