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
 * Granularity.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Granularity_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Granularity_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Granularity
    : public ModelBase
{
public:
    Granularity();
    virtual ~Granularity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eGranularity
    {
        Granularity_TOTAL,
        Granularity_DAY,
        Granularity_HOUR,
        Granularity_WEEK,
        Granularity_MONTH,
    };

    eGranularity getValue() const;
    void setValue(eGranularity const value);

    protected:
        eGranularity m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Granularity_H_ */
