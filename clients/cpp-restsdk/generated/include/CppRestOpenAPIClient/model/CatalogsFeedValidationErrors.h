/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedValidationErrors.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedValidationErrors_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedValidationErrors_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsFeedValidationErrors
    : public ModelBase
{
public:
    CatalogsFeedValidationErrors();
    virtual ~CatalogsFeedValidationErrors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedValidationErrors members

    /// <summary>
    /// Pinterest couldn&#39;t download your feed.
    /// </summary>
    int32_t getFETCHERROR() const;
    bool fETCHERRORIsSet() const;
    void unsetFETCH_ERROR();

    void setFETCHERROR(int32_t value);

    /// <summary>
    /// Your feed wasn&#39;t ingested because it hasn’t changed in the previous 90 days.
    /// </summary>
    int32_t getFETCHINACTIVEFEEDERROR() const;
    bool fETCHINACTIVEFEEDERRORIsSet() const;
    void unsetFETCH_INACTIVE_FEED_ERROR();

    void setFETCHINACTIVEFEEDERROR(int32_t value);

    /// <summary>
    /// Your feed includes data with an unsupported encoding format.
    /// </summary>
    int32_t getENCODINGERROR() const;
    bool eNCODINGERRORIsSet() const;
    void unsetENCODING_ERROR();

    void setENCODINGERROR(int32_t value);

    /// <summary>
    /// Your feed includes data with formatting errors.
    /// </summary>
    int32_t getDELIMITERERROR() const;
    bool dELIMITERERRORIsSet() const;
    void unsetDELIMITER_ERROR();

    void setDELIMITERERROR(int32_t value);

    /// <summary>
    /// Your feed is missing some required column headers.
    /// </summary>
    int32_t getREQUIREDCOLUMNSMISSING() const;
    bool rEQUIREDCOLUMNSMISSINGIsSet() const;
    void unsetREQUIRED_COLUMNS_MISSING();

    void setREQUIREDCOLUMNSMISSING(int32_t value);

    /// <summary>
    /// Some products are duplicated.
    /// </summary>
    int32_t getDUPLICATEPRODUCTS() const;
    bool dUPLICATEPRODUCTSIsSet() const;
    void unsetDUPLICATE_PRODUCTS();

    void setDUPLICATEPRODUCTS(int32_t value);

    /// <summary>
    /// Some image links are formatted incorrectly.
    /// </summary>
    int32_t getIMAGELINKINVALID() const;
    bool iMAGELINKINVALIDIsSet() const;
    void unsetIMAGE_LINK_INVALID();

    void setIMAGELINKINVALID(int32_t value);

    /// <summary>
    /// Some items are missing an item id in their product metadata, those items will not be published.
    /// </summary>
    int32_t getITEMIDMISSING() const;
    bool iTEMIDMISSINGIsSet() const;
    void unsetITEMID_MISSING();

    void setITEMIDMISSING(int32_t value);

    /// <summary>
    /// Some items are missing a title in their product metadata, those items will not be published.
    /// </summary>
    int32_t getTITLEMISSING() const;
    bool tITLEMISSINGIsSet() const;
    void unsetTITLE_MISSING();

    void setTITLEMISSING(int32_t value);

    /// <summary>
    /// Some items are missing a description in their product metadata, those items will not be published.
    /// </summary>
    int32_t getDESCRIPTIONMISSING() const;
    bool dESCRIPTIONMISSINGIsSet() const;
    void unsetDESCRIPTION_MISSING();

    void setDESCRIPTIONMISSING(int32_t value);

    /// <summary>
    /// Some items are missing a link URL in their product metadata, those items will not be published.
    /// </summary>
    int32_t getPRODUCTLINKMISSING() const;
    bool pRODUCTLINKMISSINGIsSet() const;
    void unsetPRODUCT_LINK_MISSING();

    void setPRODUCTLINKMISSING(int32_t value);

    /// <summary>
    /// Some items are missing an image link URL in their product metadata, those items will not be published.
    /// </summary>
    int32_t getIMAGELINKMISSING() const;
    bool iMAGELINKMISSINGIsSet() const;
    void unsetIMAGE_LINK_MISSING();

    void setIMAGELINKMISSING(int32_t value);

    /// <summary>
    /// Some items are missing an availability value in their product metadata, those items will not be published.
    /// </summary>
    int32_t getAVAILABILITYINVALID() const;
    bool aVAILABILITYINVALIDIsSet() const;
    void unsetAVAILABILITY_INVALID();

    void setAVAILABILITYINVALID(int32_t value);

    /// <summary>
    /// Some items have price formatting errors in their product metadata, those items will not be published.
    /// </summary>
    int32_t getPRODUCTPRICEINVALID() const;
    bool pRODUCTPRICEINVALIDIsSet() const;
    void unsetPRODUCT_PRICE_INVALID();

    void setPRODUCTPRICEINVALID(int32_t value);

    /// <summary>
    /// Some link values are formatted incorrectly.
    /// </summary>
    int32_t getLINKFORMATINVALID() const;
    bool lINKFORMATINVALIDIsSet() const;
    void unsetLINK_FORMAT_INVALID();

    void setLINKFORMATINVALID(int32_t value);

    /// <summary>
    /// Your feed contains formatting errors for some items.
    /// </summary>
    int32_t getPARSELINEERROR() const;
    bool pARSELINEERRORIsSet() const;
    void unsetPARSE_LINE_ERROR();

    void setPARSELINEERROR(int32_t value);

    /// <summary>
    /// Some adwords links contain too many characters.
    /// </summary>
    int32_t getADWORDSFORMATINVALID() const;
    bool aDWORDSFORMATINVALIDIsSet() const;
    void unsetADWORDS_FORMAT_INVALID();

    void setADWORDSFORMATINVALID(int32_t value);

    /// <summary>
    /// We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours.
    /// </summary>
    int32_t getINTERNALSERVICEERROR() const;
    bool iNTERNALSERVICEERRORIsSet() const;
    void unsetINTERNAL_SERVICE_ERROR();

    void setINTERNALSERVICEERROR(int32_t value);

    /// <summary>
    /// Your merchant domain needs to be claimed.
    /// </summary>
    int32_t getNOVERIFIEDDOMAIN() const;
    bool nOVERIFIEDDOMAINIsSet() const;
    void unsetNO_VERIFIED_DOMAIN();

    void setNOVERIFIEDDOMAIN(int32_t value);

    /// <summary>
    /// Some items have invalid adult values.
    /// </summary>
    int32_t getADULTINVALID() const;
    bool aDULTINVALIDIsSet() const;
    void unsetADULT_INVALID();

    void setADULTINVALID(int32_t value);

    /// <summary>
    /// Some items have image_link URLs that contain too many characters, so those items will not be published.
    /// </summary>
    int32_t getIMAGELINKLENGTHTOOLONG() const;
    bool iMAGELINKLENGTHTOOLONGIsSet() const;
    void unsetIMAGE_LINK_LENGTH_TOO_LONG();

    void setIMAGELINKLENGTHTOOLONG(int32_t value);

    /// <summary>
    /// Some of your product link values don&#39;t match the verified domain associated with this account.
    /// </summary>
    int32_t getINVALIDDOMAIN() const;
    bool iNVALIDDOMAINIsSet() const;
    void unsetINVALID_DOMAIN();

    void setINVALIDDOMAIN(int32_t value);

    /// <summary>
    /// Your feed contains too many items, some items will not be published.
    /// </summary>
    int32_t getFEEDLENGTHTOOLONG() const;
    bool fEEDLENGTHTOOLONGIsSet() const;
    void unsetFEED_LENGTH_TOO_LONG();

    void setFEEDLENGTHTOOLONG(int32_t value);

    /// <summary>
    /// Some product links contain too many characters, those items will not be published.
    /// </summary>
    int32_t getLINKLENGTHTOOLONG() const;
    bool lINKLENGTHTOOLONGIsSet() const;
    void unsetLINK_LENGTH_TOO_LONG();

    void setLINKLENGTHTOOLONG(int32_t value);

    /// <summary>
    /// Your feed couldn&#39;t be validated because the xml file is formatted incorrectly.
    /// </summary>
    int32_t getMALFORMEDXML() const;
    bool mALFORMEDXMLIsSet() const;
    void unsetMALFORMED_XML();

    void setMALFORMEDXML(int32_t value);

    /// <summary>
    /// Some products are missing a price, those items will not be published.
    /// </summary>
    int32_t getPRICEMISSING() const;
    bool pRICEMISSINGIsSet() const;
    void unsetPRICE_MISSING();

    void setPRICEMISSING(int32_t value);

    /// <summary>
    /// Your feed couldn&#39;t be validated because the file doesn&#39;t contain the minimum number of lines required.
    /// </summary>
    int32_t getFEEDTOOSMALL() const;
    bool fEEDTOOSMALLIsSet() const;
    void unsetFEED_TOO_SMALL();

    void setFEEDTOOSMALL(int32_t value);

    /// <summary>
    /// Some items exceed the maximum number of items per item group, those items will not be published.
    /// </summary>
    int32_t getMAXITEMSPERITEMGROUPEXCEEDED() const;
    bool mAXITEMSPERITEMGROUPEXCEEDEDIsSet() const;
    void unsetMAX_ITEMS_PER_ITEM_GROUP_EXCEEDED();

    void setMAXITEMSPERITEMGROUPEXCEEDED(int32_t value);

    /// <summary>
    /// Some items&#39; main images can&#39;t be found.
    /// </summary>
    int32_t getITEMMAINIMAGEDOWNLOADFAILURE() const;
    bool iTEMMAINIMAGEDOWNLOADFAILUREIsSet() const;
    void unsetITEM_MAIN_IMAGE_DOWNLOAD_FAILURE();

    void setITEMMAINIMAGEDOWNLOADFAILURE(int32_t value);

    /// <summary>
    /// Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines.
    /// </summary>
    int32_t getPINJOINCONTENTUNSAFE() const;
    bool pINJOINCONTENTUNSAFEIsSet() const;
    void unsetPINJOIN_CONTENT_UNSAFE();

    void setPINJOINCONTENTUNSAFE(int32_t value);

    /// <summary>
    /// Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines.
    /// </summary>
    int32_t getBLOCKLISTEDIMAGESIGNATURE() const;
    bool bLOCKLISTEDIMAGESIGNATUREIsSet() const;
    void unsetBLOCKLISTED_IMAGE_SIGNATURE();

    void setBLOCKLISTEDIMAGESIGNATURE(int32_t value);

    /// <summary>
    /// Some items have list price formatting errors in their product metadata, those items will not be published.
    /// </summary>
    int32_t getLISTPRICEINVALID() const;
    bool lISTPRICEINVALIDIsSet() const;
    void unsetLIST_PRICE_INVALID();

    void setLISTPRICEINVALID(int32_t value);

    /// <summary>
    /// Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published.
    /// </summary>
    int32_t getPRICECANNOTBEDETERMINED() const;
    bool pRICECANNOTBEDETERMINEDIsSet() const;
    void unsetPRICE_CANNOT_BE_DETERMINED();

    void setPRICECANNOTBEDETERMINED(int32_t value);


protected:
    int32_t m_FETCH_ERROR;
    bool m_FETCH_ERRORIsSet;
    int32_t m_FETCH_INACTIVE_FEED_ERROR;
    bool m_FETCH_INACTIVE_FEED_ERRORIsSet;
    int32_t m_ENCODING_ERROR;
    bool m_ENCODING_ERRORIsSet;
    int32_t m_DELIMITER_ERROR;
    bool m_DELIMITER_ERRORIsSet;
    int32_t m_REQUIRED_COLUMNS_MISSING;
    bool m_REQUIRED_COLUMNS_MISSINGIsSet;
    int32_t m_DUPLICATE_PRODUCTS;
    bool m_DUPLICATE_PRODUCTSIsSet;
    int32_t m_IMAGE_LINK_INVALID;
    bool m_IMAGE_LINK_INVALIDIsSet;
    int32_t m_ITEMID_MISSING;
    bool m_ITEMID_MISSINGIsSet;
    int32_t m_TITLE_MISSING;
    bool m_TITLE_MISSINGIsSet;
    int32_t m_DESCRIPTION_MISSING;
    bool m_DESCRIPTION_MISSINGIsSet;
    int32_t m_PRODUCT_LINK_MISSING;
    bool m_PRODUCT_LINK_MISSINGIsSet;
    int32_t m_IMAGE_LINK_MISSING;
    bool m_IMAGE_LINK_MISSINGIsSet;
    int32_t m_AVAILABILITY_INVALID;
    bool m_AVAILABILITY_INVALIDIsSet;
    int32_t m_PRODUCT_PRICE_INVALID;
    bool m_PRODUCT_PRICE_INVALIDIsSet;
    int32_t m_LINK_FORMAT_INVALID;
    bool m_LINK_FORMAT_INVALIDIsSet;
    int32_t m_PARSE_LINE_ERROR;
    bool m_PARSE_LINE_ERRORIsSet;
    int32_t m_ADWORDS_FORMAT_INVALID;
    bool m_ADWORDS_FORMAT_INVALIDIsSet;
    int32_t m_INTERNAL_SERVICE_ERROR;
    bool m_INTERNAL_SERVICE_ERRORIsSet;
    int32_t m_NO_VERIFIED_DOMAIN;
    bool m_NO_VERIFIED_DOMAINIsSet;
    int32_t m_ADULT_INVALID;
    bool m_ADULT_INVALIDIsSet;
    int32_t m_IMAGE_LINK_LENGTH_TOO_LONG;
    bool m_IMAGE_LINK_LENGTH_TOO_LONGIsSet;
    int32_t m_INVALID_DOMAIN;
    bool m_INVALID_DOMAINIsSet;
    int32_t m_FEED_LENGTH_TOO_LONG;
    bool m_FEED_LENGTH_TOO_LONGIsSet;
    int32_t m_LINK_LENGTH_TOO_LONG;
    bool m_LINK_LENGTH_TOO_LONGIsSet;
    int32_t m_MALFORMED_XML;
    bool m_MALFORMED_XMLIsSet;
    int32_t m_PRICE_MISSING;
    bool m_PRICE_MISSINGIsSet;
    int32_t m_FEED_TOO_SMALL;
    bool m_FEED_TOO_SMALLIsSet;
    int32_t m_MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED;
    bool m_MAX_ITEMS_PER_ITEM_GROUP_EXCEEDEDIsSet;
    int32_t m_ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE;
    bool m_ITEM_MAIN_IMAGE_DOWNLOAD_FAILUREIsSet;
    int32_t m_PINJOIN_CONTENT_UNSAFE;
    bool m_PINJOIN_CONTENT_UNSAFEIsSet;
    int32_t m_BLOCKLISTED_IMAGE_SIGNATURE;
    bool m_BLOCKLISTED_IMAGE_SIGNATUREIsSet;
    int32_t m_LIST_PRICE_INVALID;
    bool m_LIST_PRICE_INVALIDIsSet;
    int32_t m_PRICE_CANNOT_BE_DETERMINED;
    bool m_PRICE_CANNOT_BE_DETERMINEDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedValidationErrors_H_ */
