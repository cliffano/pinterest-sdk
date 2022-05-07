/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ItemValidationEvent.h
 *
 * Object describing an item validation event
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemValidationEvent_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemValidationEvent_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Object describing an item validation event
/// </summary>
class  ItemValidationEvent
    : public ModelBase
{
public:
    ItemValidationEvent();
    virtual ~ItemValidationEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemValidationEvent members

    /// <summary>
    /// The attribute that the item validation event references
    /// </summary>
    utility::string_t getAttribute() const;
    bool attributeIsSet() const;
    void unsetAttribute();

    void setAttribute(const utility::string_t& value);

    /// <summary>
    /// The event code that the item validation event references
    /// </summary>
    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();

    void setCode(int32_t value);

    /// <summary>
    /// Title message describing the item validation event
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Attribute;
    bool m_AttributeIsSet;
    int32_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemValidationEvent_H_ */
