/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsFeedsUpdateRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsFeedsUpdateRequest::CatalogsFeedsUpdateRequest()
{
    m_Default_availabilityIsSet = false;
    m_Default_currencyIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_FormatIsSet = false;
    m_CredentialsIsSet = false;
    m_Location = utility::conversions::to_string_t("");
    m_LocationIsSet = false;
    m_Preferred_processing_scheduleIsSet = false;
    m_StatusIsSet = false;
}

CatalogsFeedsUpdateRequest::~CatalogsFeedsUpdateRequest()
{
}

void CatalogsFeedsUpdateRequest::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedsUpdateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
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

bool CatalogsFeedsUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void CatalogsFeedsUpdateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

bool CatalogsFeedsUpdateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

std::shared_ptr<ProductAvailabilityType> CatalogsFeedsUpdateRequest::getDefaultAvailability() const
{
    return m_Default_availability;
}

void CatalogsFeedsUpdateRequest::setDefaultAvailability(const std::shared_ptr<ProductAvailabilityType>& value)
{
    m_Default_availability = value;
    m_Default_availabilityIsSet = true;
}

bool CatalogsFeedsUpdateRequest::defaultAvailabilityIsSet() const
{
    return m_Default_availabilityIsSet;
}

void CatalogsFeedsUpdateRequest::unsetDefault_availability()
{
    m_Default_availabilityIsSet = false;
}
std::shared_ptr<NullableCurrency> CatalogsFeedsUpdateRequest::getDefaultCurrency() const
{
    return m_Default_currency;
}

void CatalogsFeedsUpdateRequest::setDefaultCurrency(const std::shared_ptr<NullableCurrency>& value)
{
    m_Default_currency = value;
    m_Default_currencyIsSet = true;
}

bool CatalogsFeedsUpdateRequest::defaultCurrencyIsSet() const
{
    return m_Default_currencyIsSet;
}

void CatalogsFeedsUpdateRequest::unsetDefault_currency()
{
    m_Default_currencyIsSet = false;
}
utility::string_t CatalogsFeedsUpdateRequest::getName() const
{
    return m_Name;
}

void CatalogsFeedsUpdateRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CatalogsFeedsUpdateRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void CatalogsFeedsUpdateRequest::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<CatalogsFormat> CatalogsFeedsUpdateRequest::getFormat() const
{
    return m_Format;
}

void CatalogsFeedsUpdateRequest::setFormat(const std::shared_ptr<CatalogsFormat>& value)
{
    m_Format = value;
    m_FormatIsSet = true;
}

bool CatalogsFeedsUpdateRequest::formatIsSet() const
{
    return m_FormatIsSet;
}

void CatalogsFeedsUpdateRequest::unsetFormat()
{
    m_FormatIsSet = false;
}
std::shared_ptr<CatalogsFeedCredentials> CatalogsFeedsUpdateRequest::getCredentials() const
{
    return m_Credentials;
}

void CatalogsFeedsUpdateRequest::setCredentials(const std::shared_ptr<CatalogsFeedCredentials>& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}

bool CatalogsFeedsUpdateRequest::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}

void CatalogsFeedsUpdateRequest::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
utility::string_t CatalogsFeedsUpdateRequest::getLocation() const
{
    return m_Location;
}

void CatalogsFeedsUpdateRequest::setLocation(const utility::string_t& value)
{
    m_Location = value;
    m_LocationIsSet = true;
}

bool CatalogsFeedsUpdateRequest::locationIsSet() const
{
    return m_LocationIsSet;
}

void CatalogsFeedsUpdateRequest::unsetLocation()
{
    m_LocationIsSet = false;
}
std::shared_ptr<CatalogsFeedProcessingSchedule> CatalogsFeedsUpdateRequest::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}

void CatalogsFeedsUpdateRequest::setPreferredProcessingSchedule(const std::shared_ptr<CatalogsFeedProcessingSchedule>& value)
{
    m_Preferred_processing_schedule = value;
    m_Preferred_processing_scheduleIsSet = true;
}

bool CatalogsFeedsUpdateRequest::preferredProcessingScheduleIsSet() const
{
    return m_Preferred_processing_scheduleIsSet;
}

void CatalogsFeedsUpdateRequest::unsetPreferred_processing_schedule()
{
    m_Preferred_processing_scheduleIsSet = false;
}
std::shared_ptr<CatalogsStatus> CatalogsFeedsUpdateRequest::getStatus() const
{
    return m_Status;
}

void CatalogsFeedsUpdateRequest::setStatus(const std::shared_ptr<CatalogsStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CatalogsFeedsUpdateRequest::statusIsSet() const
{
    return m_StatusIsSet;
}

void CatalogsFeedsUpdateRequest::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


