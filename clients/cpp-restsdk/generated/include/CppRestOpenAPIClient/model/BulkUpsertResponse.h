/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BulkUpsertResponse.h
 *
 * ID of the bulk request.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BulkUpsertResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BulkUpsertResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// ID of the bulk request.
/// </summary>
class  BulkUpsertResponse
    : public ModelBase
{
public:
    BulkUpsertResponse();
    virtual ~BulkUpsertResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BulkUpsertResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRequestId() const;
    bool requestIdIsSet() const;
    void unsetRequest_id();

    void setRequestId(const utility::string_t& value);


protected:
    utility::string_t m_Request_id;
    bool m_Request_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BulkUpsertResponse_H_ */
