/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MediaUploadRequest.h
 *
 * Media upload request
 */

#ifndef MediaUploadRequest_H_
#define MediaUploadRequest_H_



#include "MediaUploadType.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Media upload request
/// </summary>
class  MediaUploadRequest 
{
public:
    MediaUploadRequest() = default;
    explicit MediaUploadRequest(boost::property_tree::ptree const& pt);
    virtual ~MediaUploadRequest() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// MediaUploadRequest members

    /// <summary>
    /// 
    /// </summary>
    MediaUploadType getMediaType() const;
    void setMediaType(MediaUploadType value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    MediaUploadType m_Media_type;
};

std::vector<MediaUploadRequest> createMediaUploadRequestVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* MediaUploadRequest_H_ */
