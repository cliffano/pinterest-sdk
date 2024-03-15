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
package org.openapitools.server.api.model


        /**
* Ad creative type enum. For update, only draft ads may update creative type. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
* Values: REGULAR,VIDEO,SHOPPING,CAROUSEL,MAX_VIDEO,SHOP_THE_PIN,COLLECTION,IDEA,SHOWCASE,QUIZ
*/
enum class CreativeType(val value: kotlin.String){

    REGULAR("REGULAR"),

    VIDEO("VIDEO"),

    SHOPPING("SHOPPING"),

    CAROUSEL("CAROUSEL"),

    MAX_VIDEO("MAX_VIDEO"),

    SHOP_THE_PIN("SHOP_THE_PIN"),

    COLLECTION("COLLECTION"),

    IDEA("IDEA"),

    SHOWCASE("SHOWCASE"),

    QUIZ("QUIZ");

}

