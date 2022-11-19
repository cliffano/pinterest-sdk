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
 * CatalogsFormat.h
 *
 * The file format of a feed.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFormat_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFormat_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  CatalogsFormat
    : public ModelBase
{
public:
    CatalogsFormat();
    virtual ~CatalogsFormat();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCatalogsFormat
    {
        CatalogsFormat_TSV,
        CatalogsFormat_CSV,
        CatalogsFormat_XML,
    };

    eCatalogsFormat getValue() const;
    void setValue(eCatalogsFormat const value);

    protected:
        eCatalogsFormat m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFormat_H_ */
