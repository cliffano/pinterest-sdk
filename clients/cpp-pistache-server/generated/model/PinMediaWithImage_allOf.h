/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PinMediaWithImage_allOf.h
 *
 * 
 */

#ifndef PinMediaWithImage_allOf_H_
#define PinMediaWithImage_allOf_H_


#include "ImageDetails.h"
#include <map>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  PinMediaWithImage_allOf
{
public:
    PinMediaWithImage_allOf();
    virtual ~PinMediaWithImage_allOf() = default;


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

    bool operator==(const PinMediaWithImage_allOf& rhs) const;
    bool operator!=(const PinMediaWithImage_allOf& rhs) const;

    /////////////////////////////////////////////
    /// PinMediaWithImage_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::map<std::string, org::openapitools::server::model::ImageDetails> getImages() const;
    void setImages(std::map<std::string, org::openapitools::server::model::ImageDetails> const& value);
    bool imagesIsSet() const;
    void unsetImages();

    friend void to_json(nlohmann::json& j, const PinMediaWithImage_allOf& o);
    friend void from_json(const nlohmann::json& j, PinMediaWithImage_allOf& o);
protected:
    std::map<std::string, org::openapitools::server::model::ImageDetails> m_Images;
    bool m_ImagesIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* PinMediaWithImage_allOf_H_ */
