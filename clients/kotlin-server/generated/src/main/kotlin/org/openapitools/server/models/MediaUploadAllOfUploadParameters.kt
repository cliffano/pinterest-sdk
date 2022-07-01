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
package org.openapitools.server.models


/**
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 * @param xAmzDate 
 * @param xAmzSignature 
 * @param xAmzSecurityToken 
 * @param xAmzAlgorithm 
 * @param key 
 * @param policy 
 * @param xAmzCredential 
 * @param contentType 
 */
data class MediaUploadAllOfUploadParameters(
    val xAmzDate: kotlin.String? = null,
    val xAmzSignature: kotlin.String? = null,
    val xAmzSecurityToken: kotlin.String? = null,
    val xAmzAlgorithm: kotlin.String? = null,
    val key: kotlin.String? = null,
    val policy: kotlin.String? = null,
    val xAmzCredential: kotlin.String? = null,
    val contentType: kotlin.String? = null
) 

