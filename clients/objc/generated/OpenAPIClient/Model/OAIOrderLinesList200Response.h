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


#import "OAIOrderLine.h"
@protocol OAIOrderLine;
@class OAIOrderLine;



@protocol OAIOrderLinesList200Response
@end

@interface OAIOrderLinesList200Response : OAIObject


@property(nonatomic) NSArray<OAIOrderLine>* items;

@property(nonatomic) NSString* bookmark;

@end