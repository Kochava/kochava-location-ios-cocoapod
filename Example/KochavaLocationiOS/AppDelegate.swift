//
//  AppDelegate.swift
//  KochavaLocationiOS
//
//  Created by johnbushnell on 05/01/2019.
//  Copyright (c) 2019 - 2020 Kochava. All rights reserved.
//



import UIKit



@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate, KochavaTrackerDelegate
{

    
    
    var window: UIWindow?


    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool
    {
        print("KVACoreProduct.shared = \(KVACoreProduct.shared.kva_asForContextObject(withContext: .log)!)")
        print("KVALocationProduct.shared = \(KVALocationProduct.shared.kva_asForContextObject(withContext: .log)!)")
        print("KVATrackerProduct.shared = \(KVATrackerProduct.shared.kva_asForContextObject(withContext: .log)!)")

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

