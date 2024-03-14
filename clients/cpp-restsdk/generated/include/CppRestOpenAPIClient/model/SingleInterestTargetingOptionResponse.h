/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SingleInterestTargetingOptionResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SingleInterestTargetingOptionResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SingleInterestTargetingOptionResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SingleInterestTargetingOptionResponse
    : public ModelBase
{
public:
    SingleInterestTargetingOptionResponse();
    virtual ~SingleInterestTargetingOptionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SingleInterestTargetingOptionResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getChildInterests();
    bool childInterestsIsSet() const;
    void unsetChild_interests();

    void setChildInterests(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetLevel();

    void setLevel(int32_t value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::vector<utility::string_t> m_Child_interests;
    bool m_Child_interestsIsSet;
    int32_t m_Level;
    bool m_LevelIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SingleInterestTargetingOptionResponse_H_ */
