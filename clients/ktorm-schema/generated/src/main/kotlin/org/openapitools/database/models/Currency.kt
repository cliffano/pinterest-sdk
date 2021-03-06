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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*

import com.squareup.moshi.Json

/**
* Currency Codes from ISO 4217
* Values: uNK,uSD,gBP,cAD,eUR,aUD,nZD,sEK,iLS,cHF,hKD,jPY,sGD,kRW,nOK,dKK,pLN,rON,hUF,cZK,bRL,mXN,aRS,cLP,cOP
*/

enum class Currency(val value: kotlin.String){


    @Json(name = "UNK")
    uNK("UNK"),


    @Json(name = "USD")
    uSD("USD"),


    @Json(name = "GBP")
    gBP("GBP"),


    @Json(name = "CAD")
    cAD("CAD"),


    @Json(name = "EUR")
    eUR("EUR"),


    @Json(name = "AUD")
    aUD("AUD"),


    @Json(name = "NZD")
    nZD("NZD"),


    @Json(name = "SEK")
    sEK("SEK"),


    @Json(name = "ILS")
    iLS("ILS"),


    @Json(name = "CHF")
    cHF("CHF"),


    @Json(name = "HKD")
    hKD("HKD"),


    @Json(name = "JPY")
    jPY("JPY"),


    @Json(name = "SGD")
    sGD("SGD"),


    @Json(name = "KRW")
    kRW("KRW"),


    @Json(name = "NOK")
    nOK("NOK"),


    @Json(name = "DKK")
    dKK("DKK"),


    @Json(name = "PLN")
    pLN("PLN"),


    @Json(name = "RON")
    rON("RON"),


    @Json(name = "HUF")
    hUF("HUF"),


    @Json(name = "CZK")
    cZK("CZK"),


    @Json(name = "BRL")
    bRL("BRL"),


    @Json(name = "MXN")
    mXN("MXN"),


    @Json(name = "ARS")
    aRS("ARS"),


    @Json(name = "CLP")
    cLP("CLP"),


    @Json(name = "COP")
    cOP("COP");



    /**
    This override toString avoids using the enum var name and uses the actual api value instead.
    In cases the var name and value are different, the client would send incorrect enums to the server.
    **/
    override fun toString(): String {
        return value
    }

}

