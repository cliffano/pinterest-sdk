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
* Reporting targeting type
* Values: kEYWORD,aPPTYPE,gENDER,lOCATION,pLACEMENT,cOUNTRY,tARGETEDINTEREST,pINNERINTEREST,aUDIENCEINCLUDE,aUDIENCEEXCLUDE,gEO,aGEBUCKET,rEGION
*/
enum class AdsAnalyticsTargetingType(val value: kotlin.String){

    kEYWORD("KEYWORD"),

    aPPTYPE("APPTYPE"),

    gENDER("GENDER"),

    lOCATION("LOCATION"),

    pLACEMENT("PLACEMENT"),

    cOUNTRY("COUNTRY"),

    tARGETEDINTEREST("TARGETED_INTEREST"),

    pINNERINTEREST("PINNER_INTEREST"),

    aUDIENCEINCLUDE("AUDIENCE_INCLUDE"),

    aUDIENCEEXCLUDE("AUDIENCE_EXCLUDE"),

    gEO("GEO"),

    aGEBUCKET("AGE_BUCKET"),

    rEGION("REGION");

}

