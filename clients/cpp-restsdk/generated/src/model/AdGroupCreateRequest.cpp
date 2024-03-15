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



#include "CppRestOpenAPIClient/model/AdGroupCreateRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdGroupCreateRequest::AdGroupCreateRequest()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_StatusIsSet = false;
    m_Budget_in_micro_currency = 0;
    m_Budget_in_micro_currencyIsSet = false;
    m_Bid_in_micro_currency = 0;
    m_Bid_in_micro_currencyIsSet = false;
    m_Optimization_goal_metadataIsSet = false;
    m_Budget_typeIsSet = false;
    m_Start_time = 0;
    m_Start_timeIsSet = false;
    m_End_time = 0;
    m_End_timeIsSet = false;
    m_Targeting_specIsSet = false;
    m_Lifetime_frequency_cap = 0;
    m_Lifetime_frequency_capIsSet = false;
    m_Tracking_urlsIsSet = false;
    m_Auto_targeting_enabled = false;
    m_Auto_targeting_enabledIsSet = false;
    m_Placement_groupIsSet = false;
    m_Pacing_delivery_typeIsSet = false;
    m_Campaign_id = utility::conversions::to_string_t("");
    m_Campaign_idIsSet = false;
    m_Billable_eventIsSet = false;
    m_Bid_strategy_type = utility::conversions::to_string_t("");
    m_Bid_strategy_typeIsSet = false;
}

AdGroupCreateRequest::~AdGroupCreateRequest()
{
}

void AdGroupCreateRequest::validate()
{
    // TODO: implement validation
}

web::json::value AdGroupCreateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Budget_in_micro_currencyIsSet)
    {
        val[utility::conversions::to_string_t(U("budget_in_micro_currency"))] = ModelBase::toJson(m_Budget_in_micro_currency);
    }
    if(m_Bid_in_micro_currencyIsSet)
    {
        val[utility::conversions::to_string_t(U("bid_in_micro_currency"))] = ModelBase::toJson(m_Bid_in_micro_currency);
    }
    if(m_Optimization_goal_metadataIsSet)
    {
        val[utility::conversions::to_string_t(U("optimization_goal_metadata"))] = ModelBase::toJson(m_Optimization_goal_metadata);
    }
    if(m_Budget_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("budget_type"))] = ModelBase::toJson(m_Budget_type);
    }
    if(m_Start_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("start_time"))] = ModelBase::toJson(m_Start_time);
    }
    if(m_End_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("end_time"))] = ModelBase::toJson(m_End_time);
    }
    if(m_Targeting_specIsSet)
    {
        val[utility::conversions::to_string_t(U("targeting_spec"))] = ModelBase::toJson(m_Targeting_spec);
    }
    if(m_Lifetime_frequency_capIsSet)
    {
        val[utility::conversions::to_string_t(U("lifetime_frequency_cap"))] = ModelBase::toJson(m_Lifetime_frequency_cap);
    }
    if(m_Tracking_urlsIsSet)
    {
        val[utility::conversions::to_string_t(U("tracking_urls"))] = ModelBase::toJson(m_Tracking_urls);
    }
    if(m_Auto_targeting_enabledIsSet)
    {
        val[utility::conversions::to_string_t(U("auto_targeting_enabled"))] = ModelBase::toJson(m_Auto_targeting_enabled);
    }
    if(m_Placement_groupIsSet)
    {
        val[utility::conversions::to_string_t(U("placement_group"))] = ModelBase::toJson(m_Placement_group);
    }
    if(m_Pacing_delivery_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("pacing_delivery_type"))] = ModelBase::toJson(m_Pacing_delivery_type);
    }
    if(m_Campaign_idIsSet)
    {
        val[utility::conversions::to_string_t(U("campaign_id"))] = ModelBase::toJson(m_Campaign_id);
    }
    if(m_Billable_eventIsSet)
    {
        val[utility::conversions::to_string_t(U("billable_event"))] = ModelBase::toJson(m_Billable_event);
    }
    if(m_Bid_strategy_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("bid_strategy_type"))] = ModelBase::toJson(m_Bid_strategy_type);
    }

    return val;
}

bool AdGroupCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EntityStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("budget_in_micro_currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("budget_in_micro_currency")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBudgetInMicroCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBudgetInMicroCurrency);
            setBudgetInMicroCurrency(refVal_setBudgetInMicroCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bid_in_micro_currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bid_in_micro_currency")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBidInMicroCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBidInMicroCurrency);
            setBidInMicroCurrency(refVal_setBidInMicroCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("optimization_goal_metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("optimization_goal_metadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdGroupCommon_optimization_goal_metadata> refVal_setOptimizationGoalMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOptimizationGoalMetadata);
            setOptimizationGoalMetadata(refVal_setOptimizationGoalMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("budget_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("budget_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BudgetType> refVal_setBudgetType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBudgetType);
            setBudgetType(refVal_setBudgetType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("start_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("start_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setStartTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStartTime);
            setStartTime(refVal_setStartTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("end_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("end_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setEndTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEndTime);
            setEndTime(refVal_setEndTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("targeting_spec"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("targeting_spec")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TargetingSpec> refVal_setTargetingSpec;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTargetingSpec);
            setTargetingSpec(refVal_setTargetingSpec);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("lifetime_frequency_cap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("lifetime_frequency_cap")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLifetimeFrequencyCap;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLifetimeFrequencyCap);
            setLifetimeFrequencyCap(refVal_setLifetimeFrequencyCap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tracking_urls"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tracking_urls")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdGroupCommon_tracking_urls> refVal_setTrackingUrls;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrackingUrls);
            setTrackingUrls(refVal_setTrackingUrls);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("auto_targeting_enabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("auto_targeting_enabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setAutoTargetingEnabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAutoTargetingEnabled);
            setAutoTargetingEnabled(refVal_setAutoTargetingEnabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("placement_group"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("placement_group")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PlacementGroupType> refVal_setPlacementGroup;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlacementGroup);
            setPlacementGroup(refVal_setPlacementGroup);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pacing_delivery_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pacing_delivery_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PacingDeliveryType> refVal_setPacingDeliveryType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPacingDeliveryType);
            setPacingDeliveryType(refVal_setPacingDeliveryType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("campaign_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("campaign_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCampaignId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCampaignId);
            setCampaignId(refVal_setCampaignId);
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
    if(val.has_field(utility::conversions::to_string_t(U("bid_strategy_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bid_strategy_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBidStrategyType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBidStrategyType);
            setBidStrategyType(refVal_setBidStrategyType);
        }
    }
    return ok;
}

void AdGroupCreateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Budget_in_micro_currencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("budget_in_micro_currency")), m_Budget_in_micro_currency));
    }
    if(m_Bid_in_micro_currencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bid_in_micro_currency")), m_Bid_in_micro_currency));
    }
    if(m_Optimization_goal_metadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("optimization_goal_metadata")), m_Optimization_goal_metadata));
    }
    if(m_Budget_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("budget_type")), m_Budget_type));
    }
    if(m_Start_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("start_time")), m_Start_time));
    }
    if(m_End_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("end_time")), m_End_time));
    }
    if(m_Targeting_specIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("targeting_spec")), m_Targeting_spec));
    }
    if(m_Lifetime_frequency_capIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("lifetime_frequency_cap")), m_Lifetime_frequency_cap));
    }
    if(m_Tracking_urlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tracking_urls")), m_Tracking_urls));
    }
    if(m_Auto_targeting_enabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("auto_targeting_enabled")), m_Auto_targeting_enabled));
    }
    if(m_Placement_groupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("placement_group")), m_Placement_group));
    }
    if(m_Pacing_delivery_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pacing_delivery_type")), m_Pacing_delivery_type));
    }
    if(m_Campaign_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("campaign_id")), m_Campaign_id));
    }
    if(m_Billable_eventIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("billable_event")), m_Billable_event));
    }
    if(m_Bid_strategy_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bid_strategy_type")), m_Bid_strategy_type));
    }
}

bool AdGroupCreateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<EntityStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("budget_in_micro_currency"))))
    {
        int32_t refVal_setBudgetInMicroCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("budget_in_micro_currency"))), refVal_setBudgetInMicroCurrency );
        setBudgetInMicroCurrency(refVal_setBudgetInMicroCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bid_in_micro_currency"))))
    {
        int32_t refVal_setBidInMicroCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bid_in_micro_currency"))), refVal_setBidInMicroCurrency );
        setBidInMicroCurrency(refVal_setBidInMicroCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("optimization_goal_metadata"))))
    {
        std::shared_ptr<AdGroupCommon_optimization_goal_metadata> refVal_setOptimizationGoalMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("optimization_goal_metadata"))), refVal_setOptimizationGoalMetadata );
        setOptimizationGoalMetadata(refVal_setOptimizationGoalMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("budget_type"))))
    {
        std::shared_ptr<BudgetType> refVal_setBudgetType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("budget_type"))), refVal_setBudgetType );
        setBudgetType(refVal_setBudgetType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("start_time"))))
    {
        int32_t refVal_setStartTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("start_time"))), refVal_setStartTime );
        setStartTime(refVal_setStartTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("end_time"))))
    {
        int32_t refVal_setEndTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("end_time"))), refVal_setEndTime );
        setEndTime(refVal_setEndTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("targeting_spec"))))
    {
        std::shared_ptr<TargetingSpec> refVal_setTargetingSpec;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("targeting_spec"))), refVal_setTargetingSpec );
        setTargetingSpec(refVal_setTargetingSpec);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("lifetime_frequency_cap"))))
    {
        int32_t refVal_setLifetimeFrequencyCap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("lifetime_frequency_cap"))), refVal_setLifetimeFrequencyCap );
        setLifetimeFrequencyCap(refVal_setLifetimeFrequencyCap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tracking_urls"))))
    {
        std::shared_ptr<AdGroupCommon_tracking_urls> refVal_setTrackingUrls;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tracking_urls"))), refVal_setTrackingUrls );
        setTrackingUrls(refVal_setTrackingUrls);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("auto_targeting_enabled"))))
    {
        bool refVal_setAutoTargetingEnabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("auto_targeting_enabled"))), refVal_setAutoTargetingEnabled );
        setAutoTargetingEnabled(refVal_setAutoTargetingEnabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("placement_group"))))
    {
        std::shared_ptr<PlacementGroupType> refVal_setPlacementGroup;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("placement_group"))), refVal_setPlacementGroup );
        setPlacementGroup(refVal_setPlacementGroup);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pacing_delivery_type"))))
    {
        std::shared_ptr<PacingDeliveryType> refVal_setPacingDeliveryType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pacing_delivery_type"))), refVal_setPacingDeliveryType );
        setPacingDeliveryType(refVal_setPacingDeliveryType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("campaign_id"))))
    {
        utility::string_t refVal_setCampaignId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("campaign_id"))), refVal_setCampaignId );
        setCampaignId(refVal_setCampaignId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("billable_event"))))
    {
        std::shared_ptr<ActionType> refVal_setBillableEvent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("billable_event"))), refVal_setBillableEvent );
        setBillableEvent(refVal_setBillableEvent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bid_strategy_type"))))
    {
        utility::string_t refVal_setBidStrategyType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bid_strategy_type"))), refVal_setBidStrategyType );
        setBidStrategyType(refVal_setBidStrategyType);
    }
    return ok;
}

utility::string_t AdGroupCreateRequest::getName() const
{
    return m_Name;
}

void AdGroupCreateRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool AdGroupCreateRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void AdGroupCreateRequest::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<EntityStatus> AdGroupCreateRequest::getStatus() const
{
    return m_Status;
}

void AdGroupCreateRequest::setStatus(const std::shared_ptr<EntityStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool AdGroupCreateRequest::statusIsSet() const
{
    return m_StatusIsSet;
}

void AdGroupCreateRequest::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t AdGroupCreateRequest::getBudgetInMicroCurrency() const
{
    return m_Budget_in_micro_currency;
}

void AdGroupCreateRequest::setBudgetInMicroCurrency(int32_t value)
{
    m_Budget_in_micro_currency = value;
    m_Budget_in_micro_currencyIsSet = true;
}

bool AdGroupCreateRequest::budgetInMicroCurrencyIsSet() const
{
    return m_Budget_in_micro_currencyIsSet;
}

void AdGroupCreateRequest::unsetBudget_in_micro_currency()
{
    m_Budget_in_micro_currencyIsSet = false;
}
int32_t AdGroupCreateRequest::getBidInMicroCurrency() const
{
    return m_Bid_in_micro_currency;
}

void AdGroupCreateRequest::setBidInMicroCurrency(int32_t value)
{
    m_Bid_in_micro_currency = value;
    m_Bid_in_micro_currencyIsSet = true;
}

bool AdGroupCreateRequest::bidInMicroCurrencyIsSet() const
{
    return m_Bid_in_micro_currencyIsSet;
}

void AdGroupCreateRequest::unsetBid_in_micro_currency()
{
    m_Bid_in_micro_currencyIsSet = false;
}
std::shared_ptr<AdGroupCommon_optimization_goal_metadata> AdGroupCreateRequest::getOptimizationGoalMetadata() const
{
    return m_Optimization_goal_metadata;
}

void AdGroupCreateRequest::setOptimizationGoalMetadata(const std::shared_ptr<AdGroupCommon_optimization_goal_metadata>& value)
{
    m_Optimization_goal_metadata = value;
    m_Optimization_goal_metadataIsSet = true;
}

bool AdGroupCreateRequest::optimizationGoalMetadataIsSet() const
{
    return m_Optimization_goal_metadataIsSet;
}

void AdGroupCreateRequest::unsetOptimization_goal_metadata()
{
    m_Optimization_goal_metadataIsSet = false;
}
std::shared_ptr<BudgetType> AdGroupCreateRequest::getBudgetType() const
{
    return m_Budget_type;
}

void AdGroupCreateRequest::setBudgetType(const std::shared_ptr<BudgetType>& value)
{
    m_Budget_type = value;
    m_Budget_typeIsSet = true;
}

bool AdGroupCreateRequest::budgetTypeIsSet() const
{
    return m_Budget_typeIsSet;
}

void AdGroupCreateRequest::unsetBudget_type()
{
    m_Budget_typeIsSet = false;
}
int32_t AdGroupCreateRequest::getStartTime() const
{
    return m_Start_time;
}

void AdGroupCreateRequest::setStartTime(int32_t value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}

bool AdGroupCreateRequest::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}

void AdGroupCreateRequest::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t AdGroupCreateRequest::getEndTime() const
{
    return m_End_time;
}

void AdGroupCreateRequest::setEndTime(int32_t value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}

bool AdGroupCreateRequest::endTimeIsSet() const
{
    return m_End_timeIsSet;
}

void AdGroupCreateRequest::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
std::shared_ptr<TargetingSpec> AdGroupCreateRequest::getTargetingSpec() const
{
    return m_Targeting_spec;
}

void AdGroupCreateRequest::setTargetingSpec(const std::shared_ptr<TargetingSpec>& value)
{
    m_Targeting_spec = value;
    m_Targeting_specIsSet = true;
}

bool AdGroupCreateRequest::targetingSpecIsSet() const
{
    return m_Targeting_specIsSet;
}

void AdGroupCreateRequest::unsetTargeting_spec()
{
    m_Targeting_specIsSet = false;
}
int32_t AdGroupCreateRequest::getLifetimeFrequencyCap() const
{
    return m_Lifetime_frequency_cap;
}

void AdGroupCreateRequest::setLifetimeFrequencyCap(int32_t value)
{
    m_Lifetime_frequency_cap = value;
    m_Lifetime_frequency_capIsSet = true;
}

bool AdGroupCreateRequest::lifetimeFrequencyCapIsSet() const
{
    return m_Lifetime_frequency_capIsSet;
}

void AdGroupCreateRequest::unsetLifetime_frequency_cap()
{
    m_Lifetime_frequency_capIsSet = false;
}
std::shared_ptr<AdGroupCommon_tracking_urls> AdGroupCreateRequest::getTrackingUrls() const
{
    return m_Tracking_urls;
}

void AdGroupCreateRequest::setTrackingUrls(const std::shared_ptr<AdGroupCommon_tracking_urls>& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}

bool AdGroupCreateRequest::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}

void AdGroupCreateRequest::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
bool AdGroupCreateRequest::isAutoTargetingEnabled() const
{
    return m_Auto_targeting_enabled;
}

void AdGroupCreateRequest::setAutoTargetingEnabled(bool value)
{
    m_Auto_targeting_enabled = value;
    m_Auto_targeting_enabledIsSet = true;
}

bool AdGroupCreateRequest::autoTargetingEnabledIsSet() const
{
    return m_Auto_targeting_enabledIsSet;
}

void AdGroupCreateRequest::unsetAuto_targeting_enabled()
{
    m_Auto_targeting_enabledIsSet = false;
}
std::shared_ptr<PlacementGroupType> AdGroupCreateRequest::getPlacementGroup() const
{
    return m_Placement_group;
}

void AdGroupCreateRequest::setPlacementGroup(const std::shared_ptr<PlacementGroupType>& value)
{
    m_Placement_group = value;
    m_Placement_groupIsSet = true;
}

bool AdGroupCreateRequest::placementGroupIsSet() const
{
    return m_Placement_groupIsSet;
}

void AdGroupCreateRequest::unsetPlacement_group()
{
    m_Placement_groupIsSet = false;
}
std::shared_ptr<PacingDeliveryType> AdGroupCreateRequest::getPacingDeliveryType() const
{
    return m_Pacing_delivery_type;
}

void AdGroupCreateRequest::setPacingDeliveryType(const std::shared_ptr<PacingDeliveryType>& value)
{
    m_Pacing_delivery_type = value;
    m_Pacing_delivery_typeIsSet = true;
}

bool AdGroupCreateRequest::pacingDeliveryTypeIsSet() const
{
    return m_Pacing_delivery_typeIsSet;
}

void AdGroupCreateRequest::unsetPacing_delivery_type()
{
    m_Pacing_delivery_typeIsSet = false;
}
utility::string_t AdGroupCreateRequest::getCampaignId() const
{
    return m_Campaign_id;
}

void AdGroupCreateRequest::setCampaignId(const utility::string_t& value)
{
    m_Campaign_id = value;
    m_Campaign_idIsSet = true;
}

bool AdGroupCreateRequest::campaignIdIsSet() const
{
    return m_Campaign_idIsSet;
}

void AdGroupCreateRequest::unsetCampaign_id()
{
    m_Campaign_idIsSet = false;
}
std::shared_ptr<ActionType> AdGroupCreateRequest::getBillableEvent() const
{
    return m_Billable_event;
}

void AdGroupCreateRequest::setBillableEvent(const std::shared_ptr<ActionType>& value)
{
    m_Billable_event = value;
    m_Billable_eventIsSet = true;
}

bool AdGroupCreateRequest::billableEventIsSet() const
{
    return m_Billable_eventIsSet;
}

void AdGroupCreateRequest::unsetBillable_event()
{
    m_Billable_eventIsSet = false;
}
utility::string_t AdGroupCreateRequest::getBidStrategyType() const
{
    return m_Bid_strategy_type;
}

void AdGroupCreateRequest::setBidStrategyType(const utility::string_t& value)
{
    m_Bid_strategy_type = value;
    m_Bid_strategy_typeIsSet = true;
}

bool AdGroupCreateRequest::bidStrategyTypeIsSet() const
{
    return m_Bid_strategy_typeIsSet;
}

void AdGroupCreateRequest::unsetBid_strategy_type()
{
    m_Bid_strategy_typeIsSet = false;
}
}
}
}
}


