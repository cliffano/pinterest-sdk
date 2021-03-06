/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "AdAccount.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




AdAccount::AdAccount()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_OwnerIsSet = false;
    m_CountryIsSet = false;
    m_CurrencyIsSet = false;
}

AdAccount::~AdAccount()
{
}

void AdAccount::validate()
{
    // TODO: implement validation
}

web::json::value AdAccount::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t(U("owner"))] = ModelBase::toJson(m_Owner);
    }
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t(U("country"))] = ModelBase::toJson(m_Country);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t(U("currency"))] = ModelBase::toJson(m_Currency);
    }

    return val;
}

bool AdAccount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("owner")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ad_account_owner> refVal_owner;
            ok &= ModelBase::fromJson(fieldValue, refVal_owner);
            setOwner(refVal_owner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("country"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("country")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Country> refVal_country;
            ok &= ModelBase::fromJson(fieldValue, refVal_country);
            setCountry(refVal_country);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("currency")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Currency> refVal_currency;
            ok &= ModelBase::fromJson(fieldValue, refVal_currency);
            setCurrency(refVal_currency);
        }
    }
    return ok;
}

void AdAccount::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("owner")), m_Owner));
    }
    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("country")), m_Country));
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("currency")), m_Currency));
    }
}

bool AdAccount::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("owner"))))
    {
        std::shared_ptr<Ad_account_owner> refVal_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("owner"))), refVal_owner );
        setOwner(refVal_owner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("country"))))
    {
        std::shared_ptr<Country> refVal_country;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("country"))), refVal_country );
        setCountry(refVal_country);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("currency"))))
    {
        std::shared_ptr<Currency> refVal_currency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("currency"))), refVal_currency );
        setCurrency(refVal_currency);
    }
    return ok;
}

utility::string_t AdAccount::getId() const
{
    return m_Id;
}

void AdAccount::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AdAccount::idIsSet() const
{
    return m_IdIsSet;
}

void AdAccount::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t AdAccount::getName() const
{
    return m_Name;
}

void AdAccount::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool AdAccount::nameIsSet() const
{
    return m_NameIsSet;
}

void AdAccount::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<Ad_account_owner> AdAccount::getOwner() const
{
    return m_Owner;
}

void AdAccount::setOwner(const std::shared_ptr<Ad_account_owner>& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool AdAccount::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void AdAccount::unsetOwner()
{
    m_OwnerIsSet = false;
}
std::shared_ptr<Country> AdAccount::getCountry() const
{
    return m_Country;
}

void AdAccount::setCountry(const std::shared_ptr<Country>& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}

bool AdAccount::countryIsSet() const
{
    return m_CountryIsSet;
}

void AdAccount::unsetCountry()
{
    m_CountryIsSet = false;
}
std::shared_ptr<Currency> AdAccount::getCurrency() const
{
    return m_Currency;
}

void AdAccount::setCurrency(const std::shared_ptr<Currency>& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}

bool AdAccount::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void AdAccount::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
}
}
}
}


