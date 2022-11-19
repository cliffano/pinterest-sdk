/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsProductMetadata.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProductMetadata::CatalogsProductMetadata()
{
    m_Item_id = utility::conversions::to_string_t("");
    m_Item_idIsSet = false;
    m_Item_group_id = utility::conversions::to_string_t("");
    m_Item_group_idIsSet = false;
    m_AvailabilityIsSet = false;
    m_Price = 0.0;
    m_PriceIsSet = false;
    m_Sale_price = 0.0;
    m_Sale_priceIsSet = false;
    m_CurrencyIsSet = false;
}

CatalogsProductMetadata::~CatalogsProductMetadata()
{
}

void CatalogsProductMetadata::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductMetadata::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Item_idIsSet)
    {
        val[utility::conversions::to_string_t(U("item_id"))] = ModelBase::toJson(m_Item_id);
    }
    if(m_Item_group_idIsSet)
    {
        val[utility::conversions::to_string_t(U("item_group_id"))] = ModelBase::toJson(m_Item_group_id);
    }
    if(m_AvailabilityIsSet)
    {
        val[utility::conversions::to_string_t(U("availability"))] = ModelBase::toJson(m_Availability);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t(U("price"))] = ModelBase::toJson(m_Price);
    }
    if(m_Sale_priceIsSet)
    {
        val[utility::conversions::to_string_t(U("sale_price"))] = ModelBase::toJson(m_Sale_price);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t(U("currency"))] = ModelBase::toJson(m_Currency);
    }

    return val;
}

bool CatalogsProductMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("item_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("item_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setItemId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItemId);
            setItemId(refVal_setItemId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("item_group_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("item_group_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setItemGroupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItemGroupId);
            setItemGroupId(refVal_setItemGroupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("availability"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("availability")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NonNullableProductAvailabilityType> refVal_setAvailability;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAvailability);
            setAvailability(refVal_setAvailability);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("price"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("price")));
        if(!fieldValue.is_null())
        {
            double refVal_setPrice;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPrice);
            setPrice(refVal_setPrice);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sale_price"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sale_price")));
        if(!fieldValue.is_null())
        {
            double refVal_setSalePrice;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSalePrice);
            setSalePrice(refVal_setSalePrice);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("currency")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NonNullableCatalogsCurrency> refVal_setCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCurrency);
            setCurrency(refVal_setCurrency);
        }
    }
    return ok;
}

void CatalogsProductMetadata::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("item_id")), m_Item_id));
    }
    if(m_Item_group_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("item_group_id")), m_Item_group_id));
    }
    if(m_AvailabilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("availability")), m_Availability));
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("price")), m_Price));
    }
    if(m_Sale_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sale_price")), m_Sale_price));
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("currency")), m_Currency));
    }
}

bool CatalogsProductMetadata::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("item_id"))))
    {
        utility::string_t refVal_setItemId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("item_id"))), refVal_setItemId );
        setItemId(refVal_setItemId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("item_group_id"))))
    {
        utility::string_t refVal_setItemGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("item_group_id"))), refVal_setItemGroupId );
        setItemGroupId(refVal_setItemGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("availability"))))
    {
        std::shared_ptr<NonNullableProductAvailabilityType> refVal_setAvailability;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("availability"))), refVal_setAvailability );
        setAvailability(refVal_setAvailability);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("price"))))
    {
        double refVal_setPrice;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("price"))), refVal_setPrice );
        setPrice(refVal_setPrice);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sale_price"))))
    {
        double refVal_setSalePrice;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sale_price"))), refVal_setSalePrice );
        setSalePrice(refVal_setSalePrice);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("currency"))))
    {
        std::shared_ptr<NonNullableCatalogsCurrency> refVal_setCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("currency"))), refVal_setCurrency );
        setCurrency(refVal_setCurrency);
    }
    return ok;
}

utility::string_t CatalogsProductMetadata::getItemId() const
{
    return m_Item_id;
}

void CatalogsProductMetadata::setItemId(const utility::string_t& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}

bool CatalogsProductMetadata::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void CatalogsProductMetadata::unsetItem_id()
{
    m_Item_idIsSet = false;
}
utility::string_t CatalogsProductMetadata::getItemGroupId() const
{
    return m_Item_group_id;
}

void CatalogsProductMetadata::setItemGroupId(const utility::string_t& value)
{
    m_Item_group_id = value;
    m_Item_group_idIsSet = true;
}

bool CatalogsProductMetadata::itemGroupIdIsSet() const
{
    return m_Item_group_idIsSet;
}

void CatalogsProductMetadata::unsetItem_group_id()
{
    m_Item_group_idIsSet = false;
}
std::shared_ptr<NonNullableProductAvailabilityType> CatalogsProductMetadata::getAvailability() const
{
    return m_Availability;
}

void CatalogsProductMetadata::setAvailability(const std::shared_ptr<NonNullableProductAvailabilityType>& value)
{
    m_Availability = value;
    m_AvailabilityIsSet = true;
}

bool CatalogsProductMetadata::availabilityIsSet() const
{
    return m_AvailabilityIsSet;
}

void CatalogsProductMetadata::unsetAvailability()
{
    m_AvailabilityIsSet = false;
}
double CatalogsProductMetadata::getPrice() const
{
    return m_Price;
}

void CatalogsProductMetadata::setPrice(double value)
{
    m_Price = value;
    m_PriceIsSet = true;
}

bool CatalogsProductMetadata::priceIsSet() const
{
    return m_PriceIsSet;
}

void CatalogsProductMetadata::unsetPrice()
{
    m_PriceIsSet = false;
}
double CatalogsProductMetadata::getSalePrice() const
{
    return m_Sale_price;
}

void CatalogsProductMetadata::setSalePrice(double value)
{
    m_Sale_price = value;
    m_Sale_priceIsSet = true;
}

bool CatalogsProductMetadata::salePriceIsSet() const
{
    return m_Sale_priceIsSet;
}

void CatalogsProductMetadata::unsetSale_price()
{
    m_Sale_priceIsSet = false;
}
std::shared_ptr<NonNullableCatalogsCurrency> CatalogsProductMetadata::getCurrency() const
{
    return m_Currency;
}

void CatalogsProductMetadata::setCurrency(const std::shared_ptr<NonNullableCatalogsCurrency>& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}

bool CatalogsProductMetadata::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void CatalogsProductMetadata::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
}
}
}
}


