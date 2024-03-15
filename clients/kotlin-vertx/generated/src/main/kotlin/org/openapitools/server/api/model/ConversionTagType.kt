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
* conversion tag type
* Values: PAGE_LOAD,UNKNOWN,INITIALIZED,PAGE_VISIT,SIGNUP,CHECKOUT,CUSTOM,VIEW_CATEGORY,SEARCH,ADD_TO_CART,WATCH_VIDEO,LEAD,APP_INSTALL,WEB_SESSION,EXTERNAL_MEASUREMENT
*/
enum class ConversionTagType(val value: kotlin.String){

    PAGE_LOAD("PAGE_LOAD"),

    UNKNOWN("UNKNOWN"),

    INITIALIZED("INITIALIZED"),

    PAGE_VISIT("PAGE_VISIT"),

    SIGNUP("SIGNUP"),

    CHECKOUT("CHECKOUT"),

    CUSTOM("CUSTOM"),

    VIEW_CATEGORY("VIEW_CATEGORY"),

    SEARCH("SEARCH"),

    ADD_TO_CART("ADD_TO_CART"),

    WATCH_VIDEO("WATCH_VIDEO"),

    LEAD("LEAD"),

    APP_INSTALL("APP_INSTALL"),

    WEB_SESSION("WEB_SESSION"),

    EXTERNAL_MEASUREMENT("EXTERNAL_MEASUREMENT");

}

