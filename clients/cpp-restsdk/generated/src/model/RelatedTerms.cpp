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



#include "CppRestOpenAPIClient/model/RelatedTerms.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RelatedTerms::RelatedTerms()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Related_term_count = 0;
    m_Related_term_countIsSet = false;
    m_Related_terms_listIsSet = false;
}

RelatedTerms::~RelatedTerms()
{
}

void RelatedTerms::validate()
{
    // TODO: implement validation
}

web::json::value RelatedTerms::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Related_term_countIsSet)
    {
        val[utility::conversions::to_string_t(U("related_term_count"))] = ModelBase::toJson(m_Related_term_count);
    }
    if(m_Related_terms_listIsSet)
    {
        val[utility::conversions::to_string_t(U("related_terms_list"))] = ModelBase::toJson(m_Related_terms_list);
    }

    return val;
}

bool RelatedTerms::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("related_term_count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("related_term_count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setRelatedTermCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRelatedTermCount);
            setRelatedTermCount(refVal_setRelatedTermCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("related_terms_list"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("related_terms_list")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>> refVal_setRelatedTermsList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRelatedTermsList);
            setRelatedTermsList(refVal_setRelatedTermsList);
        }
    }
    return ok;
}

void RelatedTerms::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Related_term_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("related_term_count")), m_Related_term_count));
    }
    if(m_Related_terms_listIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("related_terms_list")), m_Related_terms_list));
    }
}

bool RelatedTerms::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("related_term_count"))))
    {
        int32_t refVal_setRelatedTermCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("related_term_count"))), refVal_setRelatedTermCount );
        setRelatedTermCount(refVal_setRelatedTermCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("related_terms_list"))))
    {
        std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>> refVal_setRelatedTermsList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("related_terms_list"))), refVal_setRelatedTermsList );
        setRelatedTermsList(refVal_setRelatedTermsList);
    }
    return ok;
}

utility::string_t RelatedTerms::getId() const
{
    return m_Id;
}

void RelatedTerms::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool RelatedTerms::idIsSet() const
{
    return m_IdIsSet;
}

void RelatedTerms::unsetId()
{
    m_IdIsSet = false;
}
int32_t RelatedTerms::getRelatedTermCount() const
{
    return m_Related_term_count;
}

void RelatedTerms::setRelatedTermCount(int32_t value)
{
    m_Related_term_count = value;
    m_Related_term_countIsSet = true;
}

bool RelatedTerms::relatedTermCountIsSet() const
{
    return m_Related_term_countIsSet;
}

void RelatedTerms::unsetRelated_term_count()
{
    m_Related_term_countIsSet = false;
}
std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>>& RelatedTerms::getRelatedTermsList()
{
    return m_Related_terms_list;
}

void RelatedTerms::setRelatedTermsList(const std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>>& value)
{
    m_Related_terms_list = value;
    m_Related_terms_listIsSet = true;
}

bool RelatedTerms::relatedTermsListIsSet() const
{
    return m_Related_terms_listIsSet;
}

void RelatedTerms::unsetRelated_terms_list()
{
    m_Related_terms_listIsSet = false;
}
}
}
}
}

