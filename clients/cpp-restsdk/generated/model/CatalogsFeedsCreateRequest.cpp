/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CatalogsFeedsCreateRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CatalogsFeedsCreateRequest::CatalogsFeedsCreateRequest()
{
    m_Default_countryIsSet = false;
    m_Default_availabilityIsSet = false;
    m_Default_currencyIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_FormatIsSet = false;
    m_Default_locale = utility::conversions::to_string_t("");
    m_Default_localeIsSet = false;
    m_CredentialsIsSet = false;
    m_Location = utility::conversions::to_string_t("");
    m_LocationIsSet = false;
    m_Preferred_processing_scheduleIsSet = false;
}

CatalogsFeedsCreateRequest::~CatalogsFeedsCreateRequest()
{
}

void CatalogsFeedsCreateRequest::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedsCreateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Default_countryIsSet)
    {
        val[utility::conversions::to_string_t(U("default_country"))] = ModelBase::toJson(m_Default_country);
    }
    if(m_Default_availabilityIsSet)
    {
        val[utility::conversions::to_string_t(U("default_availability"))] = ModelBase::toJson(m_Default_availability);
    }
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

    return val;
}

bool CatalogsFeedsCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("default_country"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_country")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Country> refVal_default_country;
            ok &= ModelBase::fromJson(fieldValue, refVal_default_country);
            setDefaultCountry(refVal_default_country);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_availability"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_availability")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProductAvailabilityType> refVal_default_availability;
            ok &= ModelBase::fromJson(fieldValue, refVal_default_availability);
            setDefaultAvailability(refVal_default_availability);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_currency")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NullableCurrency> refVal_default_currency;
            ok &= ModelBase::fromJson(fieldValue, refVal_default_currency);
            setDefaultCurrency(refVal_default_currency);
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
    if(val.has_field(utility::conversions::to_string_t(U("format"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("format")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFormat> refVal_format;
            ok &= ModelBase::fromJson(fieldValue, refVal_format);
            setFormat(refVal_format);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_locale"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_locale")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_default_locale;
            ok &= ModelBase::fromJson(fieldValue, refVal_default_locale);
            setDefaultLocale(refVal_default_locale);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("credentials"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("credentials")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedCredentials> refVal_credentials;
            ok &= ModelBase::fromJson(fieldValue, refVal_credentials);
            setCredentials(refVal_credentials);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("location"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("location")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_location;
            ok &= ModelBase::fromJson(fieldValue, refVal_location);
            setLocation(refVal_location);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("preferred_processing_schedule"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("preferred_processing_schedule")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedProcessingSchedule> refVal_preferred_processing_schedule;
            ok &= ModelBase::fromJson(fieldValue, refVal_preferred_processing_schedule);
            setPreferredProcessingSchedule(refVal_preferred_processing_schedule);
        }
    }
    return ok;
}

void CatalogsFeedsCreateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Default_countryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_country")), m_Default_country));
    }
    if(m_Default_availabilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_availability")), m_Default_availability));
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
}

bool CatalogsFeedsCreateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("default_country"))))
    {
        std::shared_ptr<Country> refVal_default_country;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_country"))), refVal_default_country );
        setDefaultCountry(refVal_default_country);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_availability"))))
    {
        std::shared_ptr<ProductAvailabilityType> refVal_default_availability;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_availability"))), refVal_default_availability );
        setDefaultAvailability(refVal_default_availability);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_currency"))))
    {
        std::shared_ptr<NullableCurrency> refVal_default_currency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_currency"))), refVal_default_currency );
        setDefaultCurrency(refVal_default_currency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("format"))))
    {
        std::shared_ptr<CatalogsFormat> refVal_format;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("format"))), refVal_format );
        setFormat(refVal_format);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_locale"))))
    {
        utility::string_t refVal_default_locale;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_locale"))), refVal_default_locale );
        setDefaultLocale(refVal_default_locale);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("credentials"))))
    {
        std::shared_ptr<CatalogsFeedCredentials> refVal_credentials;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("credentials"))), refVal_credentials );
        setCredentials(refVal_credentials);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("location"))))
    {
        utility::string_t refVal_location;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("location"))), refVal_location );
        setLocation(refVal_location);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("preferred_processing_schedule"))))
    {
        std::shared_ptr<CatalogsFeedProcessingSchedule> refVal_preferred_processing_schedule;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("preferred_processing_schedule"))), refVal_preferred_processing_schedule );
        setPreferredProcessingSchedule(refVal_preferred_processing_schedule);
    }
    return ok;
}

std::shared_ptr<Country> CatalogsFeedsCreateRequest::getDefaultCountry() const
{
    return m_Default_country;
}

void CatalogsFeedsCreateRequest::setDefaultCountry(const std::shared_ptr<Country>& value)
{
    m_Default_country = value;
    m_Default_countryIsSet = true;
}

bool CatalogsFeedsCreateRequest::defaultCountryIsSet() const
{
    return m_Default_countryIsSet;
}

void CatalogsFeedsCreateRequest::unsetDefault_country()
{
    m_Default_countryIsSet = false;
}
std::shared_ptr<ProductAvailabilityType> CatalogsFeedsCreateRequest::getDefaultAvailability() const
{
    return m_Default_availability;
}

void CatalogsFeedsCreateRequest::setDefaultAvailability(const std::shared_ptr<ProductAvailabilityType>& value)
{
    m_Default_availability = value;
    m_Default_availabilityIsSet = true;
}

bool CatalogsFeedsCreateRequest::defaultAvailabilityIsSet() const
{
    return m_Default_availabilityIsSet;
}

void CatalogsFeedsCreateRequest::unsetDefault_availability()
{
    m_Default_availabilityIsSet = false;
}
std::shared_ptr<NullableCurrency> CatalogsFeedsCreateRequest::getDefaultCurrency() const
{
    return m_Default_currency;
}

void CatalogsFeedsCreateRequest::setDefaultCurrency(const std::shared_ptr<NullableCurrency>& value)
{
    m_Default_currency = value;
    m_Default_currencyIsSet = true;
}

bool CatalogsFeedsCreateRequest::defaultCurrencyIsSet() const
{
    return m_Default_currencyIsSet;
}

void CatalogsFeedsCreateRequest::unsetDefault_currency()
{
    m_Default_currencyIsSet = false;
}
utility::string_t CatalogsFeedsCreateRequest::getName() const
{
    return m_Name;
}

void CatalogsFeedsCreateRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CatalogsFeedsCreateRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void CatalogsFeedsCreateRequest::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<CatalogsFormat> CatalogsFeedsCreateRequest::getFormat() const
{
    return m_Format;
}

void CatalogsFeedsCreateRequest::setFormat(const std::shared_ptr<CatalogsFormat>& value)
{
    m_Format = value;
    m_FormatIsSet = true;
}

bool CatalogsFeedsCreateRequest::formatIsSet() const
{
    return m_FormatIsSet;
}

void CatalogsFeedsCreateRequest::unsetFormat()
{
    m_FormatIsSet = false;
}
utility::string_t CatalogsFeedsCreateRequest::getDefaultLocale() const
{
    return m_Default_locale;
}

void CatalogsFeedsCreateRequest::setDefaultLocale(const utility::string_t& value)
{
    m_Default_locale = value;
    m_Default_localeIsSet = true;
}

bool CatalogsFeedsCreateRequest::defaultLocaleIsSet() const
{
    return m_Default_localeIsSet;
}

void CatalogsFeedsCreateRequest::unsetDefault_locale()
{
    m_Default_localeIsSet = false;
}
std::shared_ptr<CatalogsFeedCredentials> CatalogsFeedsCreateRequest::getCredentials() const
{
    return m_Credentials;
}

void CatalogsFeedsCreateRequest::setCredentials(const std::shared_ptr<CatalogsFeedCredentials>& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}

bool CatalogsFeedsCreateRequest::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}

void CatalogsFeedsCreateRequest::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
utility::string_t CatalogsFeedsCreateRequest::getLocation() const
{
    return m_Location;
}

void CatalogsFeedsCreateRequest::setLocation(const utility::string_t& value)
{
    m_Location = value;
    m_LocationIsSet = true;
}

bool CatalogsFeedsCreateRequest::locationIsSet() const
{
    return m_LocationIsSet;
}

void CatalogsFeedsCreateRequest::unsetLocation()
{
    m_LocationIsSet = false;
}
std::shared_ptr<CatalogsFeedProcessingSchedule> CatalogsFeedsCreateRequest::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}

void CatalogsFeedsCreateRequest::setPreferredProcessingSchedule(const std::shared_ptr<CatalogsFeedProcessingSchedule>& value)
{
    m_Preferred_processing_schedule = value;
    m_Preferred_processing_scheduleIsSet = true;
}

bool CatalogsFeedsCreateRequest::preferredProcessingScheduleIsSet() const
{
    return m_Preferred_processing_scheduleIsSet;
}

void CatalogsFeedsCreateRequest::unsetPreferred_processing_schedule()
{
    m_Preferred_processing_scheduleIsSet = false;
}
}
}
}
}


