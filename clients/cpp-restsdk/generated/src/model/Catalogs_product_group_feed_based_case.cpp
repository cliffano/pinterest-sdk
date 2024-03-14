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



#include "CppRestOpenAPIClient/model/Catalogs_product_group_feed_based_case.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Catalogs_product_group_feed_based_case::Catalogs_product_group_feed_based_case()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_FiltersIsSet = false;
    m_Is_featured = false;
    m_Is_featuredIsSet = false;
    m_TypeIsSet = false;
    m_StatusIsSet = false;
    m_Created_at = 0;
    m_Created_atIsSet = false;
    m_Updated_at = 0;
    m_Updated_atIsSet = false;
    m_Feed_id = utility::conversions::to_string_t("");
    m_Feed_idIsSet = false;
}

Catalogs_product_group_feed_based_case::~Catalogs_product_group_feed_based_case()
{
}

void Catalogs_product_group_feed_based_case::validate()
{
    // TODO: implement validation
}

web::json::value Catalogs_product_group_feed_based_case::toJson() const
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
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_FiltersIsSet)
    {
        val[utility::conversions::to_string_t(U("filters"))] = ModelBase::toJson(m_Filters);
    }
    if(m_Is_featuredIsSet)
    {
        val[utility::conversions::to_string_t(U("is_featured"))] = ModelBase::toJson(m_Is_featured);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t(U("created_at"))] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t(U("updated_at"))] = ModelBase::toJson(m_Updated_at);
    }
    if(m_Feed_idIsSet)
    {
        val[utility::conversions::to_string_t(U("feed_id"))] = ModelBase::toJson(m_Feed_id);
    }

    return val;
}

bool Catalogs_product_group_feed_based_case::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("filters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("filters")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupFilters> refVal_setFilters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFilters);
            setFilters(refVal_setFilters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_featured"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_featured")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsFeatured;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsFeatured);
            setIsFeatured(refVal_setIsFeatured);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupType> refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_at")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updated_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updated_at")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("feed_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("feed_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFeedId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFeedId);
            setFeedId(refVal_setFeedId);
        }
    }
    return ok;
}

void Catalogs_product_group_feed_based_case::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_FiltersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("filters")), m_Filters));
    }
    if(m_Is_featuredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_featured")), m_Is_featured));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_at")), m_Created_at));
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updated_at")), m_Updated_at));
    }
    if(m_Feed_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("feed_id")), m_Feed_id));
    }
}

bool Catalogs_product_group_feed_based_case::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("filters"))))
    {
        std::shared_ptr<CatalogsProductGroupFilters> refVal_setFilters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("filters"))), refVal_setFilters );
        setFilters(refVal_setFilters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_featured"))))
    {
        bool refVal_setIsFeatured;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_featured"))), refVal_setIsFeatured );
        setIsFeatured(refVal_setIsFeatured);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        std::shared_ptr<CatalogsProductGroupType> refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<CatalogsProductGroupStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_at"))))
    {
        int32_t refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_at"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updated_at"))))
    {
        int32_t refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updated_at"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("feed_id"))))
    {
        utility::string_t refVal_setFeedId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("feed_id"))), refVal_setFeedId );
        setFeedId(refVal_setFeedId);
    }
    return ok;
}

utility::string_t Catalogs_product_group_feed_based_case::getId() const
{
    return m_Id;
}

void Catalogs_product_group_feed_based_case::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Catalogs_product_group_feed_based_case::idIsSet() const
{
    return m_IdIsSet;
}

void Catalogs_product_group_feed_based_case::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Catalogs_product_group_feed_based_case::getName() const
{
    return m_Name;
}

void Catalogs_product_group_feed_based_case::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Catalogs_product_group_feed_based_case::nameIsSet() const
{
    return m_NameIsSet;
}

void Catalogs_product_group_feed_based_case::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Catalogs_product_group_feed_based_case::getDescription() const
{
    return m_Description;
}

void Catalogs_product_group_feed_based_case::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Catalogs_product_group_feed_based_case::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Catalogs_product_group_feed_based_case::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::shared_ptr<CatalogsProductGroupFilters> Catalogs_product_group_feed_based_case::getFilters() const
{
    return m_Filters;
}

void Catalogs_product_group_feed_based_case::setFilters(const std::shared_ptr<CatalogsProductGroupFilters>& value)
{
    m_Filters = value;
    m_FiltersIsSet = true;
}

bool Catalogs_product_group_feed_based_case::filtersIsSet() const
{
    return m_FiltersIsSet;
}

void Catalogs_product_group_feed_based_case::unsetFilters()
{
    m_FiltersIsSet = false;
}
bool Catalogs_product_group_feed_based_case::isIsFeatured() const
{
    return m_Is_featured;
}

void Catalogs_product_group_feed_based_case::setIsFeatured(bool value)
{
    m_Is_featured = value;
    m_Is_featuredIsSet = true;
}

bool Catalogs_product_group_feed_based_case::isFeaturedIsSet() const
{
    return m_Is_featuredIsSet;
}

void Catalogs_product_group_feed_based_case::unsetIs_featured()
{
    m_Is_featuredIsSet = false;
}
std::shared_ptr<CatalogsProductGroupType> Catalogs_product_group_feed_based_case::getType() const
{
    return m_Type;
}

void Catalogs_product_group_feed_based_case::setType(const std::shared_ptr<CatalogsProductGroupType>& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Catalogs_product_group_feed_based_case::typeIsSet() const
{
    return m_TypeIsSet;
}

void Catalogs_product_group_feed_based_case::unsetType()
{
    m_TypeIsSet = false;
}
std::shared_ptr<CatalogsProductGroupStatus> Catalogs_product_group_feed_based_case::getStatus() const
{
    return m_Status;
}

void Catalogs_product_group_feed_based_case::setStatus(const std::shared_ptr<CatalogsProductGroupStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Catalogs_product_group_feed_based_case::statusIsSet() const
{
    return m_StatusIsSet;
}

void Catalogs_product_group_feed_based_case::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t Catalogs_product_group_feed_based_case::getCreatedAt() const
{
    return m_Created_at;
}

void Catalogs_product_group_feed_based_case::setCreatedAt(int32_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}

bool Catalogs_product_group_feed_based_case::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Catalogs_product_group_feed_based_case::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
int32_t Catalogs_product_group_feed_based_case::getUpdatedAt() const
{
    return m_Updated_at;
}

void Catalogs_product_group_feed_based_case::setUpdatedAt(int32_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}

bool Catalogs_product_group_feed_based_case::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void Catalogs_product_group_feed_based_case::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}
utility::string_t Catalogs_product_group_feed_based_case::getFeedId() const
{
    return m_Feed_id;
}

void Catalogs_product_group_feed_based_case::setFeedId(const utility::string_t& value)
{
    m_Feed_id = value;
    m_Feed_idIsSet = true;
}

bool Catalogs_product_group_feed_based_case::feedIdIsSet() const
{
    return m_Feed_idIsSet;
}

void Catalogs_product_group_feed_based_case::unsetFeed_id()
{
    m_Feed_idIsSet = false;
}
}
}
}
}


