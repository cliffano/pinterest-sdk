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


#import "OAINullableCatalogsItemFieldType.h"
@protocol OAINullableCatalogsItemFieldType;
@class OAINullableCatalogsItemFieldType;



@protocol OAICatalogsItemValidationDetails
@end

@interface OAICatalogsItemValidationDetails : OAIObject


@property(nonatomic) OAINullableCatalogsItemFieldType* attributeName;
/* Provided value that caused the validation issue. 
 */
@property(nonatomic) NSString* providedValue;

@end