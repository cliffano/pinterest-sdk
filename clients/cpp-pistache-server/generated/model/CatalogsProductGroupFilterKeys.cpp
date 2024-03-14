/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "CatalogsProductGroupFilterKeys.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupFilterKeys::CatalogsProductGroupFilterKeys()
{
    
}

void CatalogsProductGroupFilterKeys::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupFilterKeys::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupFilterKeys::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupFilterKeys" : pathPrefix;

        
    if (!m_MIN_PRICE.validate()) {
        msg << _pathPrefix << ": MIN_PRICE is invalid;";
        success = false;
    }    
    if (!m_MAX_PRICE.validate()) {
        msg << _pathPrefix << ": MAX_PRICE is invalid;";
        success = false;
    }    
    if (!m_CURRENCY.validate()) {
        msg << _pathPrefix << ": CURRENCY is invalid;";
        success = false;
    }    
    if (!m_ITEM_ID.validate()) {
        msg << _pathPrefix << ": ITEM_ID is invalid;";
        success = false;
    }    
    if (!m_AVAILABILITY.validate()) {
        msg << _pathPrefix << ": AVAILABILITY is invalid;";
        success = false;
    }    
    if (!m_BRAND.validate()) {
        msg << _pathPrefix << ": BRAND is invalid;";
        success = false;
    }    
    if (!m_CONDITION.validate()) {
        msg << _pathPrefix << ": CONDITION is invalid;";
        success = false;
    }    
    if (!m_CUSTOM_LABEL_0.validate()) {
        msg << _pathPrefix << ": CUSTOM_LABEL_0 is invalid;";
        success = false;
    }    
    if (!m_CUSTOM_LABEL_1.validate()) {
        msg << _pathPrefix << ": CUSTOM_LABEL_1 is invalid;";
        success = false;
    }    
    if (!m_CUSTOM_LABEL_2.validate()) {
        msg << _pathPrefix << ": CUSTOM_LABEL_2 is invalid;";
        success = false;
    }    
    if (!m_CUSTOM_LABEL_3.validate()) {
        msg << _pathPrefix << ": CUSTOM_LABEL_3 is invalid;";
        success = false;
    }    
    if (!m_CUSTOM_LABEL_4.validate()) {
        msg << _pathPrefix << ": CUSTOM_LABEL_4 is invalid;";
        success = false;
    }    
    if (!m_ITEM_GROUP_ID.validate()) {
        msg << _pathPrefix << ": ITEM_GROUP_ID is invalid;";
        success = false;
    }    
    if (!m_GENDER.validate()) {
        msg << _pathPrefix << ": GENDER is invalid;";
        success = false;
    }    
    if (!m_PRODUCT_TYPE_4.validate()) {
        msg << _pathPrefix << ": PRODUCT_TYPE_4 is invalid;";
        success = false;
    }    
    if (!m_PRODUCT_TYPE_3.validate()) {
        msg << _pathPrefix << ": PRODUCT_TYPE_3 is invalid;";
        success = false;
    }    
    if (!m_PRODUCT_TYPE_2.validate()) {
        msg << _pathPrefix << ": PRODUCT_TYPE_2 is invalid;";
        success = false;
    }    
    if (!m_PRODUCT_TYPE_1.validate()) {
        msg << _pathPrefix << ": PRODUCT_TYPE_1 is invalid;";
        success = false;
    }    
    if (!m_PRODUCT_TYPE_0.validate()) {
        msg << _pathPrefix << ": PRODUCT_TYPE_0 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_6.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_6 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_5.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_5 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_4.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_4 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_3.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_3 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_2.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_2 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_1.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_1 is invalid;";
        success = false;
    }    
    if (!m_GOOGLE_PRODUCT_CATEGORY_0.validate()) {
        msg << _pathPrefix << ": GOOGLE_PRODUCT_CATEGORY_0 is invalid;";
        success = false;
    }
    return success;
}

bool CatalogsProductGroupFilterKeys::operator==(const CatalogsProductGroupFilterKeys& rhs) const
{
    return
    
    
    (getMINPRICE() == rhs.getMINPRICE())
     &&
    
    (getMAXPRICE() == rhs.getMAXPRICE())
     &&
    
    (getCURRENCY() == rhs.getCURRENCY())
     &&
    
    (getITEMID() == rhs.getITEMID())
     &&
    
    (getAVAILABILITY() == rhs.getAVAILABILITY())
     &&
    
    (getBRAND() == rhs.getBRAND())
     &&
    
    (getCONDITION() == rhs.getCONDITION())
     &&
    
    (getCUSTOMLABEL0() == rhs.getCUSTOMLABEL0())
     &&
    
    (getCUSTOMLABEL1() == rhs.getCUSTOMLABEL1())
     &&
    
    (getCUSTOMLABEL2() == rhs.getCUSTOMLABEL2())
     &&
    
    (getCUSTOMLABEL3() == rhs.getCUSTOMLABEL3())
     &&
    
    (getCUSTOMLABEL4() == rhs.getCUSTOMLABEL4())
     &&
    
    (getITEMGROUPID() == rhs.getITEMGROUPID())
     &&
    
    (getGENDER() == rhs.getGENDER())
     &&
    
    (getPRODUCTTYPE4() == rhs.getPRODUCTTYPE4())
     &&
    
    (getPRODUCTTYPE3() == rhs.getPRODUCTTYPE3())
     &&
    
    (getPRODUCTTYPE2() == rhs.getPRODUCTTYPE2())
     &&
    
    (getPRODUCTTYPE1() == rhs.getPRODUCTTYPE1())
     &&
    
    (getPRODUCTTYPE0() == rhs.getPRODUCTTYPE0())
     &&
    
    (getGOOGLEPRODUCTCATEGORY6() == rhs.getGOOGLEPRODUCTCATEGORY6())
     &&
    
    (getGOOGLEPRODUCTCATEGORY5() == rhs.getGOOGLEPRODUCTCATEGORY5())
     &&
    
    (getGOOGLEPRODUCTCATEGORY4() == rhs.getGOOGLEPRODUCTCATEGORY4())
     &&
    
    (getGOOGLEPRODUCTCATEGORY3() == rhs.getGOOGLEPRODUCTCATEGORY3())
     &&
    
    (getGOOGLEPRODUCTCATEGORY2() == rhs.getGOOGLEPRODUCTCATEGORY2())
     &&
    
    (getGOOGLEPRODUCTCATEGORY1() == rhs.getGOOGLEPRODUCTCATEGORY1())
     &&
    
    (getGOOGLEPRODUCTCATEGORY0() == rhs.getGOOGLEPRODUCTCATEGORY0())
    
    
    ;
}

bool CatalogsProductGroupFilterKeys::operator!=(const CatalogsProductGroupFilterKeys& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupFilterKeys& o)
{
    j = nlohmann::json::object();
    j["MIN_PRICE"] = o.m_MIN_PRICE;
    j["MAX_PRICE"] = o.m_MAX_PRICE;
    j["CURRENCY"] = o.m_CURRENCY;
    j["ITEM_ID"] = o.m_ITEM_ID;
    j["AVAILABILITY"] = o.m_AVAILABILITY;
    j["BRAND"] = o.m_BRAND;
    j["CONDITION"] = o.m_CONDITION;
    j["CUSTOM_LABEL_0"] = o.m_CUSTOM_LABEL_0;
    j["CUSTOM_LABEL_1"] = o.m_CUSTOM_LABEL_1;
    j["CUSTOM_LABEL_2"] = o.m_CUSTOM_LABEL_2;
    j["CUSTOM_LABEL_3"] = o.m_CUSTOM_LABEL_3;
    j["CUSTOM_LABEL_4"] = o.m_CUSTOM_LABEL_4;
    j["ITEM_GROUP_ID"] = o.m_ITEM_GROUP_ID;
    j["GENDER"] = o.m_GENDER;
    j["PRODUCT_TYPE_4"] = o.m_PRODUCT_TYPE_4;
    j["PRODUCT_TYPE_3"] = o.m_PRODUCT_TYPE_3;
    j["PRODUCT_TYPE_2"] = o.m_PRODUCT_TYPE_2;
    j["PRODUCT_TYPE_1"] = o.m_PRODUCT_TYPE_1;
    j["PRODUCT_TYPE_0"] = o.m_PRODUCT_TYPE_0;
    j["GOOGLE_PRODUCT_CATEGORY_6"] = o.m_GOOGLE_PRODUCT_CATEGORY_6;
    j["GOOGLE_PRODUCT_CATEGORY_5"] = o.m_GOOGLE_PRODUCT_CATEGORY_5;
    j["GOOGLE_PRODUCT_CATEGORY_4"] = o.m_GOOGLE_PRODUCT_CATEGORY_4;
    j["GOOGLE_PRODUCT_CATEGORY_3"] = o.m_GOOGLE_PRODUCT_CATEGORY_3;
    j["GOOGLE_PRODUCT_CATEGORY_2"] = o.m_GOOGLE_PRODUCT_CATEGORY_2;
    j["GOOGLE_PRODUCT_CATEGORY_1"] = o.m_GOOGLE_PRODUCT_CATEGORY_1;
    j["GOOGLE_PRODUCT_CATEGORY_0"] = o.m_GOOGLE_PRODUCT_CATEGORY_0;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroupFilterKeys& o)
{
    j.at("MIN_PRICE").get_to(o.m_MIN_PRICE);
    j.at("MAX_PRICE").get_to(o.m_MAX_PRICE);
    j.at("CURRENCY").get_to(o.m_CURRENCY);
    j.at("ITEM_ID").get_to(o.m_ITEM_ID);
    j.at("AVAILABILITY").get_to(o.m_AVAILABILITY);
    j.at("BRAND").get_to(o.m_BRAND);
    j.at("CONDITION").get_to(o.m_CONDITION);
    j.at("CUSTOM_LABEL_0").get_to(o.m_CUSTOM_LABEL_0);
    j.at("CUSTOM_LABEL_1").get_to(o.m_CUSTOM_LABEL_1);
    j.at("CUSTOM_LABEL_2").get_to(o.m_CUSTOM_LABEL_2);
    j.at("CUSTOM_LABEL_3").get_to(o.m_CUSTOM_LABEL_3);
    j.at("CUSTOM_LABEL_4").get_to(o.m_CUSTOM_LABEL_4);
    j.at("ITEM_GROUP_ID").get_to(o.m_ITEM_GROUP_ID);
    j.at("GENDER").get_to(o.m_GENDER);
    j.at("PRODUCT_TYPE_4").get_to(o.m_PRODUCT_TYPE_4);
    j.at("PRODUCT_TYPE_3").get_to(o.m_PRODUCT_TYPE_3);
    j.at("PRODUCT_TYPE_2").get_to(o.m_PRODUCT_TYPE_2);
    j.at("PRODUCT_TYPE_1").get_to(o.m_PRODUCT_TYPE_1);
    j.at("PRODUCT_TYPE_0").get_to(o.m_PRODUCT_TYPE_0);
    j.at("GOOGLE_PRODUCT_CATEGORY_6").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_6);
    j.at("GOOGLE_PRODUCT_CATEGORY_5").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_5);
    j.at("GOOGLE_PRODUCT_CATEGORY_4").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_4);
    j.at("GOOGLE_PRODUCT_CATEGORY_3").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_3);
    j.at("GOOGLE_PRODUCT_CATEGORY_2").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_2);
    j.at("GOOGLE_PRODUCT_CATEGORY_1").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_1);
    j.at("GOOGLE_PRODUCT_CATEGORY_0").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_0);
    
}

org::openapitools::server::model::CatalogsProductGroupPricingCriteria CatalogsProductGroupFilterKeys::getMINPRICE() const
{
    return m_MIN_PRICE;
}
void CatalogsProductGroupFilterKeys::setMINPRICE(org::openapitools::server::model::CatalogsProductGroupPricingCriteria const& value)
{
    m_MIN_PRICE = value;
}
org::openapitools::server::model::CatalogsProductGroupPricingCriteria CatalogsProductGroupFilterKeys::getMAXPRICE() const
{
    return m_MAX_PRICE;
}
void CatalogsProductGroupFilterKeys::setMAXPRICE(org::openapitools::server::model::CatalogsProductGroupPricingCriteria const& value)
{
    m_MAX_PRICE = value;
}
org::openapitools::server::model::CatalogsProductGroupCurrencyCriteria CatalogsProductGroupFilterKeys::getCURRENCY() const
{
    return m_CURRENCY;
}
void CatalogsProductGroupFilterKeys::setCURRENCY(org::openapitools::server::model::CatalogsProductGroupCurrencyCriteria const& value)
{
    m_CURRENCY = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getITEMID() const
{
    return m_ITEM_ID;
}
void CatalogsProductGroupFilterKeys::setITEMID(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_ITEM_ID = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getAVAILABILITY() const
{
    return m_AVAILABILITY;
}
void CatalogsProductGroupFilterKeys::setAVAILABILITY(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_AVAILABILITY = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getBRAND() const
{
    return m_BRAND;
}
void CatalogsProductGroupFilterKeys::setBRAND(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_BRAND = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getCONDITION() const
{
    return m_CONDITION;
}
void CatalogsProductGroupFilterKeys::setCONDITION(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CONDITION = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getCUSTOMLABEL0() const
{
    return m_CUSTOM_LABEL_0;
}
void CatalogsProductGroupFilterKeys::setCUSTOMLABEL0(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_0 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getCUSTOMLABEL1() const
{
    return m_CUSTOM_LABEL_1;
}
void CatalogsProductGroupFilterKeys::setCUSTOMLABEL1(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_1 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getCUSTOMLABEL2() const
{
    return m_CUSTOM_LABEL_2;
}
void CatalogsProductGroupFilterKeys::setCUSTOMLABEL2(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_2 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getCUSTOMLABEL3() const
{
    return m_CUSTOM_LABEL_3;
}
void CatalogsProductGroupFilterKeys::setCUSTOMLABEL3(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_3 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getCUSTOMLABEL4() const
{
    return m_CUSTOM_LABEL_4;
}
void CatalogsProductGroupFilterKeys::setCUSTOMLABEL4(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_4 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getITEMGROUPID() const
{
    return m_ITEM_GROUP_ID;
}
void CatalogsProductGroupFilterKeys::setITEMGROUPID(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_ITEM_GROUP_ID = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CatalogsProductGroupFilterKeys::getGENDER() const
{
    return m_GENDER;
}
void CatalogsProductGroupFilterKeys::setGENDER(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_GENDER = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getPRODUCTTYPE4() const
{
    return m_PRODUCT_TYPE_4;
}
void CatalogsProductGroupFilterKeys::setPRODUCTTYPE4(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_4 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getPRODUCTTYPE3() const
{
    return m_PRODUCT_TYPE_3;
}
void CatalogsProductGroupFilterKeys::setPRODUCTTYPE3(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_3 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getPRODUCTTYPE2() const
{
    return m_PRODUCT_TYPE_2;
}
void CatalogsProductGroupFilterKeys::setPRODUCTTYPE2(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_2 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getPRODUCTTYPE1() const
{
    return m_PRODUCT_TYPE_1;
}
void CatalogsProductGroupFilterKeys::setPRODUCTTYPE1(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_1 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getPRODUCTTYPE0() const
{
    return m_PRODUCT_TYPE_0;
}
void CatalogsProductGroupFilterKeys::setPRODUCTTYPE0(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_0 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY6() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_6;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY6(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_6 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY5() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_5;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY5(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_5 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY4() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_4;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY4(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_4 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY3() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_3;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY3(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_3 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY2() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_2;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY2(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_2 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY1() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_1;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY1(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_1 = value;
}
org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria CatalogsProductGroupFilterKeys::getGOOGLEPRODUCTCATEGORY0() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_0;
}
void CatalogsProductGroupFilterKeys::setGOOGLEPRODUCTCATEGORY0(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_0 = value;
}


} // namespace org::openapitools::server::model

