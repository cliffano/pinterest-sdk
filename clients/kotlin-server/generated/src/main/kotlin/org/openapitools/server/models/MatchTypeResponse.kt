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
* Keyword match type
* Values: BROAD,PHRASE,EXACT,EXACT_NEGATIVE,PHRASE_NEGATIVE,`null`
*/
enum class MatchTypeResponse(val value: kotlin.String) {

    BROAD("BROAD"),

    PHRASE("PHRASE"),

    EXACT("EXACT"),

    EXACT_NEGATIVE("EXACT_NEGATIVE"),

    PHRASE_NEGATIVE("PHRASE_NEGATIVE"),

    `null`("null");

}

