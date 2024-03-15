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
 * ConversionReportAttributionType.h
 *
 * Attribution type. Refers to the Pinterest Tag endpoints
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionReportAttributionType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionReportAttributionType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ConversionReportAttributionType
    : public ModelBase
{
public:
    ConversionReportAttributionType();
    virtual ~ConversionReportAttributionType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eConversionReportAttributionType
    {
        ConversionReportAttributionType_INDIVIDUAL,
        ConversionReportAttributionType_HOUSEHOLD,
    };

    eConversionReportAttributionType getValue() const;
    void setValue(eConversionReportAttributionType const value);

    protected:
        eConversionReportAttributionType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionReportAttributionType_H_ */
