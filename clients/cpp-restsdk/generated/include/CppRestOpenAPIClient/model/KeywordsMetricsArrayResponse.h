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
 * KeywordsMetricsArrayResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_KeywordsMetricsArrayResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_KeywordsMetricsArrayResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/KeywordMetricsResponse.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class KeywordMetricsResponse;

/// <summary>
/// 
/// </summary>
class  KeywordsMetricsArrayResponse
    : public ModelBase
{
public:
    KeywordsMetricsArrayResponse();
    virtual ~KeywordsMetricsArrayResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// KeywordsMetricsArrayResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<KeywordMetricsResponse>>& getData();
    bool dataIsSet() const;
    void unsetData();

    void setData(const std::vector<std::shared_ptr<KeywordMetricsResponse>>& value);


protected:
    std::vector<std::shared_ptr<KeywordMetricsResponse>> m_Data;
    bool m_DataIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_KeywordsMetricsArrayResponse_H_ */
