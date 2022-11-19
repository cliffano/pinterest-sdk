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
 * GetAudiencesOrderBy.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GetAudiencesOrderBy_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GetAudiencesOrderBy_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  GetAudiencesOrderBy
    : public ModelBase
{
public:
    GetAudiencesOrderBy();
    virtual ~GetAudiencesOrderBy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eGetAudiencesOrderBy
    {
        GetAudiencesOrderBy_NONE,
        GetAudiencesOrderBy_ID,
        GetAudiencesOrderBy_SIZE,
        GetAudiencesOrderBy_CREATION_DATE,
        GetAudiencesOrderBy_UPDATED_TIME,
        GetAudiencesOrderBy_NAME,
        GetAudiencesOrderBy_STATUS,
        GetAudiencesOrderBy_TYPE,
    };

    eGetAudiencesOrderBy getValue() const;
    void setValue(eGetAudiencesOrderBy const value);

    protected:
        eGetAudiencesOrderBy m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GetAudiencesOrderBy_H_ */
