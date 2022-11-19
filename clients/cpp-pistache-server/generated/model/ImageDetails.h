/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ImageDetails.h
 *
 * 
 */

#ifndef ImageDetails_H_
#define ImageDetails_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ImageDetails
{
public:
    ImageDetails();
    virtual ~ImageDetails() = default;


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

    bool operator==(const ImageDetails& rhs) const;
    bool operator!=(const ImageDetails& rhs) const;

    /////////////////////////////////////////////
    /// ImageDetails members

    /// <summary>
    /// 
    /// </summary>
    int32_t getWidth() const;
    void setWidth(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getHeight() const;
    void setHeight(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string const& value);

    friend void to_json(nlohmann::json& j, const ImageDetails& o);
    friend void from_json(const nlohmann::json& j, ImageDetails& o);
protected:
    int32_t m_Width;

    int32_t m_Height;

    std::string m_Url;

    
};

} // namespace org::openapitools::server::model

#endif /* ImageDetails_H_ */
