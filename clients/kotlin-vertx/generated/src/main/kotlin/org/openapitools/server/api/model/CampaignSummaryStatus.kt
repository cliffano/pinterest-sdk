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
* Summary status for campaign
* Values: RUNNING,PAUSED,NOT_STARTED,COMPLETED,ADVERTISER_DISABLED,ARCHIVED,DRAFT,DELETED_DRAFT
*/
enum class CampaignSummaryStatus(val value: kotlin.String){

    RUNNING("RUNNING"),

    PAUSED("PAUSED"),

    NOT_STARTED("NOT_STARTED"),

    COMPLETED("COMPLETED"),

    ADVERTISER_DISABLED("ADVERTISER_DISABLED"),

    ARCHIVED("ARCHIVED"),

    DRAFT("DRAFT"),

    DELETED_DRAFT("DELETED_DRAFT");

}

