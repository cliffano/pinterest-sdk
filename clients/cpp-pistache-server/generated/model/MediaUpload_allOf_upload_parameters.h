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
 * MediaUpload_allOf_upload_parameters.h
 *
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 */

#ifndef MediaUpload_allOf_upload_parameters_H_
#define MediaUpload_allOf_upload_parameters_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
/// </summary>
class  MediaUpload_allOf_upload_parameters
{
public:
    MediaUpload_allOf_upload_parameters();
    virtual ~MediaUpload_allOf_upload_parameters() = default;


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

    bool operator==(const MediaUpload_allOf_upload_parameters& rhs) const;
    bool operator!=(const MediaUpload_allOf_upload_parameters& rhs) const;

    /////////////////////////////////////////////
    /// MediaUpload_allOf_upload_parameters members

    /// <summary>
    /// 
    /// </summary>
    std::string getXAmzDate() const;
    void setXAmzDate(std::string const& value);
    bool xAmzDateIsSet() const;
    void unsetX_amz_date();
    /// <summary>
    /// 
    /// </summary>
    std::string getXAmzSignature() const;
    void setXAmzSignature(std::string const& value);
    bool xAmzSignatureIsSet() const;
    void unsetX_amz_signature();
    /// <summary>
    /// 
    /// </summary>
    std::string getXAmzSecurityToken() const;
    void setXAmzSecurityToken(std::string const& value);
    bool xAmzSecurityTokenIsSet() const;
    void unsetX_amz_security_token();
    /// <summary>
    /// 
    /// </summary>
    std::string getXAmzAlgorithm() const;
    void setXAmzAlgorithm(std::string const& value);
    bool xAmzAlgorithmIsSet() const;
    void unsetX_amz_algorithm();
    /// <summary>
    /// 
    /// </summary>
    std::string getKey() const;
    void setKey(std::string const& value);
    bool keyIsSet() const;
    void unsetKey();
    /// <summary>
    /// 
    /// </summary>
    std::string getPolicy() const;
    void setPolicy(std::string const& value);
    bool policyIsSet() const;
    void unsetPolicy();
    /// <summary>
    /// 
    /// </summary>
    std::string getXAmzCredential() const;
    void setXAmzCredential(std::string const& value);
    bool xAmzCredentialIsSet() const;
    void unsetX_amz_credential();
    /// <summary>
    /// 
    /// </summary>
    std::string getContentType() const;
    void setContentType(std::string const& value);
    bool contentTypeIsSet() const;
    void unsetContent_Type();

    friend  void to_json(nlohmann::json& j, const MediaUpload_allOf_upload_parameters& o);
    friend  void from_json(const nlohmann::json& j, MediaUpload_allOf_upload_parameters& o);
protected:
    std::string m_X_amz_date;
    bool m_X_amz_dateIsSet;
    std::string m_X_amz_signature;
    bool m_X_amz_signatureIsSet;
    std::string m_X_amz_security_token;
    bool m_X_amz_security_tokenIsSet;
    std::string m_X_amz_algorithm;
    bool m_X_amz_algorithmIsSet;
    std::string m_Key;
    bool m_KeyIsSet;
    std::string m_Policy;
    bool m_PolicyIsSet;
    std::string m_X_amz_credential;
    bool m_X_amz_credentialIsSet;
    std::string m_Content_Type;
    bool m_Content_TypeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MediaUpload_allOf_upload_parameters_H_ */
