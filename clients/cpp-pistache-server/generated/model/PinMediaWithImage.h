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
 * PinMediaWithImage.h
 *
 * Pin with image.
 */

#ifndef PinMediaWithImage_H_
#define PinMediaWithImage_H_


#include "ImageDetails.h"
#include "PinMedia.h"
#include <string>
#include "PinMediaWithImage_allOf.h"
#include <map>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Pin with image.
/// </summary>
class  PinMediaWithImage
{
public:
    PinMediaWithImage();
    virtual ~PinMediaWithImage() = default;


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

    bool operator==(const PinMediaWithImage& rhs) const;
    bool operator!=(const PinMediaWithImage& rhs) const;

    /////////////////////////////////////////////
    /// PinMediaWithImage members

    /// <summary>
    /// 
    /// </summary>
    std::map<std::string, org::openapitools::server::model::ImageDetails> getImages() const;
    void setImages(std::map<std::string, org::openapitools::server::model::ImageDetails> const& value);
    bool imagesIsSet() const;
    void unsetImages();
    /// <summary>
    /// 
    /// </summary>
    std::string getMediaType() const;
    void setMediaType(std::string const& value);
    bool mediaTypeIsSet() const;
    void unsetMedia_type();

    friend void to_json(nlohmann::json& j, const PinMediaWithImage& o);
    friend void from_json(const nlohmann::json& j, PinMediaWithImage& o);
protected:
    std::map<std::string, org::openapitools::server::model::ImageDetails> m_Images;
    bool m_ImagesIsSet;
    std::string m_Media_type;
    bool m_Media_typeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* PinMediaWithImage_H_ */
