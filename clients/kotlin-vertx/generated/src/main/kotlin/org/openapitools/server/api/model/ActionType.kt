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
package org.openapitools.server.api.model


        /**
* Ad group billable event type.
* Values: cLICKTHROUGH,iMPRESSION,vIDEOV50MRC,bILLABLEENGAGEMENT
*/
enum class ActionType(val value: kotlin.String){

    cLICKTHROUGH("CLICKTHROUGH"),

    iMPRESSION("IMPRESSION"),

    vIDEOV50MRC("VIDEO_V_50_MRC"),

    bILLABLEENGAGEMENT("BILLABLE_ENGAGEMENT");

}

