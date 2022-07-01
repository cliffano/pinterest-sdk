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



#include "AdResponse_allOf_1.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




AdResponse_allOf_1::AdResponse_allOf_1()
{
    m_Ad_account_id = utility::conversions::to_string_t("");
    m_Ad_account_idIsSet = false;
    m_Campaign_id = utility::conversions::to_string_t("");
    m_Campaign_idIsSet = false;
    m_Collection_items_destination_url_template = utility::conversions::to_string_t("");
    m_Collection_items_destination_url_templateIsSet = false;
    m_Created_time = 0;
    m_Created_timeIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Rejected_reasonsIsSet = false;
    m_Rejection_labelsIsSet = false;
    m_Review_status = utility::conversions::to_string_t("");
    m_Review_statusIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Updated_time = 0;
    m_Updated_timeIsSet = false;
    m_Summary_status = utility::conversions::to_string_t("");
    m_Summary_statusIsSet = false;
}

AdResponse_allOf_1::~AdResponse_allOf_1()
{
}

void AdResponse_allOf_1::validate()
{
    // TODO: implement validation
}

web::json::value AdResponse_allOf_1::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ad_account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_account_id"))] = ModelBase::toJson(m_Ad_account_id);
    }
    if(m_Campaign_idIsSet)
    {
        val[utility::conversions::to_string_t(U("campaign_id"))] = ModelBase::toJson(m_Campaign_id);
    }
    if(m_Collection_items_destination_url_templateIsSet)
    {
        val[utility::conversions::to_string_t(U("collection_items_destination_url_template"))] = ModelBase::toJson(m_Collection_items_destination_url_template);
    }
    if(m_Created_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("created_time"))] = ModelBase::toJson(m_Created_time);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Rejected_reasonsIsSet)
    {
        val[utility::conversions::to_string_t(U("rejected_reasons"))] = ModelBase::toJson(m_Rejected_reasons);
    }
    if(m_Rejection_labelsIsSet)
    {
        val[utility::conversions::to_string_t(U("rejection_labels"))] = ModelBase::toJson(m_Rejection_labels);
    }
    if(m_Review_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("review_status"))] = ModelBase::toJson(m_Review_status);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_Updated_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("updated_time"))] = ModelBase::toJson(m_Updated_time);
    }
    if(m_Summary_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("summary_status"))] = ModelBase::toJson(m_Summary_status);
    }

    return val;
}

bool AdResponse_allOf_1::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ad_account_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ad_account_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_ad_account_id);
            setAdAccountId(refVal_ad_account_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("campaign_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("campaign_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_campaign_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_campaign_id);
            setCampaignId(refVal_campaign_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("collection_items_destination_url_template"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collection_items_destination_url_template")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_collection_items_destination_url_template;
            ok &= ModelBase::fromJson(fieldValue, refVal_collection_items_destination_url_template);
            setCollectionItemsDestinationUrlTemplate(refVal_collection_items_destination_url_template);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_created_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_created_time);
            setCreatedTime(refVal_created_time);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("rejected_reasons"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rejected_reasons")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_rejected_reasons;
            ok &= ModelBase::fromJson(fieldValue, refVal_rejected_reasons);
            setRejectedReasons(refVal_rejected_reasons);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rejection_labels"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rejection_labels")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_rejection_labels;
            ok &= ModelBase::fromJson(fieldValue, refVal_rejection_labels);
            setRejectionLabels(refVal_rejection_labels);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("review_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("review_status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_review_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_review_status);
            setReviewStatus(refVal_review_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updated_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updated_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_updated_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_updated_time);
            setUpdatedTime(refVal_updated_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("summary_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("summary_status")));
        if(!fieldValue.is_null())
        {
            PinPromotionSummaryStatus refVal_summary_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_summary_status);
            setSummaryStatus(refVal_summary_status);
        }
    }
    return ok;
}

void AdResponse_allOf_1::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Ad_account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_account_id")), m_Ad_account_id));
    }
    if(m_Campaign_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("campaign_id")), m_Campaign_id));
    }
    if(m_Collection_items_destination_url_templateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collection_items_destination_url_template")), m_Collection_items_destination_url_template));
    }
    if(m_Created_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_time")), m_Created_time));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Rejected_reasonsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rejected_reasons")), m_Rejected_reasons));
    }
    if(m_Rejection_labelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rejection_labels")), m_Rejection_labels));
    }
    if(m_Review_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("review_status")), m_Review_status));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_Updated_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updated_time")), m_Updated_time));
    }
    if(m_Summary_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("summary_status")), m_Summary_status));
    }
}

bool AdResponse_allOf_1::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        utility::string_t refVal_ad_account_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_account_id"))), refVal_ad_account_id );
        setAdAccountId(refVal_ad_account_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("campaign_id"))))
    {
        utility::string_t refVal_campaign_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("campaign_id"))), refVal_campaign_id );
        setCampaignId(refVal_campaign_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collection_items_destination_url_template"))))
    {
        utility::string_t refVal_collection_items_destination_url_template;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collection_items_destination_url_template"))), refVal_collection_items_destination_url_template );
        setCollectionItemsDestinationUrlTemplate(refVal_collection_items_destination_url_template);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_time"))))
    {
        int32_t refVal_created_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_time"))), refVal_created_time );
        setCreatedTime(refVal_created_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rejected_reasons"))))
    {
        std::vector<utility::string_t> refVal_rejected_reasons;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rejected_reasons"))), refVal_rejected_reasons );
        setRejectedReasons(refVal_rejected_reasons);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rejection_labels"))))
    {
        std::vector<utility::string_t> refVal_rejection_labels;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rejection_labels"))), refVal_rejection_labels );
        setRejectionLabels(refVal_rejection_labels);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("review_status"))))
    {
        utility::string_t refVal_review_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("review_status"))), refVal_review_status );
        setReviewStatus(refVal_review_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updated_time"))))
    {
        int32_t refVal_updated_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updated_time"))), refVal_updated_time );
        setUpdatedTime(refVal_updated_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("summary_status"))))
    {
        PinPromotionSummaryStatus refVal_summary_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("summary_status"))), refVal_summary_status );
        setSummaryStatus(refVal_summary_status);
    }
    return ok;
}

utility::string_t AdResponse_allOf_1::getAdAccountId() const
{
    return m_Ad_account_id;
}

void AdResponse_allOf_1::setAdAccountId(const utility::string_t& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}

bool AdResponse_allOf_1::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}

void AdResponse_allOf_1::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
utility::string_t AdResponse_allOf_1::getCampaignId() const
{
    return m_Campaign_id;
}

void AdResponse_allOf_1::setCampaignId(const utility::string_t& value)
{
    m_Campaign_id = value;
    m_Campaign_idIsSet = true;
}

bool AdResponse_allOf_1::campaignIdIsSet() const
{
    return m_Campaign_idIsSet;
}

void AdResponse_allOf_1::unsetCampaign_id()
{
    m_Campaign_idIsSet = false;
}
utility::string_t AdResponse_allOf_1::getCollectionItemsDestinationUrlTemplate() const
{
    return m_Collection_items_destination_url_template;
}

void AdResponse_allOf_1::setCollectionItemsDestinationUrlTemplate(const utility::string_t& value)
{
    m_Collection_items_destination_url_template = value;
    m_Collection_items_destination_url_templateIsSet = true;
}

bool AdResponse_allOf_1::collectionItemsDestinationUrlTemplateIsSet() const
{
    return m_Collection_items_destination_url_templateIsSet;
}

void AdResponse_allOf_1::unsetCollection_items_destination_url_template()
{
    m_Collection_items_destination_url_templateIsSet = false;
}
int32_t AdResponse_allOf_1::getCreatedTime() const
{
    return m_Created_time;
}

void AdResponse_allOf_1::setCreatedTime(int32_t value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}

bool AdResponse_allOf_1::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}

void AdResponse_allOf_1::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
utility::string_t AdResponse_allOf_1::getId() const
{
    return m_Id;
}

void AdResponse_allOf_1::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AdResponse_allOf_1::idIsSet() const
{
    return m_IdIsSet;
}

void AdResponse_allOf_1::unsetId()
{
    m_IdIsSet = false;
}
std::vector<utility::string_t>& AdResponse_allOf_1::getRejectedReasons()
{
    return m_Rejected_reasons;
}

void AdResponse_allOf_1::setRejectedReasons(const std::vector<utility::string_t>& value)
{
    m_Rejected_reasons = value;
    m_Rejected_reasonsIsSet = true;
}

bool AdResponse_allOf_1::rejectedReasonsIsSet() const
{
    return m_Rejected_reasonsIsSet;
}

void AdResponse_allOf_1::unsetRejected_reasons()
{
    m_Rejected_reasonsIsSet = false;
}
std::vector<utility::string_t>& AdResponse_allOf_1::getRejectionLabels()
{
    return m_Rejection_labels;
}

void AdResponse_allOf_1::setRejectionLabels(const std::vector<utility::string_t>& value)
{
    m_Rejection_labels = value;
    m_Rejection_labelsIsSet = true;
}

bool AdResponse_allOf_1::rejectionLabelsIsSet() const
{
    return m_Rejection_labelsIsSet;
}

void AdResponse_allOf_1::unsetRejection_labels()
{
    m_Rejection_labelsIsSet = false;
}
utility::string_t AdResponse_allOf_1::getReviewStatus() const
{
    return m_Review_status;
}

void AdResponse_allOf_1::setReviewStatus(const utility::string_t& value)
{
    m_Review_status = value;
    m_Review_statusIsSet = true;
}

bool AdResponse_allOf_1::reviewStatusIsSet() const
{
    return m_Review_statusIsSet;
}

void AdResponse_allOf_1::unsetReview_status()
{
    m_Review_statusIsSet = false;
}
utility::string_t AdResponse_allOf_1::getType() const
{
    return m_Type;
}

void AdResponse_allOf_1::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool AdResponse_allOf_1::typeIsSet() const
{
    return m_TypeIsSet;
}

void AdResponse_allOf_1::unsetType()
{
    m_TypeIsSet = false;
}
int32_t AdResponse_allOf_1::getUpdatedTime() const
{
    return m_Updated_time;
}

void AdResponse_allOf_1::setUpdatedTime(int32_t value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}

bool AdResponse_allOf_1::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}

void AdResponse_allOf_1::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}
PinPromotionSummaryStatus AdResponse_allOf_1::getSummaryStatus() const
{
    return m_Summary_status;
}

void AdResponse_allOf_1::setSummaryStatus(const PinPromotionSummaryStatus& value)
{
    m_Summary_status = value;
    m_Summary_statusIsSet = true;
}

bool AdResponse_allOf_1::summaryStatusIsSet() const
{
    return m_Summary_statusIsSet;
}

void AdResponse_allOf_1::unsetSummary_status()
{
    m_Summary_statusIsSet = false;
}
}
}
}
}


