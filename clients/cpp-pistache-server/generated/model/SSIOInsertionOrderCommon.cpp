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


#include "SSIOInsertionOrderCommon.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SSIOInsertionOrderCommon::SSIOInsertionOrderCommon()
{
    m_Start_date = "";
    m_Start_dateIsSet = false;
    m_End_date = "";
    m_End_dateIsSet = false;
    m_Po_number = "";
    m_Po_numberIsSet = false;
    m_Budget_amount = 0.0;
    m_Budget_amountIsSet = false;
    m_Billing_contact_firstname = "";
    m_Billing_contact_firstnameIsSet = false;
    m_Billing_contact_lastname = "";
    m_Billing_contact_lastnameIsSet = false;
    m_Billing_contact_email = "";
    m_Billing_contact_emailIsSet = false;
    m_Media_contact_firstname = "";
    m_Media_contact_firstnameIsSet = false;
    m_Media_contact_lastname = "";
    m_Media_contact_lastnameIsSet = false;
    m_Media_contact_email = "";
    m_Media_contact_emailIsSet = false;
    m_Agency_link = "";
    m_Agency_linkIsSet = false;
    m_User_email = "";
    m_User_emailIsSet = false;
    
}

void SSIOInsertionOrderCommon::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SSIOInsertionOrderCommon::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SSIOInsertionOrderCommon::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SSIOInsertionOrderCommon" : pathPrefix;

         
    if (startDateIsSet())
    {
        const std::string& value = m_Start_date;
        const std::string currentValuePath = _pathPrefix + ".startDate";
                
        

    }
         
    if (endDateIsSet())
    {
        const std::string& value = m_End_date;
        const std::string currentValuePath = _pathPrefix + ".endDate";
                
        

    }
                                            
    return success;
}

bool SSIOInsertionOrderCommon::operator==(const SSIOInsertionOrderCommon& rhs) const
{
    return
    
    
    
    ((!startDateIsSet() && !rhs.startDateIsSet()) || (startDateIsSet() && rhs.startDateIsSet() && getStartDate() == rhs.getStartDate())) &&
    
    
    ((!endDateIsSet() && !rhs.endDateIsSet()) || (endDateIsSet() && rhs.endDateIsSet() && getEndDate() == rhs.getEndDate())) &&
    
    
    ((!poNumberIsSet() && !rhs.poNumberIsSet()) || (poNumberIsSet() && rhs.poNumberIsSet() && getPoNumber() == rhs.getPoNumber())) &&
    
    
    ((!budgetAmountIsSet() && !rhs.budgetAmountIsSet()) || (budgetAmountIsSet() && rhs.budgetAmountIsSet() && getBudgetAmount() == rhs.getBudgetAmount())) &&
    
    
    ((!billingContactFirstnameIsSet() && !rhs.billingContactFirstnameIsSet()) || (billingContactFirstnameIsSet() && rhs.billingContactFirstnameIsSet() && getBillingContactFirstname() == rhs.getBillingContactFirstname())) &&
    
    
    ((!billingContactLastnameIsSet() && !rhs.billingContactLastnameIsSet()) || (billingContactLastnameIsSet() && rhs.billingContactLastnameIsSet() && getBillingContactLastname() == rhs.getBillingContactLastname())) &&
    
    
    ((!billingContactEmailIsSet() && !rhs.billingContactEmailIsSet()) || (billingContactEmailIsSet() && rhs.billingContactEmailIsSet() && getBillingContactEmail() == rhs.getBillingContactEmail())) &&
    
    
    ((!mediaContactFirstnameIsSet() && !rhs.mediaContactFirstnameIsSet()) || (mediaContactFirstnameIsSet() && rhs.mediaContactFirstnameIsSet() && getMediaContactFirstname() == rhs.getMediaContactFirstname())) &&
    
    
    ((!mediaContactLastnameIsSet() && !rhs.mediaContactLastnameIsSet()) || (mediaContactLastnameIsSet() && rhs.mediaContactLastnameIsSet() && getMediaContactLastname() == rhs.getMediaContactLastname())) &&
    
    
    ((!mediaContactEmailIsSet() && !rhs.mediaContactEmailIsSet()) || (mediaContactEmailIsSet() && rhs.mediaContactEmailIsSet() && getMediaContactEmail() == rhs.getMediaContactEmail())) &&
    
    
    ((!agencyLinkIsSet() && !rhs.agencyLinkIsSet()) || (agencyLinkIsSet() && rhs.agencyLinkIsSet() && getAgencyLink() == rhs.getAgencyLink())) &&
    
    
    ((!userEmailIsSet() && !rhs.userEmailIsSet()) || (userEmailIsSet() && rhs.userEmailIsSet() && getUserEmail() == rhs.getUserEmail()))
    
    ;
}

bool SSIOInsertionOrderCommon::operator!=(const SSIOInsertionOrderCommon& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SSIOInsertionOrderCommon& o)
{
    j = nlohmann::json::object();
    if(o.startDateIsSet())
        j["start_date"] = o.m_Start_date;
    if(o.endDateIsSet())
        j["end_date"] = o.m_End_date;
    if(o.poNumberIsSet())
        j["po_number"] = o.m_Po_number;
    if(o.budgetAmountIsSet())
        j["budget_amount"] = o.m_Budget_amount;
    if(o.billingContactFirstnameIsSet())
        j["billing_contact_firstname"] = o.m_Billing_contact_firstname;
    if(o.billingContactLastnameIsSet())
        j["billing_contact_lastname"] = o.m_Billing_contact_lastname;
    if(o.billingContactEmailIsSet())
        j["billing_contact_email"] = o.m_Billing_contact_email;
    if(o.mediaContactFirstnameIsSet())
        j["media_contact_firstname"] = o.m_Media_contact_firstname;
    if(o.mediaContactLastnameIsSet())
        j["media_contact_lastname"] = o.m_Media_contact_lastname;
    if(o.mediaContactEmailIsSet())
        j["media_contact_email"] = o.m_Media_contact_email;
    if(o.agencyLinkIsSet())
        j["agency_link"] = o.m_Agency_link;
    if(o.userEmailIsSet())
        j["user_email"] = o.m_User_email;
    
}

void from_json(const nlohmann::json& j, SSIOInsertionOrderCommon& o)
{
    if(j.find("start_date") != j.end())
    {
        j.at("start_date").get_to(o.m_Start_date);
        o.m_Start_dateIsSet = true;
    } 
    if(j.find("end_date") != j.end())
    {
        j.at("end_date").get_to(o.m_End_date);
        o.m_End_dateIsSet = true;
    } 
    if(j.find("po_number") != j.end())
    {
        j.at("po_number").get_to(o.m_Po_number);
        o.m_Po_numberIsSet = true;
    } 
    if(j.find("budget_amount") != j.end())
    {
        j.at("budget_amount").get_to(o.m_Budget_amount);
        o.m_Budget_amountIsSet = true;
    } 
    if(j.find("billing_contact_firstname") != j.end())
    {
        j.at("billing_contact_firstname").get_to(o.m_Billing_contact_firstname);
        o.m_Billing_contact_firstnameIsSet = true;
    } 
    if(j.find("billing_contact_lastname") != j.end())
    {
        j.at("billing_contact_lastname").get_to(o.m_Billing_contact_lastname);
        o.m_Billing_contact_lastnameIsSet = true;
    } 
    if(j.find("billing_contact_email") != j.end())
    {
        j.at("billing_contact_email").get_to(o.m_Billing_contact_email);
        o.m_Billing_contact_emailIsSet = true;
    } 
    if(j.find("media_contact_firstname") != j.end())
    {
        j.at("media_contact_firstname").get_to(o.m_Media_contact_firstname);
        o.m_Media_contact_firstnameIsSet = true;
    } 
    if(j.find("media_contact_lastname") != j.end())
    {
        j.at("media_contact_lastname").get_to(o.m_Media_contact_lastname);
        o.m_Media_contact_lastnameIsSet = true;
    } 
    if(j.find("media_contact_email") != j.end())
    {
        j.at("media_contact_email").get_to(o.m_Media_contact_email);
        o.m_Media_contact_emailIsSet = true;
    } 
    if(j.find("agency_link") != j.end())
    {
        j.at("agency_link").get_to(o.m_Agency_link);
        o.m_Agency_linkIsSet = true;
    } 
    if(j.find("user_email") != j.end())
    {
        j.at("user_email").get_to(o.m_User_email);
        o.m_User_emailIsSet = true;
    } 
    
}

std::string SSIOInsertionOrderCommon::getStartDate() const
{
    return m_Start_date;
}
void SSIOInsertionOrderCommon::setStartDate(std::string const& value)
{
    m_Start_date = value;
    m_Start_dateIsSet = true;
}
bool SSIOInsertionOrderCommon::startDateIsSet() const
{
    return m_Start_dateIsSet;
}
void SSIOInsertionOrderCommon::unsetStart_date()
{
    m_Start_dateIsSet = false;
}
std::string SSIOInsertionOrderCommon::getEndDate() const
{
    return m_End_date;
}
void SSIOInsertionOrderCommon::setEndDate(std::string const& value)
{
    m_End_date = value;
    m_End_dateIsSet = true;
}
bool SSIOInsertionOrderCommon::endDateIsSet() const
{
    return m_End_dateIsSet;
}
void SSIOInsertionOrderCommon::unsetEnd_date()
{
    m_End_dateIsSet = false;
}
std::string SSIOInsertionOrderCommon::getPoNumber() const
{
    return m_Po_number;
}
void SSIOInsertionOrderCommon::setPoNumber(std::string const& value)
{
    m_Po_number = value;
    m_Po_numberIsSet = true;
}
bool SSIOInsertionOrderCommon::poNumberIsSet() const
{
    return m_Po_numberIsSet;
}
void SSIOInsertionOrderCommon::unsetPo_number()
{
    m_Po_numberIsSet = false;
}
double SSIOInsertionOrderCommon::getBudgetAmount() const
{
    return m_Budget_amount;
}
void SSIOInsertionOrderCommon::setBudgetAmount(double const value)
{
    m_Budget_amount = value;
    m_Budget_amountIsSet = true;
}
bool SSIOInsertionOrderCommon::budgetAmountIsSet() const
{
    return m_Budget_amountIsSet;
}
void SSIOInsertionOrderCommon::unsetBudget_amount()
{
    m_Budget_amountIsSet = false;
}
std::string SSIOInsertionOrderCommon::getBillingContactFirstname() const
{
    return m_Billing_contact_firstname;
}
void SSIOInsertionOrderCommon::setBillingContactFirstname(std::string const& value)
{
    m_Billing_contact_firstname = value;
    m_Billing_contact_firstnameIsSet = true;
}
bool SSIOInsertionOrderCommon::billingContactFirstnameIsSet() const
{
    return m_Billing_contact_firstnameIsSet;
}
void SSIOInsertionOrderCommon::unsetBilling_contact_firstname()
{
    m_Billing_contact_firstnameIsSet = false;
}
std::string SSIOInsertionOrderCommon::getBillingContactLastname() const
{
    return m_Billing_contact_lastname;
}
void SSIOInsertionOrderCommon::setBillingContactLastname(std::string const& value)
{
    m_Billing_contact_lastname = value;
    m_Billing_contact_lastnameIsSet = true;
}
bool SSIOInsertionOrderCommon::billingContactLastnameIsSet() const
{
    return m_Billing_contact_lastnameIsSet;
}
void SSIOInsertionOrderCommon::unsetBilling_contact_lastname()
{
    m_Billing_contact_lastnameIsSet = false;
}
std::string SSIOInsertionOrderCommon::getBillingContactEmail() const
{
    return m_Billing_contact_email;
}
void SSIOInsertionOrderCommon::setBillingContactEmail(std::string const& value)
{
    m_Billing_contact_email = value;
    m_Billing_contact_emailIsSet = true;
}
bool SSIOInsertionOrderCommon::billingContactEmailIsSet() const
{
    return m_Billing_contact_emailIsSet;
}
void SSIOInsertionOrderCommon::unsetBilling_contact_email()
{
    m_Billing_contact_emailIsSet = false;
}
std::string SSIOInsertionOrderCommon::getMediaContactFirstname() const
{
    return m_Media_contact_firstname;
}
void SSIOInsertionOrderCommon::setMediaContactFirstname(std::string const& value)
{
    m_Media_contact_firstname = value;
    m_Media_contact_firstnameIsSet = true;
}
bool SSIOInsertionOrderCommon::mediaContactFirstnameIsSet() const
{
    return m_Media_contact_firstnameIsSet;
}
void SSIOInsertionOrderCommon::unsetMedia_contact_firstname()
{
    m_Media_contact_firstnameIsSet = false;
}
std::string SSIOInsertionOrderCommon::getMediaContactLastname() const
{
    return m_Media_contact_lastname;
}
void SSIOInsertionOrderCommon::setMediaContactLastname(std::string const& value)
{
    m_Media_contact_lastname = value;
    m_Media_contact_lastnameIsSet = true;
}
bool SSIOInsertionOrderCommon::mediaContactLastnameIsSet() const
{
    return m_Media_contact_lastnameIsSet;
}
void SSIOInsertionOrderCommon::unsetMedia_contact_lastname()
{
    m_Media_contact_lastnameIsSet = false;
}
std::string SSIOInsertionOrderCommon::getMediaContactEmail() const
{
    return m_Media_contact_email;
}
void SSIOInsertionOrderCommon::setMediaContactEmail(std::string const& value)
{
    m_Media_contact_email = value;
    m_Media_contact_emailIsSet = true;
}
bool SSIOInsertionOrderCommon::mediaContactEmailIsSet() const
{
    return m_Media_contact_emailIsSet;
}
void SSIOInsertionOrderCommon::unsetMedia_contact_email()
{
    m_Media_contact_emailIsSet = false;
}
std::string SSIOInsertionOrderCommon::getAgencyLink() const
{
    return m_Agency_link;
}
void SSIOInsertionOrderCommon::setAgencyLink(std::string const& value)
{
    m_Agency_link = value;
    m_Agency_linkIsSet = true;
}
bool SSIOInsertionOrderCommon::agencyLinkIsSet() const
{
    return m_Agency_linkIsSet;
}
void SSIOInsertionOrderCommon::unsetAgency_link()
{
    m_Agency_linkIsSet = false;
}
std::string SSIOInsertionOrderCommon::getUserEmail() const
{
    return m_User_email;
}
void SSIOInsertionOrderCommon::setUserEmail(std::string const& value)
{
    m_User_email = value;
    m_User_emailIsSet = true;
}
bool SSIOInsertionOrderCommon::userEmailIsSet() const
{
    return m_User_emailIsSet;
}
void SSIOInsertionOrderCommon::unsetUser_email()
{
    m_User_emailIsSet = false;
}


} // namespace org::openapitools::server::model

