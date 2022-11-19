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



#include "CppRestOpenAPIClient/model/TopPinsAnalyticsResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TopPinsAnalyticsResponse::TopPinsAnalyticsResponse()
{
    m_Date_availabilityIsSet = false;
    m_PinsIsSet = false;
    m_Sort_by = utility::conversions::to_string_t("");
    m_Sort_byIsSet = false;
}

TopPinsAnalyticsResponse::~TopPinsAnalyticsResponse()
{
}

void TopPinsAnalyticsResponse::validate()
{
    // TODO: implement validation
}

web::json::value TopPinsAnalyticsResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Date_availabilityIsSet)
    {
        val[utility::conversions::to_string_t(U("date_availability"))] = ModelBase::toJson(m_Date_availability);
    }
    if(m_PinsIsSet)
    {
        val[utility::conversions::to_string_t(U("pins"))] = ModelBase::toJson(m_Pins);
    }
    if(m_Sort_byIsSet)
    {
        val[utility::conversions::to_string_t(U("sort_by"))] = ModelBase::toJson(m_Sort_by);
    }

    return val;
}

bool TopPinsAnalyticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("date_availability"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("date_availability")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TopPinsAnalyticsResponse_date_availability> refVal_setDateAvailability;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDateAvailability);
            setDateAvailability(refVal_setDateAvailability);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pins"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pins")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>> refVal_setPins;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPins);
            setPins(refVal_setPins);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sort_by"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sort_by")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSortBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSortBy);
            setSortBy(refVal_setSortBy);
        }
    }
    return ok;
}

void TopPinsAnalyticsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Date_availabilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("date_availability")), m_Date_availability));
    }
    if(m_PinsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pins")), m_Pins));
    }
    if(m_Sort_byIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sort_by")), m_Sort_by));
    }
}

bool TopPinsAnalyticsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("date_availability"))))
    {
        std::shared_ptr<TopPinsAnalyticsResponse_date_availability> refVal_setDateAvailability;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("date_availability"))), refVal_setDateAvailability );
        setDateAvailability(refVal_setDateAvailability);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pins"))))
    {
        std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>> refVal_setPins;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pins"))), refVal_setPins );
        setPins(refVal_setPins);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sort_by"))))
    {
        utility::string_t refVal_setSortBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sort_by"))), refVal_setSortBy );
        setSortBy(refVal_setSortBy);
    }
    return ok;
}

std::shared_ptr<TopPinsAnalyticsResponse_date_availability> TopPinsAnalyticsResponse::getDateAvailability() const
{
    return m_Date_availability;
}

void TopPinsAnalyticsResponse::setDateAvailability(const std::shared_ptr<TopPinsAnalyticsResponse_date_availability>& value)
{
    m_Date_availability = value;
    m_Date_availabilityIsSet = true;
}

bool TopPinsAnalyticsResponse::dateAvailabilityIsSet() const
{
    return m_Date_availabilityIsSet;
}

void TopPinsAnalyticsResponse::unsetDate_availability()
{
    m_Date_availabilityIsSet = false;
}
std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>>& TopPinsAnalyticsResponse::getPins()
{
    return m_Pins;
}

void TopPinsAnalyticsResponse::setPins(const std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>>& value)
{
    m_Pins = value;
    m_PinsIsSet = true;
}

bool TopPinsAnalyticsResponse::pinsIsSet() const
{
    return m_PinsIsSet;
}

void TopPinsAnalyticsResponse::unsetPins()
{
    m_PinsIsSet = false;
}
utility::string_t TopPinsAnalyticsResponse::getSortBy() const
{
    return m_Sort_by;
}

void TopPinsAnalyticsResponse::setSortBy(const utility::string_t& value)
{
    m_Sort_by = value;
    m_Sort_byIsSet = true;
}

bool TopPinsAnalyticsResponse::sortByIsSet() const
{
    return m_Sort_byIsSet;
}

void TopPinsAnalyticsResponse::unsetSort_by()
{
    m_Sort_byIsSet = false;
}
}
}
}
}


