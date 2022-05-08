/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models


/**
* 
* Values: cOMPLETED,cOMPLETEDEARLY,dISAPPROVED,fAILED,pROCESSING,qUEUEDFORPROCESSING,uNDERAPPEAL,uNDERREVIEW
*/
enum class CatalogsFeedProcessingStatus(val value: kotlin.String) {

    cOMPLETED("COMPLETED"),

    cOMPLETEDEARLY("COMPLETED_EARLY"),

    dISAPPROVED("DISAPPROVED"),

    fAILED("FAILED"),

    pROCESSING("PROCESSING"),

    qUEUEDFORPROCESSING("QUEUED_FOR_PROCESSING"),

    uNDERAPPEAL("UNDER_APPEAL"),

    uNDERREVIEW("UNDER_REVIEW");

}
