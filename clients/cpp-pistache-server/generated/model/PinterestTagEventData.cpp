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


#include "PinterestTagEventData.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

PinterestTagEventData::PinterestTagEventData()
{
    m_CurrencyIsSet = false;
    m_Lead_type = "";
    m_Lead_typeIsSet = false;
    m_Line_itemsIsSet = false;
    m_Order_id = "";
    m_Order_idIsSet = false;
    m_Order_quantity = 0;
    m_Order_quantityIsSet = false;
    m_Page_name = "";
    m_Page_nameIsSet = false;
    m_Promo_code = "";
    m_Promo_codeIsSet = false;
    m_Property = "";
    m_PropertyIsSet = false;
    m_Search_query = "";
    m_Search_queryIsSet = false;
    m_Value = "";
    m_ValueIsSet = false;
    m_Video_title = "";
    m_Video_titleIsSet = false;
    
}

void PinterestTagEventData::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PinterestTagEventData::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PinterestTagEventData::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PinterestTagEventData" : pathPrefix;

                                                
    return success;
}

bool PinterestTagEventData::operator==(const PinterestTagEventData& rhs) const
{
    return
    
    
    
    ((!currencyIsSet() && !rhs.currencyIsSet()) || (currencyIsSet() && rhs.currencyIsSet() && getCurrency() == rhs.getCurrency())) &&
    
    
    ((!leadTypeIsSet() && !rhs.leadTypeIsSet()) || (leadTypeIsSet() && rhs.leadTypeIsSet() && getLeadType() == rhs.getLeadType())) &&
    
    
    ((!lineItemsIsSet() && !rhs.lineItemsIsSet()) || (lineItemsIsSet() && rhs.lineItemsIsSet() && getLineItems() == rhs.getLineItems())) &&
    
    
    ((!orderIdIsSet() && !rhs.orderIdIsSet()) || (orderIdIsSet() && rhs.orderIdIsSet() && getOrderId() == rhs.getOrderId())) &&
    
    
    ((!orderQuantityIsSet() && !rhs.orderQuantityIsSet()) || (orderQuantityIsSet() && rhs.orderQuantityIsSet() && getOrderQuantity() == rhs.getOrderQuantity())) &&
    
    
    ((!pageNameIsSet() && !rhs.pageNameIsSet()) || (pageNameIsSet() && rhs.pageNameIsSet() && getPageName() == rhs.getPageName())) &&
    
    
    ((!promoCodeIsSet() && !rhs.promoCodeIsSet()) || (promoCodeIsSet() && rhs.promoCodeIsSet() && getPromoCode() == rhs.getPromoCode())) &&
    
    
    ((!propertyIsSet() && !rhs.propertyIsSet()) || (propertyIsSet() && rhs.propertyIsSet() && getProperty() == rhs.getProperty())) &&
    
    
    ((!searchQueryIsSet() && !rhs.searchQueryIsSet()) || (searchQueryIsSet() && rhs.searchQueryIsSet() && getSearchQuery() == rhs.getSearchQuery())) &&
    
    
    ((!valueIsSet() && !rhs.valueIsSet()) || (valueIsSet() && rhs.valueIsSet() && getValue() == rhs.getValue())) &&
    
    
    ((!videoTitleIsSet() && !rhs.videoTitleIsSet()) || (videoTitleIsSet() && rhs.videoTitleIsSet() && getVideoTitle() == rhs.getVideoTitle()))
    
    ;
}

bool PinterestTagEventData::operator!=(const PinterestTagEventData& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PinterestTagEventData& o)
{
    j = nlohmann::json();
    if(o.currencyIsSet())
        j["currency"] = o.m_Currency;
    if(o.leadTypeIsSet())
        j["lead_type"] = o.m_Lead_type;
    if(o.lineItemsIsSet())
        j["line_items"] = o.m_Line_items;
    if(o.orderIdIsSet())
        j["order_id"] = o.m_Order_id;
    if(o.orderQuantityIsSet())
        j["order_quantity"] = o.m_Order_quantity;
    if(o.pageNameIsSet())
        j["page_name"] = o.m_Page_name;
    if(o.promoCodeIsSet())
        j["promo_code"] = o.m_Promo_code;
    if(o.propertyIsSet())
        j["property"] = o.m_Property;
    if(o.searchQueryIsSet())
        j["search_query"] = o.m_Search_query;
    if(o.valueIsSet())
        j["value"] = o.m_Value;
    if(o.videoTitleIsSet())
        j["video_title"] = o.m_Video_title;
    
}

void from_json(const nlohmann::json& j, PinterestTagEventData& o)
{
    if(j.find("currency") != j.end())
    {
        j.at("currency").get_to(o.m_Currency);
        o.m_CurrencyIsSet = true;
    } 
    if(j.find("lead_type") != j.end())
    {
        j.at("lead_type").get_to(o.m_Lead_type);
        o.m_Lead_typeIsSet = true;
    } 
    if(j.find("line_items") != j.end())
    {
        j.at("line_items").get_to(o.m_Line_items);
        o.m_Line_itemsIsSet = true;
    } 
    if(j.find("order_id") != j.end())
    {
        j.at("order_id").get_to(o.m_Order_id);
        o.m_Order_idIsSet = true;
    } 
    if(j.find("order_quantity") != j.end())
    {
        j.at("order_quantity").get_to(o.m_Order_quantity);
        o.m_Order_quantityIsSet = true;
    } 
    if(j.find("page_name") != j.end())
    {
        j.at("page_name").get_to(o.m_Page_name);
        o.m_Page_nameIsSet = true;
    } 
    if(j.find("promo_code") != j.end())
    {
        j.at("promo_code").get_to(o.m_Promo_code);
        o.m_Promo_codeIsSet = true;
    } 
    if(j.find("property") != j.end())
    {
        j.at("property").get_to(o.m_Property);
        o.m_PropertyIsSet = true;
    } 
    if(j.find("search_query") != j.end())
    {
        j.at("search_query").get_to(o.m_Search_query);
        o.m_Search_queryIsSet = true;
    } 
    if(j.find("value") != j.end())
    {
        j.at("value").get_to(o.m_Value);
        o.m_ValueIsSet = true;
    } 
    if(j.find("video_title") != j.end())
    {
        j.at("video_title").get_to(o.m_Video_title);
        o.m_Video_titleIsSet = true;
    } 
    
}

org::openapitools::server::model::Currency PinterestTagEventData::getCurrency() const
{
    return m_Currency;
}
void PinterestTagEventData::setCurrency(org::openapitools::server::model::Currency const& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool PinterestTagEventData::currencyIsSet() const
{
    return m_CurrencyIsSet;
}
void PinterestTagEventData::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
std::string PinterestTagEventData::getLeadType() const
{
    return m_Lead_type;
}
void PinterestTagEventData::setLeadType(std::string const& value)
{
    m_Lead_type = value;
    m_Lead_typeIsSet = true;
}
bool PinterestTagEventData::leadTypeIsSet() const
{
    return m_Lead_typeIsSet;
}
void PinterestTagEventData::unsetLead_type()
{
    m_Lead_typeIsSet = false;
}
org::openapitools::server::model::LineItem PinterestTagEventData::getLineItems() const
{
    return m_Line_items;
}
void PinterestTagEventData::setLineItems(org::openapitools::server::model::LineItem const& value)
{
    m_Line_items = value;
    m_Line_itemsIsSet = true;
}
bool PinterestTagEventData::lineItemsIsSet() const
{
    return m_Line_itemsIsSet;
}
void PinterestTagEventData::unsetLine_items()
{
    m_Line_itemsIsSet = false;
}
std::string PinterestTagEventData::getOrderId() const
{
    return m_Order_id;
}
void PinterestTagEventData::setOrderId(std::string const& value)
{
    m_Order_id = value;
    m_Order_idIsSet = true;
}
bool PinterestTagEventData::orderIdIsSet() const
{
    return m_Order_idIsSet;
}
void PinterestTagEventData::unsetOrder_id()
{
    m_Order_idIsSet = false;
}
int32_t PinterestTagEventData::getOrderQuantity() const
{
    return m_Order_quantity;
}
void PinterestTagEventData::setOrderQuantity(int32_t const value)
{
    m_Order_quantity = value;
    m_Order_quantityIsSet = true;
}
bool PinterestTagEventData::orderQuantityIsSet() const
{
    return m_Order_quantityIsSet;
}
void PinterestTagEventData::unsetOrder_quantity()
{
    m_Order_quantityIsSet = false;
}
std::string PinterestTagEventData::getPageName() const
{
    return m_Page_name;
}
void PinterestTagEventData::setPageName(std::string const& value)
{
    m_Page_name = value;
    m_Page_nameIsSet = true;
}
bool PinterestTagEventData::pageNameIsSet() const
{
    return m_Page_nameIsSet;
}
void PinterestTagEventData::unsetPage_name()
{
    m_Page_nameIsSet = false;
}
std::string PinterestTagEventData::getPromoCode() const
{
    return m_Promo_code;
}
void PinterestTagEventData::setPromoCode(std::string const& value)
{
    m_Promo_code = value;
    m_Promo_codeIsSet = true;
}
bool PinterestTagEventData::promoCodeIsSet() const
{
    return m_Promo_codeIsSet;
}
void PinterestTagEventData::unsetPromo_code()
{
    m_Promo_codeIsSet = false;
}
std::string PinterestTagEventData::getProperty() const
{
    return m_Property;
}
void PinterestTagEventData::setProperty(std::string const& value)
{
    m_Property = value;
    m_PropertyIsSet = true;
}
bool PinterestTagEventData::propertyIsSet() const
{
    return m_PropertyIsSet;
}
void PinterestTagEventData::unsetProperty()
{
    m_PropertyIsSet = false;
}
std::string PinterestTagEventData::getSearchQuery() const
{
    return m_Search_query;
}
void PinterestTagEventData::setSearchQuery(std::string const& value)
{
    m_Search_query = value;
    m_Search_queryIsSet = true;
}
bool PinterestTagEventData::searchQueryIsSet() const
{
    return m_Search_queryIsSet;
}
void PinterestTagEventData::unsetSearch_query()
{
    m_Search_queryIsSet = false;
}
std::string PinterestTagEventData::getValue() const
{
    return m_Value;
}
void PinterestTagEventData::setValue(std::string const& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool PinterestTagEventData::valueIsSet() const
{
    return m_ValueIsSet;
}
void PinterestTagEventData::unsetValue()
{
    m_ValueIsSet = false;
}
std::string PinterestTagEventData::getVideoTitle() const
{
    return m_Video_title;
}
void PinterestTagEventData::setVideoTitle(std::string const& value)
{
    m_Video_title = value;
    m_Video_titleIsSet = true;
}
bool PinterestTagEventData::videoTitleIsSet() const
{
    return m_Video_titleIsSet;
}
void PinterestTagEventData::unsetVideo_title()
{
    m_Video_titleIsSet = false;
}


} // namespace org::openapitools::server::model

