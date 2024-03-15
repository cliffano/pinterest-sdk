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





@protocol OAIIntegrationLogClientRequest
@end

@interface OAIIntegrationLogClientRequest : OAIObject


@property(nonatomic) NSString* method;
/* HTTP request host from host header. 
 */
@property(nonatomic) NSString* host;
/* HTTP request path. 
 */
@property(nonatomic) NSString* path;
/* HTTP request headers as key-value pairs. [optional]
 */
@property(nonatomic) NSDictionary<NSString*, NSString*>* requestHeaders;
/* HTTP response headers as key-value pairs. [optional]
 */
@property(nonatomic) NSDictionary<NSString*, NSString*>* responseHeaders;

@property(nonatomic) NSNumber* responseStatusCode;

@end
