/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsItemValidationErrors.h
 *
 * 
 */

#ifndef CatalogsItemValidationErrors_H_
#define CatalogsItemValidationErrors_H_


#include "CatalogsItemValidationDetails.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsItemValidationErrors
{
public:
    CatalogsItemValidationErrors();
    virtual ~CatalogsItemValidationErrors() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const CatalogsItemValidationErrors& rhs) const;
    bool operator!=(const CatalogsItemValidationErrors& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsItemValidationErrors members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getADULTINVALID() const;
    void setADULTINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool aDULTINVALIDIsSet() const;
    void unsetADULT_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getADWORDSFORMATINVALID() const;
    void setADWORDSFORMATINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool aDWORDSFORMATINVALIDIsSet() const;
    void unsetADWORDS_FORMAT_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getAVAILABILITYINVALID() const;
    void setAVAILABILITYINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool aVAILABILITYINVALIDIsSet() const;
    void unsetAVAILABILITY_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getBLOCKLISTEDIMAGESIGNATURE() const;
    void setBLOCKLISTEDIMAGESIGNATURE(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool bLOCKLISTEDIMAGESIGNATUREIsSet() const;
    void unsetBLOCKLISTED_IMAGE_SIGNATURE();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getDESCRIPTIONMISSING() const;
    void setDESCRIPTIONMISSING(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool dESCRIPTIONMISSINGIsSet() const;
    void unsetDESCRIPTION_MISSING();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getIMAGELINKINVALID() const;
    void setIMAGELINKINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool iMAGELINKINVALIDIsSet() const;
    void unsetIMAGE_LINK_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getIMAGELINKLENGTHTOOLONG() const;
    void setIMAGELINKLENGTHTOOLONG(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool iMAGELINKLENGTHTOOLONGIsSet() const;
    void unsetIMAGE_LINK_LENGTH_TOO_LONG();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getIMAGELINKMISSING() const;
    void setIMAGELINKMISSING(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool iMAGELINKMISSINGIsSet() const;
    void unsetIMAGE_LINK_MISSING();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getINVALIDDOMAIN() const;
    void setINVALIDDOMAIN(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool iNVALIDDOMAINIsSet() const;
    void unsetINVALID_DOMAIN();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getITEMIDMISSING() const;
    void setITEMIDMISSING(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool iTEMIDMISSINGIsSet() const;
    void unsetITEMID_MISSING();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getITEMMAINIMAGEDOWNLOADFAILURE() const;
    void setITEMMAINIMAGEDOWNLOADFAILURE(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool iTEMMAINIMAGEDOWNLOADFAILUREIsSet() const;
    void unsetITEM_MAIN_IMAGE_DOWNLOAD_FAILURE();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getLINKFORMATINVALID() const;
    void setLINKFORMATINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool lINKFORMATINVALIDIsSet() const;
    void unsetLINK_FORMAT_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getLINKLENGTHTOOLONG() const;
    void setLINKLENGTHTOOLONG(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool lINKLENGTHTOOLONGIsSet() const;
    void unsetLINK_LENGTH_TOO_LONG();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getLISTPRICEINVALID() const;
    void setLISTPRICEINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool lISTPRICEINVALIDIsSet() const;
    void unsetLIST_PRICE_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getMAXITEMSPERITEMGROUPEXCEEDED() const;
    void setMAXITEMSPERITEMGROUPEXCEEDED(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool mAXITEMSPERITEMGROUPEXCEEDEDIsSet() const;
    void unsetMAX_ITEMS_PER_ITEM_GROUP_EXCEEDED();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getPARSELINEERROR() const;
    void setPARSELINEERROR(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool pARSELINEERRORIsSet() const;
    void unsetPARSE_LINE_ERROR();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getPINJOINCONTENTUNSAFE() const;
    void setPINJOINCONTENTUNSAFE(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool pINJOINCONTENTUNSAFEIsSet() const;
    void unsetPINJOIN_CONTENT_UNSAFE();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getPRICECANNOTBEDETERMINED() const;
    void setPRICECANNOTBEDETERMINED(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool pRICECANNOTBEDETERMINEDIsSet() const;
    void unsetPRICE_CANNOT_BE_DETERMINED();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getPRICEMISSING() const;
    void setPRICEMISSING(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool pRICEMISSINGIsSet() const;
    void unsetPRICE_MISSING();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getPRODUCTLINKMISSING() const;
    void setPRODUCTLINKMISSING(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool pRODUCTLINKMISSINGIsSet() const;
    void unsetPRODUCT_LINK_MISSING();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getPRODUCTPRICEINVALID() const;
    void setPRODUCTPRICEINVALID(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool pRODUCTPRICEINVALIDIsSet() const;
    void unsetPRODUCT_PRICE_INVALID();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsItemValidationDetails getTITLEMISSING() const;
    void setTITLEMISSING(org::openapitools::server::model::CatalogsItemValidationDetails const& value);
    bool tITLEMISSINGIsSet() const;
    void unsetTITLE_MISSING();

    friend void to_json(nlohmann::json& j, const CatalogsItemValidationErrors& o);
    friend void from_json(const nlohmann::json& j, CatalogsItemValidationErrors& o);
protected:
    org::openapitools::server::model::CatalogsItemValidationDetails m_ADULT_INVALID;
    bool m_ADULT_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_ADWORDS_FORMAT_INVALID;
    bool m_ADWORDS_FORMAT_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_AVAILABILITY_INVALID;
    bool m_AVAILABILITY_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_BLOCKLISTED_IMAGE_SIGNATURE;
    bool m_BLOCKLISTED_IMAGE_SIGNATUREIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_DESCRIPTION_MISSING;
    bool m_DESCRIPTION_MISSINGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_IMAGE_LINK_INVALID;
    bool m_IMAGE_LINK_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_IMAGE_LINK_LENGTH_TOO_LONG;
    bool m_IMAGE_LINK_LENGTH_TOO_LONGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_IMAGE_LINK_MISSING;
    bool m_IMAGE_LINK_MISSINGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_INVALID_DOMAIN;
    bool m_INVALID_DOMAINIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_ITEMID_MISSING;
    bool m_ITEMID_MISSINGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE;
    bool m_ITEM_MAIN_IMAGE_DOWNLOAD_FAILUREIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_LINK_FORMAT_INVALID;
    bool m_LINK_FORMAT_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_LINK_LENGTH_TOO_LONG;
    bool m_LINK_LENGTH_TOO_LONGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_LIST_PRICE_INVALID;
    bool m_LIST_PRICE_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED;
    bool m_MAX_ITEMS_PER_ITEM_GROUP_EXCEEDEDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_PARSE_LINE_ERROR;
    bool m_PARSE_LINE_ERRORIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_PINJOIN_CONTENT_UNSAFE;
    bool m_PINJOIN_CONTENT_UNSAFEIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_PRICE_CANNOT_BE_DETERMINED;
    bool m_PRICE_CANNOT_BE_DETERMINEDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_PRICE_MISSING;
    bool m_PRICE_MISSINGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_PRODUCT_LINK_MISSING;
    bool m_PRODUCT_LINK_MISSINGIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_PRODUCT_PRICE_INVALID;
    bool m_PRODUCT_PRICE_INVALIDIsSet;
    org::openapitools::server::model::CatalogsItemValidationDetails m_TITLE_MISSING;
    bool m_TITLE_MISSINGIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsItemValidationErrors_H_ */
