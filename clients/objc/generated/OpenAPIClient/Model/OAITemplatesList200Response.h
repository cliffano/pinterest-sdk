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


#import "OAITemplateResponse.h"
@protocol OAITemplateResponse;
@class OAITemplateResponse;



@protocol OAITemplatesList200Response
@end

@interface OAITemplatesList200Response : OAIObject


@property(nonatomic) NSArray<OAITemplateResponse>* items;

@property(nonatomic) NSString* bookmark;

@end