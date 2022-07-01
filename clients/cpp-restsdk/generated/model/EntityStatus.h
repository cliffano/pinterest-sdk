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

/*
 * EntityStatus.h
 *
 * Entity status
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_EntityStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_EntityStatus_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  EntityStatus
    : public ModelBase
{
public:
    EntityStatus();
    virtual ~EntityStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eEntityStatus
    {
        EntityStatus_ACTIVE,
        EntityStatus_PAUSED,
        EntityStatus_ARCHIVED,
    };

    eEntityStatus getValue() const;
    void setValue(eEntityStatus const value);

    protected:
        eEntityStatus m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_EntityStatus_H_ */
