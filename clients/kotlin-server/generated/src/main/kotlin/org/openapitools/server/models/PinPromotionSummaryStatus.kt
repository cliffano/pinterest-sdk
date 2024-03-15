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
package org.openapitools.server.models


/**
* Summary status for pin promotions
* Values: APPROVED,PAUSED,PENDING,REJECTED,ADVERTISER_DISABLED,ARCHIVED,DRAFT,DELETED_DRAFT
*/
enum class PinPromotionSummaryStatus(val value: kotlin.String) {

    APPROVED("APPROVED"),

    PAUSED("PAUSED"),

    PENDING("PENDING"),

    REJECTED("REJECTED"),

    ADVERTISER_DISABLED("ADVERTISER_DISABLED"),

    ARCHIVED("ARCHIVED"),

    DRAFT("DRAFT"),

    DELETED_DRAFT("DELETED_DRAFT");

}

