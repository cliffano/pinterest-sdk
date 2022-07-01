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
* Language code, which is among the offical ISO 639-1 language list.
* Values: aM,aR,aZ,bG,bN,bS,cA,cS,dA,dV,dZ,dE,eL,eN,eS,eT,fA,fI,fR,hE,hI,hR,hU,hY,iD,iN,iS,iT,iW,jA,kA,kM,kO,lO,lT,lV,mK,mN,mS,mY,nB,nE,nL,nO,pL,pT,rO,rU,sK,sL,sQ,sR,sV,tL,uK,vI,tE,tH,tR,xX,zH
*/

enum class Language(val value: kotlin.String){


    @Json(name = "AM")
    aM("AM"),


    @Json(name = "AR")
    aR("AR"),


    @Json(name = "AZ")
    aZ("AZ"),


    @Json(name = "BG")
    bG("BG"),


    @Json(name = "BN")
    bN("BN"),


    @Json(name = "BS")
    bS("BS"),


    @Json(name = "CA")
    cA("CA"),


    @Json(name = "CS")
    cS("CS"),


    @Json(name = "DA")
    dA("DA"),


    @Json(name = "DV")
    dV("DV"),


    @Json(name = "DZ")
    dZ("DZ"),


    @Json(name = "DE")
    dE("DE"),


    @Json(name = "EL")
    eL("EL"),


    @Json(name = "EN")
    eN("EN"),


    @Json(name = "ES")
    eS("ES"),


    @Json(name = "ET")
    eT("ET"),


    @Json(name = "FA")
    fA("FA"),


    @Json(name = "FI")
    fI("FI"),


    @Json(name = "FR")
    fR("FR"),


    @Json(name = "HE")
    hE("HE"),


    @Json(name = "HI")
    hI("HI"),


    @Json(name = "HR")
    hR("HR"),


    @Json(name = "HU")
    hU("HU"),


    @Json(name = "HY")
    hY("HY"),


    @Json(name = "ID")
    iD("ID"),


    @Json(name = "IN")
    iN("IN"),


    @Json(name = "IS")
    iS("IS"),


    @Json(name = "IT")
    iT("IT"),


    @Json(name = "IW")
    iW("IW"),


    @Json(name = "JA")
    jA("JA"),


    @Json(name = "KA")
    kA("KA"),


    @Json(name = "KM")
    kM("KM"),


    @Json(name = "KO")
    kO("KO"),


    @Json(name = "LO")
    lO("LO"),


    @Json(name = "LT")
    lT("LT"),


    @Json(name = "LV")
    lV("LV"),


    @Json(name = "MK")
    mK("MK"),


    @Json(name = "MN")
    mN("MN"),


    @Json(name = "MS")
    mS("MS"),


    @Json(name = "MY")
    mY("MY"),


    @Json(name = "NB")
    nB("NB"),


    @Json(name = "NE")
    nE("NE"),


    @Json(name = "NL")
    nL("NL"),


    @Json(name = "NO")
    nO("NO"),


    @Json(name = "PL")
    pL("PL"),


    @Json(name = "PT")
    pT("PT"),


    @Json(name = "RO")
    rO("RO"),


    @Json(name = "RU")
    rU("RU"),


    @Json(name = "SK")
    sK("SK"),


    @Json(name = "SL")
    sL("SL"),


    @Json(name = "SQ")
    sQ("SQ"),


    @Json(name = "SR")
    sR("SR"),


    @Json(name = "SV")
    sV("SV"),


    @Json(name = "TL")
    tL("TL"),


    @Json(name = "UK")
    uK("UK"),


    @Json(name = "VI")
    vI("VI"),


    @Json(name = "TE")
    tE("TE"),


    @Json(name = "TH")
    tH("TH"),


    @Json(name = "TR")
    tR("TR"),


    @Json(name = "XX")
    xX("XX"),


    @Json(name = "ZH")
    zH("ZH");



    /**
    This override toString avoids using the enum var name and uses the actual api value instead.
    In cases the var name and value are different, the client would send incorrect enums to the server.
    **/
    override fun toString(): String {
        return value
    }

}

