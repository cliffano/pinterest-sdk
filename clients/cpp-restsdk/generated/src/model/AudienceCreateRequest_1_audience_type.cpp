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



#include "CppRestOpenAPIClient/model/AudienceCreateRequest_1_audience_type.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AudienceCreateRequest_1_audience_type::AudienceCreateRequest_1_audience_type()
{
}

AudienceCreateRequest_1_audience_type::~AudienceCreateRequest_1_audience_type()
{
}

void AudienceCreateRequest_1_audience_type::validate()
{
    // TODO: implement validation
}

web::json::value AudienceCreateRequest_1_audience_type::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool AudienceCreateRequest_1_audience_type::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void AudienceCreateRequest_1_audience_type::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
}

bool AudienceCreateRequest_1_audience_type::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    return ok;
}

}
}
}
}


