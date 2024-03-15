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
 * DeliveryMetricsResponse_items_inner.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_DeliveryMetricsResponse_items_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_DeliveryMetricsResponse_items_inner_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  DeliveryMetricsResponse_items_inner
    : public ModelBase
{
public:
    DeliveryMetricsResponse_items_inner();
    virtual ~DeliveryMetricsResponse_items_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeliveryMetricsResponse_items_inner members

    /// <summary>
    /// Metric&#39;s name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Category name
    /// </summary>
    utility::string_t getCategory() const;
    bool categoryIsSet() const;
    void unsetCategory();

    void setCategory(const utility::string_t& value);

    /// <summary>
    /// How the metric is defined.
    /// </summary>
    utility::string_t getDefinition() const;
    bool definitionIsSet() const;
    void unsetDefinition();

    void setDefinition(const utility::string_t& value);

    /// <summary>
    /// Display name, when available. If unavaible it will not be returned. Matches how the metric is named in our native tools like Pinterest Ads Manager.
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplay_name();

    void setDisplayName(const utility::string_t& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Category;
    bool m_CategoryIsSet;
    utility::string_t m_Definition;
    bool m_DefinitionIsSet;
    utility::string_t m_Display_name;
    bool m_Display_nameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_DeliveryMetricsResponse_items_inner_H_ */
