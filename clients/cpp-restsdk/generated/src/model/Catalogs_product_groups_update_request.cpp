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



#include "CppRestOpenAPIClient/model/Catalogs_product_groups_update_request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Catalogs_product_groups_update_request::Catalogs_product_groups_update_request()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Is_featured = false;
    m_Is_featuredIsSet = false;
    m_FiltersIsSet = false;
    m_Catalog_type = utility::conversions::to_string_t("");
    m_Catalog_typeIsSet = false;
}

Catalogs_product_groups_update_request::~Catalogs_product_groups_update_request()
{
}

void Catalogs_product_groups_update_request::validate()
{
    // TODO: implement validation
}

web::json::value Catalogs_product_groups_update_request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_Is_featuredIsSet)
    {
        val[utility::conversions::to_string_t(U("is_featured"))] = ModelBase::toJson(m_Is_featured);
    }
    if(m_FiltersIsSet)
    {
        val[utility::conversions::to_string_t(U("filters"))] = ModelBase::toJson(m_Filters);
    }
    if(m_Catalog_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("catalog_type"))] = ModelBase::toJson(m_Catalog_type);
    }

    return val;
}

bool Catalogs_product_groups_update_request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("filters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("filters")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsHotelProductGroupFilters> refVal_setFilters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFilters);
            setFilters(refVal_setFilters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("catalog_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("catalog_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCatalogType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCatalogType);
            setCatalogType(refVal_setCatalogType);
        }
    }
    return ok;
}

void Catalogs_product_groups_update_request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_Is_featuredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_featured")), m_Is_featured));
    }
    if(m_FiltersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("filters")), m_Filters));
    }
    if(m_Catalog_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("catalog_type")), m_Catalog_type));
    }
}

bool Catalogs_product_groups_update_request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_featured"))))
    {
        bool refVal_setIsFeatured;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_featured"))), refVal_setIsFeatured );
        setIsFeatured(refVal_setIsFeatured);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("filters"))))
    {
        std::shared_ptr<CatalogsHotelProductGroupFilters> refVal_setFilters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("filters"))), refVal_setFilters );
        setFilters(refVal_setFilters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("catalog_type"))))
    {
        utility::string_t refVal_setCatalogType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("catalog_type"))), refVal_setCatalogType );
        setCatalogType(refVal_setCatalogType);
    }
    return ok;
}

utility::string_t Catalogs_product_groups_update_request::getName() const
{
    return m_Name;
}

void Catalogs_product_groups_update_request::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Catalogs_product_groups_update_request::nameIsSet() const
{
    return m_NameIsSet;
}

void Catalogs_product_groups_update_request::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Catalogs_product_groups_update_request::getDescription() const
{
    return m_Description;
}

void Catalogs_product_groups_update_request::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Catalogs_product_groups_update_request::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Catalogs_product_groups_update_request::unsetDescription()
{
    m_DescriptionIsSet = false;
}
bool Catalogs_product_groups_update_request::isIsFeatured() const
{
    return m_Is_featured;
}

void Catalogs_product_groups_update_request::setIsFeatured(bool value)
{
    m_Is_featured = value;
    m_Is_featuredIsSet = true;
}

bool Catalogs_product_groups_update_request::isFeaturedIsSet() const
{
    return m_Is_featuredIsSet;
}

void Catalogs_product_groups_update_request::unsetIs_featured()
{
    m_Is_featuredIsSet = false;
}
std::shared_ptr<CatalogsHotelProductGroupFilters> Catalogs_product_groups_update_request::getFilters() const
{
    return m_Filters;
}

void Catalogs_product_groups_update_request::setFilters(const std::shared_ptr<CatalogsHotelProductGroupFilters>& value)
{
    m_Filters = value;
    m_FiltersIsSet = true;
}

bool Catalogs_product_groups_update_request::filtersIsSet() const
{
    return m_FiltersIsSet;
}

void Catalogs_product_groups_update_request::unsetFilters()
{
    m_FiltersIsSet = false;
}
utility::string_t Catalogs_product_groups_update_request::getCatalogType() const
{
    return m_Catalog_type;
}

void Catalogs_product_groups_update_request::setCatalogType(const utility::string_t& value)
{
    m_Catalog_type = value;
    m_Catalog_typeIsSet = true;
}

bool Catalogs_product_groups_update_request::catalogTypeIsSet() const
{
    return m_Catalog_typeIsSet;
}

void Catalogs_product_groups_update_request::unsetCatalog_type()
{
    m_Catalog_typeIsSet = false;
}
}
}
}
}


