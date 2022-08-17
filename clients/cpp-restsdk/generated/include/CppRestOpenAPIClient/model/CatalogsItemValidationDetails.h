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

/*
 * CatalogsItemValidationDetails.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemValidationDetails_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemValidationDetails_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/NullableCatalogsItemFieldType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsItemValidationDetails
    : public ModelBase
{
public:
    CatalogsItemValidationDetails();
    virtual ~CatalogsItemValidationDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsItemValidationDetails members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NullableCatalogsItemFieldType> getAttributeName() const;
    bool attributeNameIsSet() const;
    void unsetAttribute_name();

    void setAttributeName(const std::shared_ptr<NullableCatalogsItemFieldType>& value);

    /// <summary>
    /// Provided value that caused the validation issue.
    /// </summary>
    utility::string_t getProvidedValue() const;
    bool providedValueIsSet() const;
    void unsetProvided_value();

    void setProvidedValue(const utility::string_t& value);


protected:
    std::shared_ptr<NullableCatalogsItemFieldType> m_Attribute_name;
    bool m_Attribute_nameIsSet;
    utility::string_t m_Provided_value;
    bool m_Provided_valueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemValidationDetails_H_ */
