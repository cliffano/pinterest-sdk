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

/*
 * BatchOperation.h
 *
 * The operation performed by the batch
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BatchOperation_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BatchOperation_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  BatchOperation
    : public ModelBase
{
public:
    BatchOperation();
    virtual ~BatchOperation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eBatchOperation
    {
        BatchOperation_UPDATE,
        BatchOperation_CREATE,
        BatchOperation_DELETE_DISCONTINUED,
    };

    eBatchOperation getValue() const;
    void setValue(eBatchOperation const value);

    protected:
        eBatchOperation m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BatchOperation_H_ */
