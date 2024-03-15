/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AudienceCreateRequest_1_audience_type.h
 *
 * 
 */

#ifndef AudienceCreateRequest_1_audience_type_H_
#define AudienceCreateRequest_1_audience_type_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AudienceCreateRequest_1_audience_type
{
public:
    AudienceCreateRequest_1_audience_type();
    virtual ~AudienceCreateRequest_1_audience_type() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const AudienceCreateRequest_1_audience_type& rhs) const;
    bool operator!=(const AudienceCreateRequest_1_audience_type& rhs) const;

    /////////////////////////////////////////////
    /// AudienceCreateRequest_1_audience_type members


    friend  void to_json(nlohmann::json& j, const AudienceCreateRequest_1_audience_type& o);
    friend  void from_json(const nlohmann::json& j, AudienceCreateRequest_1_audience_type& o);
protected:
    
};

} // namespace org::openapitools::server::model

#endif /* AudienceCreateRequest_1_audience_type_H_ */
