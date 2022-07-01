/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Account.h
 *
 * 
 */

#ifndef Account_H_
#define Account_H_



#include <string>
#include <vector>
#include <memory>
#include <vector>
#include <array>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Account 
{
public:
    Account() = default;
    explicit Account(boost::property_tree::ptree const& pt);
    virtual ~Account() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// Account members

    /// <summary>
    /// Type of account
    /// </summary>
    std::string getAccountType() const;
    void setAccountType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getProfileImage() const;
    void setProfileImage(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getWebsiteUrl() const;
    void setWebsiteUrl(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getUsername() const;
    void setUsername(std::string value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Account_type = "";
    std::string m_Profile_image = "";
    std::string m_Website_url = "";
    std::string m_Username = "";
    const std::array<std::string, 2> m_Account_typeEnum = {
          "PINNER","BUSINESS"
    };

};

std::vector<Account> createAccountVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* Account_H_ */
