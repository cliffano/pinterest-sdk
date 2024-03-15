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
 * SSIOCreateInsertionOrderResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SSIOCreateInsertionOrderResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SSIOCreateInsertionOrderResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SSIOCreateInsertionOrderResponse
    : public ModelBase
{
public:
    SSIOCreateInsertionOrderResponse();
    virtual ~SSIOCreateInsertionOrderResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SSIOCreateInsertionOrderResponse members

    /// <summary>
    /// Salesforce order id
    /// </summary>
    utility::string_t getPinOrderId() const;
    bool pinOrderIdIsSet() const;
    void unsetPin_order_id();

    void setPinOrderId(const utility::string_t& value);


protected:
    utility::string_t m_Pin_order_id;
    bool m_Pin_order_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SSIOCreateInsertionOrderResponse_H_ */
