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

/*
 * Catalog.h
 *
 * Catalog entity
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Catalog_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Catalog_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CatalogsType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Catalog entity
/// </summary>
class  Catalog
    : public ModelBase
{
public:
    Catalog();
    virtual ~Catalog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Catalog members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// ID of the catalog entity.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdated_at();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// A human-friendly name associated to a catalog entity.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsType> getCatalogType() const;
    bool catalogTypeIsSet() const;
    void unsetCatalog_type();

    void setCatalogType(const std::shared_ptr<CatalogsType>& value);


protected:
    utility::datetime m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::datetime m_Updated_at;
    bool m_Updated_atIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<CatalogsType> m_Catalog_type;
    bool m_Catalog_typeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Catalog_H_ */
