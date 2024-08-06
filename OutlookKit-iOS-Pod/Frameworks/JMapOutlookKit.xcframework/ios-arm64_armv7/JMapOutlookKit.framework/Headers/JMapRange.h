//
//  JMapRange.h
//  JMapOutlookKit
//
//  Created by Jibestream on 2017-05-17.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The JMapRange model
 */
@interface JMapRange : NSObject

/**
 * Start date object property
 */
@property (nonatomic, strong, nullable) NSDate * start;

/**
 * End date object property
 */
@property (nonatomic, strong, nullable) NSDate * end;

/**
 * Initialization method for Range object
 *
 * @param startTime start date object
 * @param endTime end date object
 * @return instancetype return self
 */
-(nonnull instancetype)initWithStartTime:(nonnull NSDate *)startTime endTime:(nonnull NSDate *) endTime;

/**
 * Duration of the range in seconds
 */
-(long)duration;

/**
 * Checks the validadity of a JMapRange Object
 *
 * @param range JMapRange obejct to be checked
 */
+(bool)isValidRange:(nonnull JMapRange*) range;

@end
