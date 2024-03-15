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
 * UserListType.h
 *
 * User list type
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_UserListType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_UserListType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  UserListType
    : public ModelBase
{
public:
    UserListType();
    virtual ~UserListType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eUserListType
    {
        UserListType_EMAIL,
        UserListType_IDFA,
        UserListType_MAID,
        UserListType_LR_ID,
        UserListType_DLX_ID,
        UserListType_HASHED_PINNER_ID,
    };

    eUserListType getValue() const;
    void setValue(eUserListType const value);

    protected:
        eUserListType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_UserListType_H_ */
