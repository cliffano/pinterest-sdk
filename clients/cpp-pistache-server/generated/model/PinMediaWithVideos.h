/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PinMediaWithVideos.h
 *
 * Pin with multiple videos.
 */

#ifndef PinMediaWithVideos_H_
#define PinMediaWithVideos_H_


#include "VideoMetadata.h"
#include "PinMedia.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Pin with multiple videos.
/// </summary>
class  PinMediaWithVideos
{
public:
    PinMediaWithVideos();
    virtual ~PinMediaWithVideos() = default;


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

    bool operator==(const PinMediaWithVideos& rhs) const;
    bool operator!=(const PinMediaWithVideos& rhs) const;

    /////////////////////////////////////////////
    /// PinMediaWithVideos members

    /// <summary>
    /// 
    /// </summary>
    std::string getMediaType() const;
    void setMediaType(std::string const& value);
    bool mediaTypeIsSet() const;
    void unsetMedia_type();
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::VideoMetadata> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::VideoMetadata> const& value);
    bool itemsIsSet() const;
    void unsetItems();

    friend  void to_json(nlohmann::json& j, const PinMediaWithVideos& o);
    friend  void from_json(const nlohmann::json& j, PinMediaWithVideos& o);
protected:
    std::string m_Media_type;
    bool m_Media_typeIsSet;
    std::vector<org::openapitools::server::model::VideoMetadata> m_Items;
    bool m_ItemsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* PinMediaWithVideos_H_ */
