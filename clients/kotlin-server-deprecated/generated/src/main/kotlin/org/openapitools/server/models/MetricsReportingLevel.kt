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
* Level of the reporting request
* Values: aDVERTISER,aDVERTISERTARGETING,cAMPAIGN,cAMPAIGNTARGETING,aDGROUP,aDGROUPTARGETING,pINPROMOTION,pINPROMOTIONTARGETING,kEYWORD,pRODUCTGROUP,pRODUCTGROUPTARGETING,pRODUCTITEM
*/
enum class MetricsReportingLevel(val value: kotlin.String){

    aDVERTISER("ADVERTISER"),

    aDVERTISERTARGETING("ADVERTISER_TARGETING"),

    cAMPAIGN("CAMPAIGN"),

    cAMPAIGNTARGETING("CAMPAIGN_TARGETING"),

    aDGROUP("AD_GROUP"),

    aDGROUPTARGETING("AD_GROUP_TARGETING"),

    pINPROMOTION("PIN_PROMOTION"),

    pINPROMOTIONTARGETING("PIN_PROMOTION_TARGETING"),

    kEYWORD("KEYWORD"),

    pRODUCTGROUP("PRODUCT_GROUP"),

    pRODUCTGROUPTARGETING("PRODUCT_GROUP_TARGETING"),

    pRODUCTITEM("PRODUCT_ITEM");

}

