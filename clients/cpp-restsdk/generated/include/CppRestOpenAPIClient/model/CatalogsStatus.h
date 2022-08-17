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
 * CatalogsStatus.h
 *
 * Status for catalogs entities. Present in catalogs_feed values. When a feed is deleted, the response will inform DELETED as status.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsStatus_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  CatalogsStatus
    : public ModelBase
{
public:
    CatalogsStatus();
    virtual ~CatalogsStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCatalogsStatus
    {
        CatalogsStatus_ACTIVE,
        CatalogsStatus_INACTIVE,
    };

    eCatalogsStatus getValue() const;
    void setValue(eCatalogsStatus const value);

    protected:
        eCatalogsStatus m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsStatus_H_ */
