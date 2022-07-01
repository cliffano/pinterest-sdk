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
 * ConversionReportTimeType.h
 *
 * Conversion report time type
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionReportTimeType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionReportTimeType_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ConversionReportTimeType
    : public ModelBase
{
public:
    ConversionReportTimeType();
    virtual ~ConversionReportTimeType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eConversionReportTimeType
    {
        ConversionReportTimeType_AD_ACTION,
        ConversionReportTimeType_CONVERSION,
    };

    eConversionReportTimeType getValue() const;
    void setValue(eConversionReportTimeType const value);

    protected:
        eConversionReportTimeType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionReportTimeType_H_ */
