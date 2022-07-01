#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAICatalogsFeedCredentials
@end

@interface OAICatalogsFeedCredentials : OAIObject

/* The required password for downloading a feed. 
 */
@property(nonatomic) NSString* password;
/* The required username for downloading a feed. 
 */
@property(nonatomic) NSString* username;

@end
