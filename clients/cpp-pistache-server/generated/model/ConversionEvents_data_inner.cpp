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


#include "ConversionEvents_data_inner.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ConversionEvents_data_inner::ConversionEvents_data_inner()
{
    m_Event_name = "";
    m_Action_source = "";
    m_Event_time = 0L;
    m_Event_id = "";
    m_Event_source_url = "";
    m_Event_source_urlIsSet = false;
    m_Opt_out = false;
    m_Opt_outIsSet = false;
    m_Partner_name = "";
    m_Partner_nameIsSet = false;
    m_Custom_dataIsSet = false;
    m_App_id = "";
    m_App_idIsSet = false;
    m_App_name = "";
    m_App_nameIsSet = false;
    m_App_version = "";
    m_App_versionIsSet = false;
    m_Device_brand = "";
    m_Device_brandIsSet = false;
    m_Device_carrier = "";
    m_Device_carrierIsSet = false;
    m_Device_model = "";
    m_Device_modelIsSet = false;
    m_Device_type = "";
    m_Device_typeIsSet = false;
    m_Os_version = "";
    m_Os_versionIsSet = false;
    m_Wifi = false;
    m_WifiIsSet = false;
    m_Language = "";
    m_LanguageIsSet = false;
    
}

void ConversionEvents_data_inner::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ConversionEvents_data_inner::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ConversionEvents_data_inner::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ConversionEvents_data_inner" : pathPrefix;

                                                                                
    return success;
}

bool ConversionEvents_data_inner::operator==(const ConversionEvents_data_inner& rhs) const
{
    return
    
    
    (getEventName() == rhs.getEventName())
     &&
    
    (getActionSource() == rhs.getActionSource())
     &&
    
    (getEventTime() == rhs.getEventTime())
     &&
    
    (getEventId() == rhs.getEventId())
     &&
    
    
    ((!eventSourceUrlIsSet() && !rhs.eventSourceUrlIsSet()) || (eventSourceUrlIsSet() && rhs.eventSourceUrlIsSet() && getEventSourceUrl() == rhs.getEventSourceUrl())) &&
    
    
    ((!optOutIsSet() && !rhs.optOutIsSet()) || (optOutIsSet() && rhs.optOutIsSet() && isOptOut() == rhs.isOptOut())) &&
    
    
    ((!partnerNameIsSet() && !rhs.partnerNameIsSet()) || (partnerNameIsSet() && rhs.partnerNameIsSet() && getPartnerName() == rhs.getPartnerName())) &&
    
    (getUserData() == rhs.getUserData())
     &&
    
    
    ((!customDataIsSet() && !rhs.customDataIsSet()) || (customDataIsSet() && rhs.customDataIsSet() && getCustomData() == rhs.getCustomData())) &&
    
    
    ((!appIdIsSet() && !rhs.appIdIsSet()) || (appIdIsSet() && rhs.appIdIsSet() && getAppId() == rhs.getAppId())) &&
    
    
    ((!appNameIsSet() && !rhs.appNameIsSet()) || (appNameIsSet() && rhs.appNameIsSet() && getAppName() == rhs.getAppName())) &&
    
    
    ((!appVersionIsSet() && !rhs.appVersionIsSet()) || (appVersionIsSet() && rhs.appVersionIsSet() && getAppVersion() == rhs.getAppVersion())) &&
    
    
    ((!deviceBrandIsSet() && !rhs.deviceBrandIsSet()) || (deviceBrandIsSet() && rhs.deviceBrandIsSet() && getDeviceBrand() == rhs.getDeviceBrand())) &&
    
    
    ((!deviceCarrierIsSet() && !rhs.deviceCarrierIsSet()) || (deviceCarrierIsSet() && rhs.deviceCarrierIsSet() && getDeviceCarrier() == rhs.getDeviceCarrier())) &&
    
    
    ((!deviceModelIsSet() && !rhs.deviceModelIsSet()) || (deviceModelIsSet() && rhs.deviceModelIsSet() && getDeviceModel() == rhs.getDeviceModel())) &&
    
    
    ((!deviceTypeIsSet() && !rhs.deviceTypeIsSet()) || (deviceTypeIsSet() && rhs.deviceTypeIsSet() && getDeviceType() == rhs.getDeviceType())) &&
    
    
    ((!osVersionIsSet() && !rhs.osVersionIsSet()) || (osVersionIsSet() && rhs.osVersionIsSet() && getOsVersion() == rhs.getOsVersion())) &&
    
    
    ((!wifiIsSet() && !rhs.wifiIsSet()) || (wifiIsSet() && rhs.wifiIsSet() && isWifi() == rhs.isWifi())) &&
    
    
    ((!languageIsSet() && !rhs.languageIsSet()) || (languageIsSet() && rhs.languageIsSet() && getLanguage() == rhs.getLanguage()))
    
    ;
}

bool ConversionEvents_data_inner::operator!=(const ConversionEvents_data_inner& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConversionEvents_data_inner& o)
{
    j = nlohmann::json();
    j["event_name"] = o.m_Event_name;
    j["action_source"] = o.m_Action_source;
    j["event_time"] = o.m_Event_time;
    j["event_id"] = o.m_Event_id;
    if(o.eventSourceUrlIsSet())
        j["event_source_url"] = o.m_Event_source_url;
    if(o.optOutIsSet())
        j["opt_out"] = o.m_Opt_out;
    if(o.partnerNameIsSet())
        j["partner_name"] = o.m_Partner_name;
    j["user_data"] = o.m_User_data;
    if(o.customDataIsSet())
        j["custom_data"] = o.m_Custom_data;
    if(o.appIdIsSet())
        j["app_id"] = o.m_App_id;
    if(o.appNameIsSet())
        j["app_name"] = o.m_App_name;
    if(o.appVersionIsSet())
        j["app_version"] = o.m_App_version;
    if(o.deviceBrandIsSet())
        j["device_brand"] = o.m_Device_brand;
    if(o.deviceCarrierIsSet())
        j["device_carrier"] = o.m_Device_carrier;
    if(o.deviceModelIsSet())
        j["device_model"] = o.m_Device_model;
    if(o.deviceTypeIsSet())
        j["device_type"] = o.m_Device_type;
    if(o.osVersionIsSet())
        j["os_version"] = o.m_Os_version;
    if(o.wifiIsSet())
        j["wifi"] = o.m_Wifi;
    if(o.languageIsSet())
        j["language"] = o.m_Language;
    
}

void from_json(const nlohmann::json& j, ConversionEvents_data_inner& o)
{
    j.at("event_name").get_to(o.m_Event_name);
    j.at("action_source").get_to(o.m_Action_source);
    j.at("event_time").get_to(o.m_Event_time);
    j.at("event_id").get_to(o.m_Event_id);
    if(j.find("event_source_url") != j.end())
    {
        j.at("event_source_url").get_to(o.m_Event_source_url);
        o.m_Event_source_urlIsSet = true;
    } 
    if(j.find("opt_out") != j.end())
    {
        j.at("opt_out").get_to(o.m_Opt_out);
        o.m_Opt_outIsSet = true;
    } 
    if(j.find("partner_name") != j.end())
    {
        j.at("partner_name").get_to(o.m_Partner_name);
        o.m_Partner_nameIsSet = true;
    } 
    j.at("user_data").get_to(o.m_User_data);
    if(j.find("custom_data") != j.end())
    {
        j.at("custom_data").get_to(o.m_Custom_data);
        o.m_Custom_dataIsSet = true;
    } 
    if(j.find("app_id") != j.end())
    {
        j.at("app_id").get_to(o.m_App_id);
        o.m_App_idIsSet = true;
    } 
    if(j.find("app_name") != j.end())
    {
        j.at("app_name").get_to(o.m_App_name);
        o.m_App_nameIsSet = true;
    } 
    if(j.find("app_version") != j.end())
    {
        j.at("app_version").get_to(o.m_App_version);
        o.m_App_versionIsSet = true;
    } 
    if(j.find("device_brand") != j.end())
    {
        j.at("device_brand").get_to(o.m_Device_brand);
        o.m_Device_brandIsSet = true;
    } 
    if(j.find("device_carrier") != j.end())
    {
        j.at("device_carrier").get_to(o.m_Device_carrier);
        o.m_Device_carrierIsSet = true;
    } 
    if(j.find("device_model") != j.end())
    {
        j.at("device_model").get_to(o.m_Device_model);
        o.m_Device_modelIsSet = true;
    } 
    if(j.find("device_type") != j.end())
    {
        j.at("device_type").get_to(o.m_Device_type);
        o.m_Device_typeIsSet = true;
    } 
    if(j.find("os_version") != j.end())
    {
        j.at("os_version").get_to(o.m_Os_version);
        o.m_Os_versionIsSet = true;
    } 
    if(j.find("wifi") != j.end())
    {
        j.at("wifi").get_to(o.m_Wifi);
        o.m_WifiIsSet = true;
    } 
    if(j.find("language") != j.end())
    {
        j.at("language").get_to(o.m_Language);
        o.m_LanguageIsSet = true;
    } 
    
}

std::string ConversionEvents_data_inner::getEventName() const
{
    return m_Event_name;
}
void ConversionEvents_data_inner::setEventName(std::string const& value)
{
    m_Event_name = value;
}
std::string ConversionEvents_data_inner::getActionSource() const
{
    return m_Action_source;
}
void ConversionEvents_data_inner::setActionSource(std::string const& value)
{
    m_Action_source = value;
}
int64_t ConversionEvents_data_inner::getEventTime() const
{
    return m_Event_time;
}
void ConversionEvents_data_inner::setEventTime(int64_t const value)
{
    m_Event_time = value;
}
std::string ConversionEvents_data_inner::getEventId() const
{
    return m_Event_id;
}
void ConversionEvents_data_inner::setEventId(std::string const& value)
{
    m_Event_id = value;
}
std::string ConversionEvents_data_inner::getEventSourceUrl() const
{
    return m_Event_source_url;
}
void ConversionEvents_data_inner::setEventSourceUrl(std::string const& value)
{
    m_Event_source_url = value;
    m_Event_source_urlIsSet = true;
}
bool ConversionEvents_data_inner::eventSourceUrlIsSet() const
{
    return m_Event_source_urlIsSet;
}
void ConversionEvents_data_inner::unsetEvent_source_url()
{
    m_Event_source_urlIsSet = false;
}
bool ConversionEvents_data_inner::isOptOut() const
{
    return m_Opt_out;
}
void ConversionEvents_data_inner::setOptOut(bool const value)
{
    m_Opt_out = value;
    m_Opt_outIsSet = true;
}
bool ConversionEvents_data_inner::optOutIsSet() const
{
    return m_Opt_outIsSet;
}
void ConversionEvents_data_inner::unsetOpt_out()
{
    m_Opt_outIsSet = false;
}
std::string ConversionEvents_data_inner::getPartnerName() const
{
    return m_Partner_name;
}
void ConversionEvents_data_inner::setPartnerName(std::string const& value)
{
    m_Partner_name = value;
    m_Partner_nameIsSet = true;
}
bool ConversionEvents_data_inner::partnerNameIsSet() const
{
    return m_Partner_nameIsSet;
}
void ConversionEvents_data_inner::unsetPartner_name()
{
    m_Partner_nameIsSet = false;
}
org::openapitools::server::model::ConversionEventsUserData ConversionEvents_data_inner::getUserData() const
{
    return m_User_data;
}
void ConversionEvents_data_inner::setUserData(org::openapitools::server::model::ConversionEventsUserData const& value)
{
    m_User_data = value;
}
org::openapitools::server::model::ConversionEvents_data_inner_custom_data ConversionEvents_data_inner::getCustomData() const
{
    return m_Custom_data;
}
void ConversionEvents_data_inner::setCustomData(org::openapitools::server::model::ConversionEvents_data_inner_custom_data const& value)
{
    m_Custom_data = value;
    m_Custom_dataIsSet = true;
}
bool ConversionEvents_data_inner::customDataIsSet() const
{
    return m_Custom_dataIsSet;
}
void ConversionEvents_data_inner::unsetCustom_data()
{
    m_Custom_dataIsSet = false;
}
std::string ConversionEvents_data_inner::getAppId() const
{
    return m_App_id;
}
void ConversionEvents_data_inner::setAppId(std::string const& value)
{
    m_App_id = value;
    m_App_idIsSet = true;
}
bool ConversionEvents_data_inner::appIdIsSet() const
{
    return m_App_idIsSet;
}
void ConversionEvents_data_inner::unsetApp_id()
{
    m_App_idIsSet = false;
}
std::string ConversionEvents_data_inner::getAppName() const
{
    return m_App_name;
}
void ConversionEvents_data_inner::setAppName(std::string const& value)
{
    m_App_name = value;
    m_App_nameIsSet = true;
}
bool ConversionEvents_data_inner::appNameIsSet() const
{
    return m_App_nameIsSet;
}
void ConversionEvents_data_inner::unsetApp_name()
{
    m_App_nameIsSet = false;
}
std::string ConversionEvents_data_inner::getAppVersion() const
{
    return m_App_version;
}
void ConversionEvents_data_inner::setAppVersion(std::string const& value)
{
    m_App_version = value;
    m_App_versionIsSet = true;
}
bool ConversionEvents_data_inner::appVersionIsSet() const
{
    return m_App_versionIsSet;
}
void ConversionEvents_data_inner::unsetApp_version()
{
    m_App_versionIsSet = false;
}
std::string ConversionEvents_data_inner::getDeviceBrand() const
{
    return m_Device_brand;
}
void ConversionEvents_data_inner::setDeviceBrand(std::string const& value)
{
    m_Device_brand = value;
    m_Device_brandIsSet = true;
}
bool ConversionEvents_data_inner::deviceBrandIsSet() const
{
    return m_Device_brandIsSet;
}
void ConversionEvents_data_inner::unsetDevice_brand()
{
    m_Device_brandIsSet = false;
}
std::string ConversionEvents_data_inner::getDeviceCarrier() const
{
    return m_Device_carrier;
}
void ConversionEvents_data_inner::setDeviceCarrier(std::string const& value)
{
    m_Device_carrier = value;
    m_Device_carrierIsSet = true;
}
bool ConversionEvents_data_inner::deviceCarrierIsSet() const
{
    return m_Device_carrierIsSet;
}
void ConversionEvents_data_inner::unsetDevice_carrier()
{
    m_Device_carrierIsSet = false;
}
std::string ConversionEvents_data_inner::getDeviceModel() const
{
    return m_Device_model;
}
void ConversionEvents_data_inner::setDeviceModel(std::string const& value)
{
    m_Device_model = value;
    m_Device_modelIsSet = true;
}
bool ConversionEvents_data_inner::deviceModelIsSet() const
{
    return m_Device_modelIsSet;
}
void ConversionEvents_data_inner::unsetDevice_model()
{
    m_Device_modelIsSet = false;
}
std::string ConversionEvents_data_inner::getDeviceType() const
{
    return m_Device_type;
}
void ConversionEvents_data_inner::setDeviceType(std::string const& value)
{
    m_Device_type = value;
    m_Device_typeIsSet = true;
}
bool ConversionEvents_data_inner::deviceTypeIsSet() const
{
    return m_Device_typeIsSet;
}
void ConversionEvents_data_inner::unsetDevice_type()
{
    m_Device_typeIsSet = false;
}
std::string ConversionEvents_data_inner::getOsVersion() const
{
    return m_Os_version;
}
void ConversionEvents_data_inner::setOsVersion(std::string const& value)
{
    m_Os_version = value;
    m_Os_versionIsSet = true;
}
bool ConversionEvents_data_inner::osVersionIsSet() const
{
    return m_Os_versionIsSet;
}
void ConversionEvents_data_inner::unsetOs_version()
{
    m_Os_versionIsSet = false;
}
bool ConversionEvents_data_inner::isWifi() const
{
    return m_Wifi;
}
void ConversionEvents_data_inner::setWifi(bool const value)
{
    m_Wifi = value;
    m_WifiIsSet = true;
}
bool ConversionEvents_data_inner::wifiIsSet() const
{
    return m_WifiIsSet;
}
void ConversionEvents_data_inner::unsetWifi()
{
    m_WifiIsSet = false;
}
std::string ConversionEvents_data_inner::getLanguage() const
{
    return m_Language;
}
void ConversionEvents_data_inner::setLanguage(std::string const& value)
{
    m_Language = value;
    m_LanguageIsSet = true;
}
bool ConversionEvents_data_inner::languageIsSet() const
{
    return m_LanguageIsSet;
}
void ConversionEvents_data_inner::unsetLanguage()
{
    m_LanguageIsSet = false;
}


} // namespace org::openapitools::server::model

