/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsFeed.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsFeed::CatalogsFeed()
{
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Updated_at = utility::datetime();
    m_Updated_atIsSet = false;
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
    m_StatusIsSet = false;
}

CatalogsFeed::~CatalogsFeed()
{
}

void CatalogsFeed::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeed::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t(U("created_at"))] = ModelBase::toJson(m_Created_at);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t(U("updated_at"))] = ModelBase::toJson(m_Updated_at);
    }
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
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool CatalogsFeed::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("created_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_at")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updated_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updated_at")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
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
            utility::string_t refVal_setDefaultLocale;
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
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    return ok;
}

void CatalogsFeed::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_at")), m_Created_at));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updated_at")), m_Updated_at));
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
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
}

bool CatalogsFeed::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("created_at"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_at"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updated_at"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updated_at"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
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
        utility::string_t refVal_setDefaultLocale;
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<CatalogsStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    return ok;
}

utility::datetime CatalogsFeed::getCreatedAt() const
{
    return m_Created_at;
}

void CatalogsFeed::setCreatedAt(const utility::datetime& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}

bool CatalogsFeed::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void CatalogsFeed::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
utility::string_t CatalogsFeed::getId() const
{
    return m_Id;
}

void CatalogsFeed::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool CatalogsFeed::idIsSet() const
{
    return m_IdIsSet;
}

void CatalogsFeed::unsetId()
{
    m_IdIsSet = false;
}
utility::datetime CatalogsFeed::getUpdatedAt() const
{
    return m_Updated_at;
}

void CatalogsFeed::setUpdatedAt(const utility::datetime& value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}

bool CatalogsFeed::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void CatalogsFeed::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}
std::shared_ptr<Country> CatalogsFeed::getDefaultCountry() const
{
    return m_Default_country;
}

void CatalogsFeed::setDefaultCountry(const std::shared_ptr<Country>& value)
{
    m_Default_country = value;
    m_Default_countryIsSet = true;
}

bool CatalogsFeed::defaultCountryIsSet() const
{
    return m_Default_countryIsSet;
}

void CatalogsFeed::unsetDefault_country()
{
    m_Default_countryIsSet = false;
}
std::shared_ptr<ProductAvailabilityType> CatalogsFeed::getDefaultAvailability() const
{
    return m_Default_availability;
}

void CatalogsFeed::setDefaultAvailability(const std::shared_ptr<ProductAvailabilityType>& value)
{
    m_Default_availability = value;
    m_Default_availabilityIsSet = true;
}

bool CatalogsFeed::defaultAvailabilityIsSet() const
{
    return m_Default_availabilityIsSet;
}

void CatalogsFeed::unsetDefault_availability()
{
    m_Default_availabilityIsSet = false;
}
std::shared_ptr<NullableCurrency> CatalogsFeed::getDefaultCurrency() const
{
    return m_Default_currency;
}

void CatalogsFeed::setDefaultCurrency(const std::shared_ptr<NullableCurrency>& value)
{
    m_Default_currency = value;
    m_Default_currencyIsSet = true;
}

bool CatalogsFeed::defaultCurrencyIsSet() const
{
    return m_Default_currencyIsSet;
}

void CatalogsFeed::unsetDefault_currency()
{
    m_Default_currencyIsSet = false;
}
utility::string_t CatalogsFeed::getName() const
{
    return m_Name;
}

void CatalogsFeed::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CatalogsFeed::nameIsSet() const
{
    return m_NameIsSet;
}

void CatalogsFeed::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<CatalogsFormat> CatalogsFeed::getFormat() const
{
    return m_Format;
}

void CatalogsFeed::setFormat(const std::shared_ptr<CatalogsFormat>& value)
{
    m_Format = value;
    m_FormatIsSet = true;
}

bool CatalogsFeed::formatIsSet() const
{
    return m_FormatIsSet;
}

void CatalogsFeed::unsetFormat()
{
    m_FormatIsSet = false;
}
utility::string_t CatalogsFeed::getDefaultLocale() const
{
    return m_Default_locale;
}

void CatalogsFeed::setDefaultLocale(const utility::string_t& value)
{
    m_Default_locale = value;
    m_Default_localeIsSet = true;
}

bool CatalogsFeed::defaultLocaleIsSet() const
{
    return m_Default_localeIsSet;
}

void CatalogsFeed::unsetDefault_locale()
{
    m_Default_localeIsSet = false;
}
std::shared_ptr<CatalogsFeedCredentials> CatalogsFeed::getCredentials() const
{
    return m_Credentials;
}

void CatalogsFeed::setCredentials(const std::shared_ptr<CatalogsFeedCredentials>& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}

bool CatalogsFeed::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}

void CatalogsFeed::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
utility::string_t CatalogsFeed::getLocation() const
{
    return m_Location;
}

void CatalogsFeed::setLocation(const utility::string_t& value)
{
    m_Location = value;
    m_LocationIsSet = true;
}

bool CatalogsFeed::locationIsSet() const
{
    return m_LocationIsSet;
}

void CatalogsFeed::unsetLocation()
{
    m_LocationIsSet = false;
}
std::shared_ptr<CatalogsFeedProcessingSchedule> CatalogsFeed::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}

void CatalogsFeed::setPreferredProcessingSchedule(const std::shared_ptr<CatalogsFeedProcessingSchedule>& value)
{
    m_Preferred_processing_schedule = value;
    m_Preferred_processing_scheduleIsSet = true;
}

bool CatalogsFeed::preferredProcessingScheduleIsSet() const
{
    return m_Preferred_processing_scheduleIsSet;
}

void CatalogsFeed::unsetPreferred_processing_schedule()
{
    m_Preferred_processing_scheduleIsSet = false;
}
std::shared_ptr<CatalogsStatus> CatalogsFeed::getStatus() const
{
    return m_Status;
}

void CatalogsFeed::setStatus(const std::shared_ptr<CatalogsStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CatalogsFeed::statusIsSet() const
{
    return m_StatusIsSet;
}

void CatalogsFeed::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


