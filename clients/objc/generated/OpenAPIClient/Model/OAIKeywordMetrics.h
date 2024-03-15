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





@protocol OAIKeywordMetrics
@end

@interface OAIKeywordMetrics : OAIObject

/* Average cost per click [optional]
 */
@property(nonatomic) NSNumber* avgCpcInMicroCurrency;
/* Keyword's search frequency. This value is based on keyword frequency in pepsi client response [optional]
 */
@property(nonatomic) NSString* keywordQueryVolume;

@end