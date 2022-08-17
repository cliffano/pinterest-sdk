/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UserListOperationType.h
 *
 * User list operation type (add or remove)
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_UserListOperationType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_UserListOperationType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  UserListOperationType
    : public ModelBase
{
public:
    UserListOperationType();
    virtual ~UserListOperationType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eUserListOperationType
    {
        UserListOperationType_ADD,
        UserListOperationType_REMOVE,
    };

    eUserListOperationType getValue() const;
    void setValue(eUserListOperationType const value);

    protected:
        eUserListOperationType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_UserListOperationType_H_ */
