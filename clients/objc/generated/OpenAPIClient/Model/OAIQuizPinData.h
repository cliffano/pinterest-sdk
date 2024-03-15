#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIQuizPinQuestion.h"
#import "OAIQuizPinResult.h"
@protocol OAIQuizPinQuestion;
@class OAIQuizPinQuestion;
@protocol OAIQuizPinResult;
@class OAIQuizPinResult;



@protocol OAIQuizPinData
@end

@interface OAIQuizPinData : OAIObject


@property(nonatomic) NSArray<OAIQuizPinQuestion>* questions;

@property(nonatomic) NSArray<OAIQuizPinResult>* results;

@end
