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



#include "CppRestOpenAPIClient/model/BidFloorSpec.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



BidFloorSpec::BidFloorSpec()
{
    m_CountriesIsSet = false;
    m_CurrencyIsSet = false;
    m_Objective_typeIsSet = false;
    m_Billable_eventIsSet = false;
    m_Optimization_goal_metadataIsSet = false;
    m_Creative_typeIsSet = false;
}

BidFloorSpec::~BidFloorSpec()
{
}

void BidFloorSpec::validate()
{
    // TODO: implement validation
}

web::json::value BidFloorSpec::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CountriesIsSet)
    {
        val[utility::conversions::to_string_t(U("countries"))] = ModelBase::toJson(m_Countries);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t(U("currency"))] = ModelBase::toJson(m_Currency);
    }
    if(m_Objective_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("objective_type"))] = ModelBase::toJson(m_Objective_type);
    }
    if(m_Billable_eventIsSet)
    {
        val[utility::conversions::to_string_t(U("billable_event"))] = ModelBase::toJson(m_Billable_event);
    }
    if(m_Optimization_goal_metadataIsSet)
    {
        val[utility::conversions::to_string_t(U("optimization_goal_metadata"))] = ModelBase::toJson(m_Optimization_goal_metadata);
    }
    if(m_Creative_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("creative_type"))] = ModelBase::toJson(m_Creative_type);
    }

    return val;
}

bool BidFloorSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("countries"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("countries")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Country>> refVal_setCountries;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCountries);
            setCountries(refVal_setCountries);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("currency")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Currency> refVal_setCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCurrency);
            setCurrency(refVal_setCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("objective_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("objective_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ObjectiveType> refVal_setObjectiveType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setObjectiveType);
            setObjectiveType(refVal_setObjectiveType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("billable_event"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("billable_event")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ActionType> refVal_setBillableEvent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBillableEvent);
            setBillableEvent(refVal_setBillableEvent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("optimization_goal_metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("optimization_goal_metadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setOptimizationGoalMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOptimizationGoalMetadata);
            setOptimizationGoalMetadata(refVal_setOptimizationGoalMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("creative_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("creative_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CreativeType> refVal_setCreativeType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreativeType);
            setCreativeType(refVal_setCreativeType);
        }
    }
    return ok;
}

void BidFloorSpec::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CountriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("countries")), m_Countries));
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("currency")), m_Currency));
    }
    if(m_Objective_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("objective_type")), m_Objective_type));
    }
    if(m_Billable_eventIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("billable_event")), m_Billable_event));
    }
    if(m_Optimization_goal_metadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("optimization_goal_metadata")), m_Optimization_goal_metadata));
    }
    if(m_Creative_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("creative_type")), m_Creative_type));
    }
}

bool BidFloorSpec::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("countries"))))
    {
        std::vector<std::shared_ptr<Country>> refVal_setCountries;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("countries"))), refVal_setCountries );
        setCountries(refVal_setCountries);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("currency"))))
    {
        std::shared_ptr<Currency> refVal_setCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("currency"))), refVal_setCurrency );
        setCurrency(refVal_setCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("objective_type"))))
    {
        std::shared_ptr<ObjectiveType> refVal_setObjectiveType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("objective_type"))), refVal_setObjectiveType );
        setObjectiveType(refVal_setObjectiveType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("billable_event"))))
    {
        std::shared_ptr<ActionType> refVal_setBillableEvent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("billable_event"))), refVal_setBillableEvent );
        setBillableEvent(refVal_setBillableEvent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("optimization_goal_metadata"))))
    {
        std::shared_ptr<Object> refVal_setOptimizationGoalMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("optimization_goal_metadata"))), refVal_setOptimizationGoalMetadata );
        setOptimizationGoalMetadata(refVal_setOptimizationGoalMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("creative_type"))))
    {
        std::shared_ptr<CreativeType> refVal_setCreativeType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("creative_type"))), refVal_setCreativeType );
        setCreativeType(refVal_setCreativeType);
    }
    return ok;
}

std::vector<std::shared_ptr<Country>>& BidFloorSpec::getCountries()
{
    return m_Countries;
}

void BidFloorSpec::setCountries(const std::vector<std::shared_ptr<Country>>& value)
{
    m_Countries = value;
    m_CountriesIsSet = true;
}

bool BidFloorSpec::countriesIsSet() const
{
    return m_CountriesIsSet;
}

void BidFloorSpec::unsetCountries()
{
    m_CountriesIsSet = false;
}
std::shared_ptr<Currency> BidFloorSpec::getCurrency() const
{
    return m_Currency;
}

void BidFloorSpec::setCurrency(const std::shared_ptr<Currency>& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}

bool BidFloorSpec::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void BidFloorSpec::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
std::shared_ptr<ObjectiveType> BidFloorSpec::getObjectiveType() const
{
    return m_Objective_type;
}

void BidFloorSpec::setObjectiveType(const std::shared_ptr<ObjectiveType>& value)
{
    m_Objective_type = value;
    m_Objective_typeIsSet = true;
}

bool BidFloorSpec::objectiveTypeIsSet() const
{
    return m_Objective_typeIsSet;
}

void BidFloorSpec::unsetObjective_type()
{
    m_Objective_typeIsSet = false;
}
std::shared_ptr<ActionType> BidFloorSpec::getBillableEvent() const
{
    return m_Billable_event;
}

void BidFloorSpec::setBillableEvent(const std::shared_ptr<ActionType>& value)
{
    m_Billable_event = value;
    m_Billable_eventIsSet = true;
}

bool BidFloorSpec::billableEventIsSet() const
{
    return m_Billable_eventIsSet;
}

void BidFloorSpec::unsetBillable_event()
{
    m_Billable_eventIsSet = false;
}
std::shared_ptr<Object> BidFloorSpec::getOptimizationGoalMetadata() const
{
    return m_Optimization_goal_metadata;
}

void BidFloorSpec::setOptimizationGoalMetadata(const std::shared_ptr<Object>& value)
{
    m_Optimization_goal_metadata = value;
    m_Optimization_goal_metadataIsSet = true;
}

bool BidFloorSpec::optimizationGoalMetadataIsSet() const
{
    return m_Optimization_goal_metadataIsSet;
}

void BidFloorSpec::unsetOptimization_goal_metadata()
{
    m_Optimization_goal_metadataIsSet = false;
}
std::shared_ptr<CreativeType> BidFloorSpec::getCreativeType() const
{
    return m_Creative_type;
}

void BidFloorSpec::setCreativeType(const std::shared_ptr<CreativeType>& value)
{
    m_Creative_type = value;
    m_Creative_typeIsSet = true;
}

bool BidFloorSpec::creativeTypeIsSet() const
{
    return m_Creative_typeIsSet;
}

void BidFloorSpec::unsetCreative_type()
{
    m_Creative_typeIsSet = false;
}
}
}
}
}

