//
//  userRecord.h
//  JMapOutlookKit
//
//  Created by Jibestream on 2017-05-30.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The JMapUserRecord model
 */
@interface JMapUserRecord : NSObject

/**
 * Business phone user object property
 */
@property (nonatomic, strong, nullable) NSMutableArray<NSString*>* businessPhones;

/**
 * Display name user object property
 */
@property (nonatomic, strong, nullable) NSString* displayName;

/**
 * First name user object property
 */
@property (nonatomic, strong, nullable) NSString* givenName;

/**
 * Job title user object property
 */
@property (nonatomic, strong, nullable) NSString* jobTitle;

/**
 * Email user object property
 */
@property (nonatomic, strong, nullable) NSString* email;

/**
 * Mobile phone user object property
 */
@property (nonatomic, strong, nullable) NSString* mobilePhone;

/**
 * Office location user object property
 */
@property (nonatomic, strong, nullable) NSString* officeLocation;

/**
 * Preferred language user object property
 */
@property (nonatomic, strong, nullable) NSString* preferredLanguage;

/**
 * Last name user object property
 */
@property (nonatomic, strong, nullable) NSString* surname;

/**
 * Principle name(email) user object property
 */
@property (nonatomic, strong, nullable) NSString* principalName;



@end
