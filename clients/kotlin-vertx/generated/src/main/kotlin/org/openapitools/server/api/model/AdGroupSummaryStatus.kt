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
* Summary status for ad group
* Values: rUNNING,pAUSED,nOTSTARTED,cOMPLETED,aDVERTISERDISABLED,aRCHIVED
*/
enum class AdGroupSummaryStatus(val value: kotlin.String){

    rUNNING("RUNNING"),

    pAUSED("PAUSED"),

    nOTSTARTED("NOT_STARTED"),

    cOMPLETED("COMPLETED"),

    aDVERTISERDISABLED("ADVERTISER_DISABLED"),

    aRCHIVED("ARCHIVED");

}

