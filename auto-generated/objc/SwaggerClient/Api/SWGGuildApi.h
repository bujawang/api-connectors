#import <Foundation/Foundation.h>
#import "SWGError.h"
#import "SWGGuild.h"
#import "SWGXAny.h"
#import "SWGApi.h"

/**
* BitMEX API
* ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
*
* OpenAPI spec version: 1.2.0
* Contact: support@bitmex.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGGuildApi: NSObject <SWGApi>

extern NSString* kSWGGuildApiErrorDomain;
extern NSInteger kSWGGuildApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Archive a guild
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) guildArchiveWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;


/// Edit guild new guild
/// 
///
/// @param name Name of the guild, must be unique, must be at least 5 characters
/// @param emoji Emoji name.
/// @param potDistributionPercent How much of the pot should be distributed to the guild members, must be between 0 and 100
/// @param potDistributionType How the pot should be distributed to the guild members, must be one of the following: ROLL_OVER, TOP_3, TOP_5, TOP_10, VOLUME_PERCENTAGE, TOP_3_BY_ADV, TOP_5_BY_ADV, TOP_10_BY_ADV, TOP_3_BY_ROI, TOP_5_BY_ROI, TOP_10_BY_ROI, RANDOM
/// @param potTraderId User ID of the guild member with order write permission for the pot (optional)
/// @param _description Guild description, can be used to explain the guild to other users. (optional)
/// @param twitter Guild twitter handle. (optional)
/// @param discord Guild discord link. (optional)
/// @param telegram Guild telegram link. (optional)
/// @param imgUrl URL for the profile image of the guild, is used by clients to add some color to the guild, if no image is provided, a default image is used (optional)
/// @param isPrivate Guild privacy status (optional)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGGuild*
-(NSURLSessionTask*) guildEditWithName: (NSString*) name
    emoji: (NSString*) emoji
    potDistributionPercent: (NSNumber*) potDistributionPercent
    potDistributionType: (NSString*) potDistributionType
    potTraderId: (NSNumber*) potTraderId
    _description: (NSString*) _description
    twitter: (NSString*) twitter
    discord: (NSString*) discord
    telegram: (NSString*) telegram
    imgUrl: (NSString*) imgUrl
    isPrivate: (NSNumber*) isPrivate
    completionHandler: (void (^)(SWGGuild* output, NSError* error)) handler;


/// Get all guilds
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGXAny>*
-(NSURLSessionTask*) guildGetWithCompletionHandler: 
    (void (^)(NSArray<SWGXAny>* output, NSError* error)) handler;


/// Request to Join a private guild or join a public guild
/// 
///
/// @param code 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) guildJoinWithCode: (NSString*) code
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Kick member from guild
/// 
///
/// @param memberUserId 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) guildKickWithMemberUserId: (NSNumber*) memberUserId
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Leave guild or cancel guild join request
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) guildLeaveWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;


/// Creates a new guild
/// 
///
/// @param name Name of the guild, must be unique, must be at least 5 characters
/// @param emoji Emoji name.
/// @param potDistributionPercent How much of the pot should be distributed to the guild members, must be between 0 and 100
/// @param potDistributionType How the pot should be distributed to the guild members, must be one of the following: ROLL_OVER, TOP_3, TOP_5, TOP_10, VOLUME_PERCENTAGE, TOP_3_BY_ADV, TOP_5_BY_ADV, TOP_10_BY_ADV, TOP_3_BY_ROI, TOP_5_BY_ROI, TOP_10_BY_ROI, RANDOM
/// @param _description Guild description, can be used to explain the guild to other users. (optional)
/// @param twitter Guild twitter handle. (optional)
/// @param discord Guild discord link. (optional)
/// @param telegram Guild telegram link. (optional)
/// @param imgUrl URL for the profile image of the guild, is used by clients to add some color to the guild, if no image is provided, a default image is used (optional)
/// @param isPrivate Guild privacy status (optional)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGGuild*
-(NSURLSessionTask*) guildNewWithName: (NSString*) name
    emoji: (NSString*) emoji
    potDistributionPercent: (NSNumber*) potDistributionPercent
    potDistributionType: (NSString*) potDistributionType
    _description: (NSString*) _description
    twitter: (NSString*) twitter
    discord: (NSString*) discord
    telegram: (NSString*) telegram
    imgUrl: (NSString*) imgUrl
    isPrivate: (NSNumber*) isPrivate
    completionHandler: (void (^)(SWGGuild* output, NSError* error)) handler;


/// Toggle share trades for your account, which controls whether your guild members can see your orders and positions in their UI
/// 
///
/// @param shareTrades 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) guildShareTradesWithShareTrades: (NSNumber*) shareTrades
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
