/* IS_AUTOGENERATED_SO_ALLOW_AUTODELETE=YES */
/* The previous line is to allow auto deletion */

#import <Foundation/Foundation.h>
#import <Foundation/NSString.h>
#import "libGolgi.h"



@interface PushData : NSObject
{
    NSString *data;
    BOOL dataIsSet;
}

@property (readonly) BOOL dataIsSet;
- (NSString *)getData;
- (void)setData:(NSString *)data;

+ (PushData *)deserialiseFromString: (NSString *)string;
+ (PushData *)deserialiseFromPayload: (GolgiPayload *)payload;
- (NSString *)serialiseWithPrefix:(NSString *)prefix;
- (NSString *)serialise;
- (id)initWithIsSet:(BOOL)defIsSet;
@end


@interface PushButton_buttonPushed_reqArg : NSObject
{
    PushData *pushData;
    BOOL pushDataIsSet;
}

@property (readonly) BOOL pushDataIsSet;
- (PushData *)getPushData;
- (void)setPushData:(PushData *)pushData;

+ (PushButton_buttonPushed_reqArg *)deserialiseFromString: (NSString *)string;
+ (PushButton_buttonPushed_reqArg *)deserialiseFromPayload: (GolgiPayload *)payload;
- (NSString *)serialiseWithPrefix:(NSString *)prefix;
- (NSString *)serialise;
- (id)initWithIsSet:(BOOL)defIsSet;
@end


@interface PushButton_buttonPushed_rspArg : NSObject
{
    NSInteger internalSuccess_;
    BOOL internalSuccess_IsSet;
    GolgiException *golgiException;
    BOOL golgiExceptionIsSet;
}

@property (readonly) BOOL internalSuccess_IsSet;
- (NSInteger)getInternalSuccess_;
- (void)setInternalSuccess_:(NSInteger )internalSuccess_;
@property (readonly) BOOL golgiExceptionIsSet;
- (GolgiException *)getGolgiException;
- (void)setGolgiException:(GolgiException *)golgiException;

+ (PushButton_buttonPushed_rspArg *)deserialiseFromString: (NSString *)string;
+ (PushButton_buttonPushed_rspArg *)deserialiseFromPayload: (GolgiPayload *)payload;
- (NSString *)serialiseWithPrefix:(NSString *)prefix;
- (NSString *)serialise;
- (id)initWithIsSet:(BOOL)defIsSet;
@end
//
// buttonPushed
//
@protocol PushButtonButtonPushedResultSender
- (void)success;
@end
@protocol PushButtonButtonPushedResultReceiver
- (void)success;
- (void)failureWithGolgiException:(GolgiException *)golgiException;
@end
@protocol PushButtonButtonPushedRequestReceiver
- (void)buttonPushedWithResultSender:(id<PushButtonButtonPushedResultSender>)resultSender andPushData:(PushData *)pushData;
@end

@interface PushButtonSvc : NSObject
+ (void)sendButtonPushedUsingResultReceiver:(id<PushButtonButtonPushedResultReceiver>)resultReceiver withTransportOptions:(GolgiTransportOptions *)options andDestination:(NSString *)_dst withPushData:(PushData *)pushData;
+ (void)sendButtonPushedUsingResultReceiver:(id<PushButtonButtonPushedResultReceiver>)resultReceiver andDestination:(NSString *)_dst withPushData:(PushData *)pushData;
+ (void)registerButtonPushedRequestReceiver:(id<PushButtonButtonPushedRequestReceiver>)requestReceiver;

@end