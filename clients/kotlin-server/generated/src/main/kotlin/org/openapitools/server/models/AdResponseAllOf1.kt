/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.PinPromotionSummaryStatus

/**
 * 
 * @param adAccountId The ID of the advertiser that this ad belongs to.
 * @param campaignId ID of the ad campaign that contains this ad.
 * @param collectionItemsDestinationUrlTemplate Destination URL template for all items within a collections drawer.
 * @param createdTime Pin creation time. Unix timestamp in seconds.
 * @param id The ID of this ad.
 * @param rejectedReasons Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
 * @param rejectionLabels Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
 * @param reviewStatus Ad review status
 * @param type Always \"ad\".
 * @param updatedTime Last update time. Unix timestamp in seconds.
 * @param summaryStatus Ad summary status
 */
data class AdResponseAllOf1(
    /* The ID of the advertiser that this ad belongs to. */
    val adAccountId: kotlin.String? = null,
    /* ID of the ad campaign that contains this ad. */
    val campaignId: kotlin.String? = null,
    /* Destination URL template for all items within a collections drawer. */
    val collectionItemsDestinationUrlTemplate: kotlin.String? = null,
    /* Pin creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* The ID of this ad. */
    val id: kotlin.String? = null,
    /* Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
    val rejectedReasons: AdResponseAllOf1.RejectedReasons? = null,
    /* Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
    val rejectionLabels: kotlin.collections.List<kotlin.String>? = null,
    /* Ad review status */
    val reviewStatus: AdResponseAllOf1.ReviewStatus? = null,
    /* Always \"ad\". */
    val type: kotlin.String? = null,
    /* Last update time. Unix timestamp in seconds. */
    val updatedTime: kotlin.Int? = null,
    /* Ad summary status */
    val summaryStatus: PinPromotionSummaryStatus? = null
) 
{
    /**
    * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    * Values: hASHTAGS,pROMOTIONSANDPRICES,tARGETING,lANDINGPAGE,cAPSANDSYMBOLS,sHOCKING,wEIGHTLOSS,pROHIBITEDPRODUCT,aUTHENTICITY,nUDITY,cONFUSINGDESIGN,uRGENCY,rATINGS,aPP,aLCOHOL,cONTESTS,pOLITICAL,oTHER,iMAGE,nAR,iNCONSISTENT,cLICKBAIT,nODESCRIPTION,lOWQUALITY,eXAGGERATEDCLAIMS,pINTERESTBRAND,aLCOHOLNOSALE,lANDINGPAGESPEED,lANDINGPAGEHARDWALL,lANDINGPAGEBROKEN,lANDINGPAGEQUALITY,oUTOFSTOCK,iMAGELOWQUALITY,iMAGEBUSY,iMAGEPOORLYEDITED,iMAGEBEFOREAFTER,uGC,fAKEBUTTONS,wEAPONS,sENSITIVE,uNACCEPTABLEBUSINESS,sUSPICIOUSCLAIMS,pHARMA,sUSPICIOUSSUPPLEMENTS,iLLEGALRECREATIONALDRUG,lOWQUALITYLANDINGPAGE,rESTRICTEDHEALTHCARE,iNCONSISTENTLANGFR
    */
    enum class RejectedReasons(val value: kotlin.collections.List&lt;kotlin.String&gt;){
        hASHTAGS("HASHTAGS"),
        pROMOTIONSANDPRICES("PROMOTIONS_AND_PRICES"),
        tARGETING("TARGETING"),
        lANDINGPAGE("LANDING_PAGE"),
        cAPSANDSYMBOLS("CAPS_AND_SYMBOLS"),
        sHOCKING("SHOCKING"),
        wEIGHTLOSS("WEIGHT_LOSS"),
        pROHIBITEDPRODUCT("PROHIBITED_PRODUCT"),
        aUTHENTICITY("AUTHENTICITY"),
        nUDITY("NUDITY"),
        cONFUSINGDESIGN("CONFUSING_DESIGN"),
        uRGENCY("URGENCY"),
        rATINGS("RATINGS"),
        aPP("APP"),
        aLCOHOL("ALCOHOL"),
        cONTESTS("CONTESTS"),
        pOLITICAL("POLITICAL"),
        oTHER("OTHER"),
        iMAGE("IMAGE"),
        nAR("NAR"),
        iNCONSISTENT("INCONSISTENT"),
        cLICKBAIT("CLICKBAIT"),
        nODESCRIPTION("NO_DESCRIPTION"),
        lOWQUALITY("LOW_QUALITY"),
        eXAGGERATEDCLAIMS("EXAGGERATED_CLAIMS"),
        pINTERESTBRAND("PINTEREST_BRAND"),
        aLCOHOLNOSALE("ALCOHOL_NO_SALE"),
        lANDINGPAGESPEED("LANDING_PAGE_SPEED"),
        lANDINGPAGEHARDWALL("LANDING_PAGE_HARDWALL"),
        lANDINGPAGEBROKEN("LANDING_PAGE_BROKEN"),
        lANDINGPAGEQUALITY("LANDING_PAGE_QUALITY"),
        oUTOFSTOCK("OUT_OF_STOCK"),
        iMAGELOWQUALITY("IMAGE_LOW_QUALITY"),
        iMAGEBUSY("IMAGE_BUSY"),
        iMAGEPOORLYEDITED("IMAGE_POORLY_EDITED"),
        iMAGEBEFOREAFTER("IMAGE_BEFORE_AFTER"),
        uGC("UGC"),
        fAKEBUTTONS("FAKE_BUTTONS"),
        wEAPONS("WEAPONS"),
        sENSITIVE("SENSITIVE"),
        uNACCEPTABLEBUSINESS("UNACCEPTABLE_BUSINESS"),
        sUSPICIOUSCLAIMS("SUSPICIOUS_CLAIMS"),
        pHARMA("PHARMA"),
        sUSPICIOUSSUPPLEMENTS("SUSPICIOUS_SUPPLEMENTS"),
        iLLEGALRECREATIONALDRUG("ILLEGAL_RECREATIONAL_DRUG"),
        lOWQUALITYLANDINGPAGE("LOW_QUALITY_LANDING_PAGE"),
        rESTRICTEDHEALTHCARE("RESTRICTED_HEALTHCARE"),
        iNCONSISTENTLANGFR("INCONSISTENT_LANG_FR");
    }
    /**
    * Ad review status
    * Values: oTHER,pENDING,rEJECTED,aPPROVED
    */
    enum class ReviewStatus(val value: kotlin.String){
        oTHER("OTHER"),
        pENDING("PENDING"),
        rEJECTED("REJECTED"),
        aPPROVED("APPROVED");
    }
}

