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



#include "CppRestOpenAPIClient/model/CatalogsRetailFeedsCreateRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsRetailFeedsCreateRequest::CatalogsRetailFeedsCreateRequest()
{
    m_Default_currencyIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_FormatIsSet = false;
    m_Default_localeIsSet = false;
    m_CredentialsIsSet = false;
    m_Location = utility::conversions::to_string_t("");
    m_LocationIsSet = false;
    m_Preferred_processing_scheduleIsSet = false;
    m_Catalog_typeIsSet = false;
    m_Default_countryIsSet = false;
    m_Default_availabilityIsSet = false;
}

CatalogsRetailFeedsCreateRequest::~CatalogsRetailFeedsCreateRequest()
{
}

void CatalogsRetailFeedsCreateRequest::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsRetailFeedsCreateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Default_currencyIsSet)
    {
        val[utility::conversions::to_string_t(U("default_currency"))] = ModelBase::toJson(m_Default_currency);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_FormatIsSet)
    {
        val[utility::conversions::to_string_t(U("format"))] = ModelBase::toJson(m_Format);
    }
    if(m_Default_localeIsSet)
    {
        val[utility::conversions::to_string_t(U("default_locale"))] = ModelBase::toJson(m_Default_locale);
    }
    if(m_CredentialsIsSet)
    {
        val[utility::conversions::to_string_t(U("credentials"))] = ModelBase::toJson(m_Credentials);
    }
    if(m_LocationIsSet)
    {
        val[utility::conversions::to_string_t(U("location"))] = ModelBase::toJson(m_Location);
    }
    if(m_Preferred_processing_scheduleIsSet)
    {
        val[utility::conversions::to_string_t(U("preferred_processing_schedule"))] = ModelBase::toJson(m_Preferred_processing_schedule);
    }
    if(m_Catalog_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("catalog_type"))] = ModelBase::toJson(m_Catalog_type);
    }
    if(m_Default_countryIsSet)
    {
        val[utility::conversions::to_string_t(U("default_country"))] = ModelBase::toJson(m_Default_country);
    }
    if(m_Default_availabilityIsSet)
    {
        val[utility::conversions::to_string_t(U("default_availability"))] = ModelBase::toJson(m_Default_availability);
    }

    return val;
}

bool CatalogsRetailFeedsCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("default_currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_currency")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NullableCurrency> refVal_setDefaultCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultCurrency);
            setDefaultCurrency(refVal_setDefaultCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("format"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("format")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFormat> refVal_setFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFormat);
            setFormat(refVal_setFormat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_locale"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_locale")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedsCreateRequest_default_locale> refVal_setDefaultLocale;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultLocale);
            setDefaultLocale(refVal_setDefaultLocale);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("credentials"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("credentials")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedCredentials> refVal_setCredentials;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCredentials);
            setCredentials(refVal_setCredentials);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("location"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("location")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLocation);
            setLocation(refVal_setLocation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("preferred_processing_schedule"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("preferred_processing_schedule")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedProcessingSchedule> refVal_setPreferredProcessingSchedule;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPreferredProcessingSchedule);
            setPreferredProcessingSchedule(refVal_setPreferredProcessingSchedule);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("catalog_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("catalog_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsType> refVal_setCatalogType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCatalogType);
            setCatalogType(refVal_setCatalogType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_country"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_country")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Country> refVal_setDefaultCountry;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultCountry);
            setDefaultCountry(refVal_setDefaultCountry);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_availability"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_availability")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProductAvailabilityType> refVal_setDefaultAvailability;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultAvailability);
            setDefaultAvailability(refVal_setDefaultAvailability);
        }
    }
    return ok;
}

void CatalogsRetailFeedsCreateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Default_currencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_currency")), m_Default_currency));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_FormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("format")), m_Format));
    }
    if(m_Default_localeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_locale")), m_Default_locale));
    }
    if(m_CredentialsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("credentials")), m_Credentials));
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("location")), m_Location));
    }
    if(m_Preferred_processing_scheduleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("preferred_processing_schedule")), m_Preferred_processing_schedule));
    }
    if(m_Catalog_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("catalog_type")), m_Catalog_type));
    }
    if(m_Default_countryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_country")), m_Default_country));
    }
    if(m_Default_availabilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_availability")), m_Default_availability));
    }
}

bool CatalogsRetailFeedsCreateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("default_currency"))))
    {
        std::shared_ptr<NullableCurrency> refVal_setDefaultCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_currency"))), refVal_setDefaultCurrency );
        setDefaultCurrency(refVal_setDefaultCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("format"))))
    {
        std::shared_ptr<CatalogsFormat> refVal_setFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("format"))), refVal_setFormat );
        setFormat(refVal_setFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_locale"))))
    {
        std::shared_ptr<CatalogsFeedsCreateRequest_default_locale> refVal_setDefaultLocale;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_locale"))), refVal_setDefaultLocale );
        setDefaultLocale(refVal_setDefaultLocale);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("credentials"))))
    {
        std::shared_ptr<CatalogsFeedCredentials> refVal_setCredentials;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("credentials"))), refVal_setCredentials );
        setCredentials(refVal_setCredentials);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("location"))))
    {
        utility::string_t refVal_setLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("location"))), refVal_setLocation );
        setLocation(refVal_setLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("preferred_processing_schedule"))))
    {
        std::shared_ptr<CatalogsFeedProcessingSchedule> refVal_setPreferredProcessingSchedule;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("preferred_processing_schedule"))), refVal_setPreferredProcessingSchedule );
        setPreferredProcessingSchedule(refVal_setPreferredProcessingSchedule);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("catalog_type"))))
    {
        std::shared_ptr<CatalogsType> refVal_setCatalogType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("catalog_type"))), refVal_setCatalogType );
        setCatalogType(refVal_setCatalogType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_country"))))
    {
        std::shared_ptr<Country> refVal_setDefaultCountry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_country"))), refVal_setDefaultCountry );
        setDefaultCountry(refVal_setDefaultCountry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_availability"))))
    {
        std::shared_ptr<ProductAvailabilityType> refVal_setDefaultAvailability;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_availability"))), refVal_setDefaultAvailability );
        setDefaultAvailability(refVal_setDefaultAvailability);
    }
    return ok;
}

std::shared_ptr<NullableCurrency> CatalogsRetailFeedsCreateRequest::getDefaultCurrency() const
{
    return m_Default_currency;
}

void CatalogsRetailFeedsCreateRequest::setDefaultCurrency(const std::shared_ptr<NullableCurrency>& value)
{
    m_Default_currency = value;
    m_Default_currencyIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::defaultCurrencyIsSet() const
{
    return m_Default_currencyIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetDefault_currency()
{
    m_Default_currencyIsSet = false;
}
utility::string_t CatalogsRetailFeedsCreateRequest::getName() const
{
    return m_Name;
}

void CatalogsRetailFeedsCreateRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<CatalogsFormat> CatalogsRetailFeedsCreateRequest::getFormat() const
{
    return m_Format;
}

void CatalogsRetailFeedsCreateRequest::setFormat(const std::shared_ptr<CatalogsFormat>& value)
{
    m_Format = value;
    m_FormatIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::formatIsSet() const
{
    return m_FormatIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetFormat()
{
    m_FormatIsSet = false;
}
std::shared_ptr<CatalogsFeedsCreateRequest_default_locale> CatalogsRetailFeedsCreateRequest::getDefaultLocale() const
{
    return m_Default_locale;
}

void CatalogsRetailFeedsCreateRequest::setDefaultLocale(const std::shared_ptr<CatalogsFeedsCreateRequest_default_locale>& value)
{
    m_Default_locale = value;
    m_Default_localeIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::defaultLocaleIsSet() const
{
    return m_Default_localeIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetDefault_locale()
{
    m_Default_localeIsSet = false;
}
std::shared_ptr<CatalogsFeedCredentials> CatalogsRetailFeedsCreateRequest::getCredentials() const
{
    return m_Credentials;
}

void CatalogsRetailFeedsCreateRequest::setCredentials(const std::shared_ptr<CatalogsFeedCredentials>& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
utility::string_t CatalogsRetailFeedsCreateRequest::getLocation() const
{
    return m_Location;
}

void CatalogsRetailFeedsCreateRequest::setLocation(const utility::string_t& value)
{
    m_Location = value;
    m_LocationIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::locationIsSet() const
{
    return m_LocationIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetLocation()
{
    m_LocationIsSet = false;
}
std::shared_ptr<CatalogsFeedProcessingSchedule> CatalogsRetailFeedsCreateRequest::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}

void CatalogsRetailFeedsCreateRequest::setPreferredProcessingSchedule(const std::shared_ptr<CatalogsFeedProcessingSchedule>& value)
{
    m_Preferred_processing_schedule = value;
    m_Preferred_processing_scheduleIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::preferredProcessingScheduleIsSet() const
{
    return m_Preferred_processing_scheduleIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetPreferred_processing_schedule()
{
    m_Preferred_processing_scheduleIsSet = false;
}
std::shared_ptr<CatalogsType> CatalogsRetailFeedsCreateRequest::getCatalogType() const
{
    return m_Catalog_type;
}

void CatalogsRetailFeedsCreateRequest::setCatalogType(const std::shared_ptr<CatalogsType>& value)
{
    m_Catalog_type = value;
    m_Catalog_typeIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::catalogTypeIsSet() const
{
    return m_Catalog_typeIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetCatalog_type()
{
    m_Catalog_typeIsSet = false;
}
std::shared_ptr<Country> CatalogsRetailFeedsCreateRequest::getDefaultCountry() const
{
    return m_Default_country;
}

void CatalogsRetailFeedsCreateRequest::setDefaultCountry(const std::shared_ptr<Country>& value)
{
    m_Default_country = value;
    m_Default_countryIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::defaultCountryIsSet() const
{
    return m_Default_countryIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetDefault_country()
{
    m_Default_countryIsSet = false;
}
std::shared_ptr<ProductAvailabilityType> CatalogsRetailFeedsCreateRequest::getDefaultAvailability() const
{
    return m_Default_availability;
}

void CatalogsRetailFeedsCreateRequest::setDefaultAvailability(const std::shared_ptr<ProductAvailabilityType>& value)
{
    m_Default_availability = value;
    m_Default_availabilityIsSet = true;
}

bool CatalogsRetailFeedsCreateRequest::defaultAvailabilityIsSet() const
{
    return m_Default_availabilityIsSet;
}

void CatalogsRetailFeedsCreateRequest::unsetDefault_availability()
{
    m_Default_availabilityIsSet = false;
}
}
}
}
}

