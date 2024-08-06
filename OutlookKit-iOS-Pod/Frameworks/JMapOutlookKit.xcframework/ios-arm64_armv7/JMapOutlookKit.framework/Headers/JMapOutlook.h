//
//  JMapOutlookKit.h
//  JMapOutlookKit
//
//  Created by Jibestream on 2017-05-12.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapControllerKit/JMapController.h>
#import "JMapStatusStyle.h"
#import "JMapStatus.h"
#import "JMapUserRecord.h"
#import "JMapRange.h"
#import <WebKit/WebKit.h>

@class ViewController;
/**
 * Protocol created for delegate methods to check for authToken and data
 */
@protocol JMapOutlookDelegate <NSObject>

@required
/**
 * Delegate method to notify that the auth token has been retrieved
 */
- (void)receivedAuthToken;

@end

/**
 * The JMapOutlook interface
 */
@interface JMapOutlook : NSObject <WKNavigationDelegate>

/**
 * The JMapController reference to the SDK
 */
@property (nonatomic, nonnull) JMapController *mapController;
/**
 * List of destinations in the building
 */
@property (nonatomic, nonnull) NSArray <JMapDestination *> *meetingRooms;

/**
 * Delegate for JMapOutlookKit kit
 */
@property (nonatomic) _Nonnull id<JMapOutlookDelegate> delegate;

/**
 * Initialization method for the JMapOutlookKit kit
 *
 * @param options A NSDictionary info needed to authenticate, keys: clientId, redirectUrl, authToken, meetingRoomTag (defaults to 'type:meeting room')
 * @param controller JMapController reference to calling SDK APIs
 * @param style An of StatusStyle object
 * @return An instance of the JMapOutlookKit
 */
- (instancetype _Nonnull)initWithOptions:(NSDictionary *_Nonnull)options controller:(JMapController * _Nonnull)controller statusStyle:(JMapStatusStyle *_Nullable)style;

/**
 * Method for making the authentication request
 */
- (void)authorize;

/**
 * Method for logging the user out of the account
 */
- (void)logout;

/**
 * Method for getting the status of a meeting room within a set time range
 *
 * @param destination instance of a JMapDestination object
 * @param range instance of JMapRange object for getting start/end time
 * @param completion handler for signaling once status has been receieved
 */
-(void)getMeetingRoomStatusInRange:(JMapDestination *_Nonnull)destination range:(JMapRange *_Nonnull)range completion:(void (^_Nonnull)(NSString * _Nullable error, JMapStatus * _Nullable status))completion;

/**
 * Method for getting the status of all meeeting rooms within a set time range
 *
 * @param range instance of JMapRange object for getting start/end time
 * @param completion handler for signaling once status has been receieved
 */
-(void)getAllMeetingRoomsStatusInRange:(JMapRange *_Nonnull)range completion:(void (^_Nonnull)(NSString * _Nullable error, NSArray <JMapStatus *>* _Nullable statusArray))completion;

/**
 * Method for booking a meeting room within a set time range
 *
 * @param destination instance of a JMapDestination object
 * @param range instance of JMapRange object for getting start/end time
 * @param attendees array of emails of the users to be invited to the meeting
 * @param bookingSubject string for title of booking
 * @param bookingBody string for body of booking
 * @param completion handler for signaling once room has been booked
 */
- (void)bookMeetingRoom:(JMapDestination *_Nonnull)destination range:(JMapRange *_Nonnull)range attendees:(NSArray *_Nullable)attendees subject:(NSString*_Nullable)bookingSubject body:(NSString*_Nullable)bookingBody completion:(void (^_Nullable)(NSString * _Nullable error))completion;


/**
 * Method for cancelling a meeting room within a set time range
 *
 * @param destination instance of a JMapDestination object
 * @param range instance of JMapRange object for getting start/end time
 * @param completion handler for signaling once room has been cancelled
 */
-(void)cancelMeetingRoom:(JMapDestination *_Nonnull)destination range:(JMapRange *_Nonnull) range completion :(void (^_Nullable)(NSString* _Nullable error))completion;

/**
 * Method for setting a style of a meeting room between a time range
 *
 * @param destination object to be styled
 * @param range instance of JMapRange object for getting start/end time
 * @param style instance of statusStyle object for getting busy/free styles
 * @param completion for signaling once a room has been styled
 */
-(void)styleMeetingRoomInRange:(JMapDestination *_Nonnull) destination range:(JMapRange *_Nonnull)range style:(JMapStatusStyle *_Nullable)style completion :(void (^_Nullable)(NSString*_Nullable error, JMapStatus*_Nullable status))completion;

/**
 * Method for setting a style of all meeting rooms between a time range
 *
 * @param range instance of JMapRange object for getting start/end time
 * @param style instance of statusStyle object for getting busy/free styles
 * @param completion for signaling once rooms have been styled
 */
-(void)styleAllMeetingRoomsInRange:(JMapRange*_Nonnull)range style:(JMapStatusStyle*_Nullable)style completion:(void (^_Nullable)(NSString *_Nullable error, NSArray <JMapStatus *>*_Nullable statusArray))completion;

/**
 * Method for getting directory of data for all users in organization
 *
 * @param completion for signaling all users have been received
 */
-(void)getDirectory:(void (^_Nonnull)(NSString * _Nullable error,NSArray<JMapUserRecord*>*_Nullable allUserRecords))completion;

@end
