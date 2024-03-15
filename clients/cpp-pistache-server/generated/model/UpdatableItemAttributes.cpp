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


#include "UpdatableItemAttributes.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

UpdatableItemAttributes::UpdatableItemAttributes()
{
    m_Ad_link = "";
    m_Ad_linkIsSet = false;
    m_Adult = false;
    m_AdultIsSet = false;
    m_Age_group = "";
    m_Age_groupIsSet = false;
    m_Availability = "";
    m_AvailabilityIsSet = false;
    m_Average_review_rating = 0.0;
    m_Average_review_ratingIsSet = false;
    m_Brand = "";
    m_BrandIsSet = false;
    m_Checkout_enabled = false;
    m_Checkout_enabledIsSet = false;
    m_Color = "";
    m_ColorIsSet = false;
    m_Condition = "";
    m_ConditionIsSet = false;
    m_Custom_label_0 = "";
    m_Custom_label_0IsSet = false;
    m_Custom_label_1 = "";
    m_Custom_label_1IsSet = false;
    m_Custom_label_2 = "";
    m_Custom_label_2IsSet = false;
    m_Custom_label_3 = "";
    m_Custom_label_3IsSet = false;
    m_Custom_label_4 = "";
    m_Custom_label_4IsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Free_shipping_label = false;
    m_Free_shipping_labelIsSet = false;
    m_Free_shipping_limit = "";
    m_Free_shipping_limitIsSet = false;
    m_Gender = "";
    m_GenderIsSet = false;
    m_Google_product_category = "";
    m_Google_product_categoryIsSet = false;
    m_Gtin = 0;
    m_GtinIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Item_group_id = "";
    m_Item_group_idIsSet = false;
    m_Last_updated_time = 0L;
    m_Last_updated_timeIsSet = false;
    m_Link = "";
    m_LinkIsSet = false;
    m_Material = "";
    m_MaterialIsSet = false;
    m_Min_ad_price = "";
    m_Min_ad_priceIsSet = false;
    m_Mobile_link = "";
    m_Mobile_linkIsSet = false;
    m_Mpn = "";
    m_MpnIsSet = false;
    m_Number_of_ratings = 0;
    m_Number_of_ratingsIsSet = false;
    m_Number_of_reviews = 0;
    m_Number_of_reviewsIsSet = false;
    m_Pattern = "";
    m_PatternIsSet = false;
    m_Price = "";
    m_PriceIsSet = false;
    m_Product_type = "";
    m_Product_typeIsSet = false;
    m_Sale_price = "";
    m_Sale_priceIsSet = false;
    m_Shipping = "";
    m_ShippingIsSet = false;
    m_Shipping_height = "";
    m_Shipping_heightIsSet = false;
    m_Shipping_weight = "";
    m_Shipping_weightIsSet = false;
    m_Shipping_width = "";
    m_Shipping_widthIsSet = false;
    m_Size = "";
    m_SizeIsSet = false;
    m_Size_system = "";
    m_Size_systemIsSet = false;
    m_Size_type = "";
    m_Size_typeIsSet = false;
    m_Tax = "";
    m_TaxIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Variant_namesIsSet = false;
    m_Variant_valuesIsSet = false;
    
}

void UpdatableItemAttributes::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool UpdatableItemAttributes::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool UpdatableItemAttributes::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "UpdatableItemAttributes" : pathPrefix;

                                                                                                                                                                                     
    if (variantNamesIsSet())
    {
        const std::vector<std::string>& value = m_Variant_names;
        const std::string currentValuePath = _pathPrefix + ".variantNames";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (variantValuesIsSet())
    {
        const std::vector<std::string>& value = m_Variant_values;
        const std::string currentValuePath = _pathPrefix + ".variantValues";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool UpdatableItemAttributes::operator==(const UpdatableItemAttributes& rhs) const
{
    return
    
    
    
    ((!adLinkIsSet() && !rhs.adLinkIsSet()) || (adLinkIsSet() && rhs.adLinkIsSet() && getAdLink() == rhs.getAdLink())) &&
    
    
    ((!adultIsSet() && !rhs.adultIsSet()) || (adultIsSet() && rhs.adultIsSet() && isAdult() == rhs.isAdult())) &&
    
    
    ((!ageGroupIsSet() && !rhs.ageGroupIsSet()) || (ageGroupIsSet() && rhs.ageGroupIsSet() && getAgeGroup() == rhs.getAgeGroup())) &&
    
    
    ((!availabilityIsSet() && !rhs.availabilityIsSet()) || (availabilityIsSet() && rhs.availabilityIsSet() && getAvailability() == rhs.getAvailability())) &&
    
    
    ((!averageReviewRatingIsSet() && !rhs.averageReviewRatingIsSet()) || (averageReviewRatingIsSet() && rhs.averageReviewRatingIsSet() && getAverageReviewRating() == rhs.getAverageReviewRating())) &&
    
    
    ((!brandIsSet() && !rhs.brandIsSet()) || (brandIsSet() && rhs.brandIsSet() && getBrand() == rhs.getBrand())) &&
    
    
    ((!checkoutEnabledIsSet() && !rhs.checkoutEnabledIsSet()) || (checkoutEnabledIsSet() && rhs.checkoutEnabledIsSet() && isCheckoutEnabled() == rhs.isCheckoutEnabled())) &&
    
    
    ((!colorIsSet() && !rhs.colorIsSet()) || (colorIsSet() && rhs.colorIsSet() && getColor() == rhs.getColor())) &&
    
    
    ((!conditionIsSet() && !rhs.conditionIsSet()) || (conditionIsSet() && rhs.conditionIsSet() && getCondition() == rhs.getCondition())) &&
    
    
    ((!customLabel0IsSet() && !rhs.customLabel0IsSet()) || (customLabel0IsSet() && rhs.customLabel0IsSet() && getCustomLabel0() == rhs.getCustomLabel0())) &&
    
    
    ((!customLabel1IsSet() && !rhs.customLabel1IsSet()) || (customLabel1IsSet() && rhs.customLabel1IsSet() && getCustomLabel1() == rhs.getCustomLabel1())) &&
    
    
    ((!customLabel2IsSet() && !rhs.customLabel2IsSet()) || (customLabel2IsSet() && rhs.customLabel2IsSet() && getCustomLabel2() == rhs.getCustomLabel2())) &&
    
    
    ((!customLabel3IsSet() && !rhs.customLabel3IsSet()) || (customLabel3IsSet() && rhs.customLabel3IsSet() && getCustomLabel3() == rhs.getCustomLabel3())) &&
    
    
    ((!customLabel4IsSet() && !rhs.customLabel4IsSet()) || (customLabel4IsSet() && rhs.customLabel4IsSet() && getCustomLabel4() == rhs.getCustomLabel4())) &&
    
    
    ((!descriptionIsSet() && !rhs.descriptionIsSet()) || (descriptionIsSet() && rhs.descriptionIsSet() && getDescription() == rhs.getDescription())) &&
    
    
    ((!freeShippingLabelIsSet() && !rhs.freeShippingLabelIsSet()) || (freeShippingLabelIsSet() && rhs.freeShippingLabelIsSet() && isFreeShippingLabel() == rhs.isFreeShippingLabel())) &&
    
    
    ((!freeShippingLimitIsSet() && !rhs.freeShippingLimitIsSet()) || (freeShippingLimitIsSet() && rhs.freeShippingLimitIsSet() && getFreeShippingLimit() == rhs.getFreeShippingLimit())) &&
    
    
    ((!genderIsSet() && !rhs.genderIsSet()) || (genderIsSet() && rhs.genderIsSet() && getGender() == rhs.getGender())) &&
    
    
    ((!googleProductCategoryIsSet() && !rhs.googleProductCategoryIsSet()) || (googleProductCategoryIsSet() && rhs.googleProductCategoryIsSet() && getGoogleProductCategory() == rhs.getGoogleProductCategory())) &&
    
    
    ((!gtinIsSet() && !rhs.gtinIsSet()) || (gtinIsSet() && rhs.gtinIsSet() && getGtin() == rhs.getGtin())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!itemGroupIdIsSet() && !rhs.itemGroupIdIsSet()) || (itemGroupIdIsSet() && rhs.itemGroupIdIsSet() && getItemGroupId() == rhs.getItemGroupId())) &&
    
    
    ((!lastUpdatedTimeIsSet() && !rhs.lastUpdatedTimeIsSet()) || (lastUpdatedTimeIsSet() && rhs.lastUpdatedTimeIsSet() && getLastUpdatedTime() == rhs.getLastUpdatedTime())) &&
    
    
    ((!linkIsSet() && !rhs.linkIsSet()) || (linkIsSet() && rhs.linkIsSet() && getLink() == rhs.getLink())) &&
    
    
    ((!materialIsSet() && !rhs.materialIsSet()) || (materialIsSet() && rhs.materialIsSet() && getMaterial() == rhs.getMaterial())) &&
    
    
    ((!minAdPriceIsSet() && !rhs.minAdPriceIsSet()) || (minAdPriceIsSet() && rhs.minAdPriceIsSet() && getMinAdPrice() == rhs.getMinAdPrice())) &&
    
    
    ((!mobileLinkIsSet() && !rhs.mobileLinkIsSet()) || (mobileLinkIsSet() && rhs.mobileLinkIsSet() && getMobileLink() == rhs.getMobileLink())) &&
    
    
    ((!mpnIsSet() && !rhs.mpnIsSet()) || (mpnIsSet() && rhs.mpnIsSet() && getMpn() == rhs.getMpn())) &&
    
    
    ((!numberOfRatingsIsSet() && !rhs.numberOfRatingsIsSet()) || (numberOfRatingsIsSet() && rhs.numberOfRatingsIsSet() && getNumberOfRatings() == rhs.getNumberOfRatings())) &&
    
    
    ((!numberOfReviewsIsSet() && !rhs.numberOfReviewsIsSet()) || (numberOfReviewsIsSet() && rhs.numberOfReviewsIsSet() && getNumberOfReviews() == rhs.getNumberOfReviews())) &&
    
    
    ((!patternIsSet() && !rhs.patternIsSet()) || (patternIsSet() && rhs.patternIsSet() && getPattern() == rhs.getPattern())) &&
    
    
    ((!priceIsSet() && !rhs.priceIsSet()) || (priceIsSet() && rhs.priceIsSet() && getPrice() == rhs.getPrice())) &&
    
    
    ((!productTypeIsSet() && !rhs.productTypeIsSet()) || (productTypeIsSet() && rhs.productTypeIsSet() && getProductType() == rhs.getProductType())) &&
    
    
    ((!salePriceIsSet() && !rhs.salePriceIsSet()) || (salePriceIsSet() && rhs.salePriceIsSet() && getSalePrice() == rhs.getSalePrice())) &&
    
    
    ((!shippingIsSet() && !rhs.shippingIsSet()) || (shippingIsSet() && rhs.shippingIsSet() && getShipping() == rhs.getShipping())) &&
    
    
    ((!shippingHeightIsSet() && !rhs.shippingHeightIsSet()) || (shippingHeightIsSet() && rhs.shippingHeightIsSet() && getShippingHeight() == rhs.getShippingHeight())) &&
    
    
    ((!shippingWeightIsSet() && !rhs.shippingWeightIsSet()) || (shippingWeightIsSet() && rhs.shippingWeightIsSet() && getShippingWeight() == rhs.getShippingWeight())) &&
    
    
    ((!shippingWidthIsSet() && !rhs.shippingWidthIsSet()) || (shippingWidthIsSet() && rhs.shippingWidthIsSet() && getShippingWidth() == rhs.getShippingWidth())) &&
    
    
    ((!sizeIsSet() && !rhs.sizeIsSet()) || (sizeIsSet() && rhs.sizeIsSet() && getSize() == rhs.getSize())) &&
    
    
    ((!sizeSystemIsSet() && !rhs.sizeSystemIsSet()) || (sizeSystemIsSet() && rhs.sizeSystemIsSet() && getSizeSystem() == rhs.getSizeSystem())) &&
    
    
    ((!sizeTypeIsSet() && !rhs.sizeTypeIsSet()) || (sizeTypeIsSet() && rhs.sizeTypeIsSet() && getSizeType() == rhs.getSizeType())) &&
    
    
    ((!taxIsSet() && !rhs.taxIsSet()) || (taxIsSet() && rhs.taxIsSet() && getTax() == rhs.getTax())) &&
    
    
    ((!titleIsSet() && !rhs.titleIsSet()) || (titleIsSet() && rhs.titleIsSet() && getTitle() == rhs.getTitle())) &&
    
    
    ((!variantNamesIsSet() && !rhs.variantNamesIsSet()) || (variantNamesIsSet() && rhs.variantNamesIsSet() && getVariantNames() == rhs.getVariantNames())) &&
    
    
    ((!variantValuesIsSet() && !rhs.variantValuesIsSet()) || (variantValuesIsSet() && rhs.variantValuesIsSet() && getVariantValues() == rhs.getVariantValues()))
    
    ;
}

bool UpdatableItemAttributes::operator!=(const UpdatableItemAttributes& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UpdatableItemAttributes& o)
{
    j = nlohmann::json::object();
    if(o.adLinkIsSet())
        j["ad_link"] = o.m_Ad_link;
    if(o.adultIsSet())
        j["adult"] = o.m_Adult;
    if(o.ageGroupIsSet())
        j["age_group"] = o.m_Age_group;
    if(o.availabilityIsSet())
        j["availability"] = o.m_Availability;
    if(o.averageReviewRatingIsSet())
        j["average_review_rating"] = o.m_Average_review_rating;
    if(o.brandIsSet())
        j["brand"] = o.m_Brand;
    if(o.checkoutEnabledIsSet())
        j["checkout_enabled"] = o.m_Checkout_enabled;
    if(o.colorIsSet())
        j["color"] = o.m_Color;
    if(o.conditionIsSet())
        j["condition"] = o.m_Condition;
    if(o.customLabel0IsSet())
        j["custom_label_0"] = o.m_Custom_label_0;
    if(o.customLabel1IsSet())
        j["custom_label_1"] = o.m_Custom_label_1;
    if(o.customLabel2IsSet())
        j["custom_label_2"] = o.m_Custom_label_2;
    if(o.customLabel3IsSet())
        j["custom_label_3"] = o.m_Custom_label_3;
    if(o.customLabel4IsSet())
        j["custom_label_4"] = o.m_Custom_label_4;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    if(o.freeShippingLabelIsSet())
        j["free_shipping_label"] = o.m_Free_shipping_label;
    if(o.freeShippingLimitIsSet())
        j["free_shipping_limit"] = o.m_Free_shipping_limit;
    if(o.genderIsSet())
        j["gender"] = o.m_Gender;
    if(o.googleProductCategoryIsSet())
        j["google_product_category"] = o.m_Google_product_category;
    if(o.gtinIsSet())
        j["gtin"] = o.m_Gtin;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.itemGroupIdIsSet())
        j["item_group_id"] = o.m_Item_group_id;
    if(o.lastUpdatedTimeIsSet())
        j["last_updated_time"] = o.m_Last_updated_time;
    if(o.linkIsSet())
        j["link"] = o.m_Link;
    if(o.materialIsSet())
        j["material"] = o.m_Material;
    if(o.minAdPriceIsSet())
        j["min_ad_price"] = o.m_Min_ad_price;
    if(o.mobileLinkIsSet())
        j["mobile_link"] = o.m_Mobile_link;
    if(o.mpnIsSet())
        j["mpn"] = o.m_Mpn;
    if(o.numberOfRatingsIsSet())
        j["number_of_ratings"] = o.m_Number_of_ratings;
    if(o.numberOfReviewsIsSet())
        j["number_of_reviews"] = o.m_Number_of_reviews;
    if(o.patternIsSet())
        j["pattern"] = o.m_Pattern;
    if(o.priceIsSet())
        j["price"] = o.m_Price;
    if(o.productTypeIsSet())
        j["product_type"] = o.m_Product_type;
    if(o.salePriceIsSet())
        j["sale_price"] = o.m_Sale_price;
    if(o.shippingIsSet())
        j["shipping"] = o.m_Shipping;
    if(o.shippingHeightIsSet())
        j["shipping_height"] = o.m_Shipping_height;
    if(o.shippingWeightIsSet())
        j["shipping_weight"] = o.m_Shipping_weight;
    if(o.shippingWidthIsSet())
        j["shipping_width"] = o.m_Shipping_width;
    if(o.sizeIsSet())
        j["size"] = o.m_Size;
    if(o.sizeSystemIsSet())
        j["size_system"] = o.m_Size_system;
    if(o.sizeTypeIsSet())
        j["size_type"] = o.m_Size_type;
    if(o.taxIsSet())
        j["tax"] = o.m_Tax;
    if(o.titleIsSet())
        j["title"] = o.m_Title;
    if(o.variantNamesIsSet() || !o.m_Variant_names.empty())
        j["variant_names"] = o.m_Variant_names;
    if(o.variantValuesIsSet() || !o.m_Variant_values.empty())
        j["variant_values"] = o.m_Variant_values;
    
}

void from_json(const nlohmann::json& j, UpdatableItemAttributes& o)
{
    if(j.find("ad_link") != j.end())
    {
        j.at("ad_link").get_to(o.m_Ad_link);
        o.m_Ad_linkIsSet = true;
    } 
    if(j.find("adult") != j.end())
    {
        j.at("adult").get_to(o.m_Adult);
        o.m_AdultIsSet = true;
    } 
    if(j.find("age_group") != j.end())
    {
        j.at("age_group").get_to(o.m_Age_group);
        o.m_Age_groupIsSet = true;
    } 
    if(j.find("availability") != j.end())
    {
        j.at("availability").get_to(o.m_Availability);
        o.m_AvailabilityIsSet = true;
    } 
    if(j.find("average_review_rating") != j.end())
    {
        j.at("average_review_rating").get_to(o.m_Average_review_rating);
        o.m_Average_review_ratingIsSet = true;
    } 
    if(j.find("brand") != j.end())
    {
        j.at("brand").get_to(o.m_Brand);
        o.m_BrandIsSet = true;
    } 
    if(j.find("checkout_enabled") != j.end())
    {
        j.at("checkout_enabled").get_to(o.m_Checkout_enabled);
        o.m_Checkout_enabledIsSet = true;
    } 
    if(j.find("color") != j.end())
    {
        j.at("color").get_to(o.m_Color);
        o.m_ColorIsSet = true;
    } 
    if(j.find("condition") != j.end())
    {
        j.at("condition").get_to(o.m_Condition);
        o.m_ConditionIsSet = true;
    } 
    if(j.find("custom_label_0") != j.end())
    {
        j.at("custom_label_0").get_to(o.m_Custom_label_0);
        o.m_Custom_label_0IsSet = true;
    } 
    if(j.find("custom_label_1") != j.end())
    {
        j.at("custom_label_1").get_to(o.m_Custom_label_1);
        o.m_Custom_label_1IsSet = true;
    } 
    if(j.find("custom_label_2") != j.end())
    {
        j.at("custom_label_2").get_to(o.m_Custom_label_2);
        o.m_Custom_label_2IsSet = true;
    } 
    if(j.find("custom_label_3") != j.end())
    {
        j.at("custom_label_3").get_to(o.m_Custom_label_3);
        o.m_Custom_label_3IsSet = true;
    } 
    if(j.find("custom_label_4") != j.end())
    {
        j.at("custom_label_4").get_to(o.m_Custom_label_4);
        o.m_Custom_label_4IsSet = true;
    } 
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    if(j.find("free_shipping_label") != j.end())
    {
        j.at("free_shipping_label").get_to(o.m_Free_shipping_label);
        o.m_Free_shipping_labelIsSet = true;
    } 
    if(j.find("free_shipping_limit") != j.end())
    {
        j.at("free_shipping_limit").get_to(o.m_Free_shipping_limit);
        o.m_Free_shipping_limitIsSet = true;
    } 
    if(j.find("gender") != j.end())
    {
        j.at("gender").get_to(o.m_Gender);
        o.m_GenderIsSet = true;
    } 
    if(j.find("google_product_category") != j.end())
    {
        j.at("google_product_category").get_to(o.m_Google_product_category);
        o.m_Google_product_categoryIsSet = true;
    } 
    if(j.find("gtin") != j.end())
    {
        j.at("gtin").get_to(o.m_Gtin);
        o.m_GtinIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("item_group_id") != j.end())
    {
        j.at("item_group_id").get_to(o.m_Item_group_id);
        o.m_Item_group_idIsSet = true;
    } 
    if(j.find("last_updated_time") != j.end())
    {
        j.at("last_updated_time").get_to(o.m_Last_updated_time);
        o.m_Last_updated_timeIsSet = true;
    } 
    if(j.find("link") != j.end())
    {
        j.at("link").get_to(o.m_Link);
        o.m_LinkIsSet = true;
    } 
    if(j.find("material") != j.end())
    {
        j.at("material").get_to(o.m_Material);
        o.m_MaterialIsSet = true;
    } 
    if(j.find("min_ad_price") != j.end())
    {
        j.at("min_ad_price").get_to(o.m_Min_ad_price);
        o.m_Min_ad_priceIsSet = true;
    } 
    if(j.find("mobile_link") != j.end())
    {
        j.at("mobile_link").get_to(o.m_Mobile_link);
        o.m_Mobile_linkIsSet = true;
    } 
    if(j.find("mpn") != j.end())
    {
        j.at("mpn").get_to(o.m_Mpn);
        o.m_MpnIsSet = true;
    } 
    if(j.find("number_of_ratings") != j.end())
    {
        j.at("number_of_ratings").get_to(o.m_Number_of_ratings);
        o.m_Number_of_ratingsIsSet = true;
    } 
    if(j.find("number_of_reviews") != j.end())
    {
        j.at("number_of_reviews").get_to(o.m_Number_of_reviews);
        o.m_Number_of_reviewsIsSet = true;
    } 
    if(j.find("pattern") != j.end())
    {
        j.at("pattern").get_to(o.m_Pattern);
        o.m_PatternIsSet = true;
    } 
    if(j.find("price") != j.end())
    {
        j.at("price").get_to(o.m_Price);
        o.m_PriceIsSet = true;
    } 
    if(j.find("product_type") != j.end())
    {
        j.at("product_type").get_to(o.m_Product_type);
        o.m_Product_typeIsSet = true;
    } 
    if(j.find("sale_price") != j.end())
    {
        j.at("sale_price").get_to(o.m_Sale_price);
        o.m_Sale_priceIsSet = true;
    } 
    if(j.find("shipping") != j.end())
    {
        j.at("shipping").get_to(o.m_Shipping);
        o.m_ShippingIsSet = true;
    } 
    if(j.find("shipping_height") != j.end())
    {
        j.at("shipping_height").get_to(o.m_Shipping_height);
        o.m_Shipping_heightIsSet = true;
    } 
    if(j.find("shipping_weight") != j.end())
    {
        j.at("shipping_weight").get_to(o.m_Shipping_weight);
        o.m_Shipping_weightIsSet = true;
    } 
    if(j.find("shipping_width") != j.end())
    {
        j.at("shipping_width").get_to(o.m_Shipping_width);
        o.m_Shipping_widthIsSet = true;
    } 
    if(j.find("size") != j.end())
    {
        j.at("size").get_to(o.m_Size);
        o.m_SizeIsSet = true;
    } 
    if(j.find("size_system") != j.end())
    {
        j.at("size_system").get_to(o.m_Size_system);
        o.m_Size_systemIsSet = true;
    } 
    if(j.find("size_type") != j.end())
    {
        j.at("size_type").get_to(o.m_Size_type);
        o.m_Size_typeIsSet = true;
    } 
    if(j.find("tax") != j.end())
    {
        j.at("tax").get_to(o.m_Tax);
        o.m_TaxIsSet = true;
    } 
    if(j.find("title") != j.end())
    {
        j.at("title").get_to(o.m_Title);
        o.m_TitleIsSet = true;
    } 
    if(j.find("variant_names") != j.end())
    {
        j.at("variant_names").get_to(o.m_Variant_names);
        o.m_Variant_namesIsSet = true;
    } 
    if(j.find("variant_values") != j.end())
    {
        j.at("variant_values").get_to(o.m_Variant_values);
        o.m_Variant_valuesIsSet = true;
    } 
    
}

std::string UpdatableItemAttributes::getAdLink() const
{
    return m_Ad_link;
}
void UpdatableItemAttributes::setAdLink(std::string const& value)
{
    m_Ad_link = value;
    m_Ad_linkIsSet = true;
}
bool UpdatableItemAttributes::adLinkIsSet() const
{
    return m_Ad_linkIsSet;
}
void UpdatableItemAttributes::unsetAd_link()
{
    m_Ad_linkIsSet = false;
}
bool UpdatableItemAttributes::isAdult() const
{
    return m_Adult;
}
void UpdatableItemAttributes::setAdult(bool const value)
{
    m_Adult = value;
    m_AdultIsSet = true;
}
bool UpdatableItemAttributes::adultIsSet() const
{
    return m_AdultIsSet;
}
void UpdatableItemAttributes::unsetAdult()
{
    m_AdultIsSet = false;
}
std::string UpdatableItemAttributes::getAgeGroup() const
{
    return m_Age_group;
}
void UpdatableItemAttributes::setAgeGroup(std::string const& value)
{
    m_Age_group = value;
    m_Age_groupIsSet = true;
}
bool UpdatableItemAttributes::ageGroupIsSet() const
{
    return m_Age_groupIsSet;
}
void UpdatableItemAttributes::unsetAge_group()
{
    m_Age_groupIsSet = false;
}
std::string UpdatableItemAttributes::getAvailability() const
{
    return m_Availability;
}
void UpdatableItemAttributes::setAvailability(std::string const& value)
{
    m_Availability = value;
    m_AvailabilityIsSet = true;
}
bool UpdatableItemAttributes::availabilityIsSet() const
{
    return m_AvailabilityIsSet;
}
void UpdatableItemAttributes::unsetAvailability()
{
    m_AvailabilityIsSet = false;
}
double UpdatableItemAttributes::getAverageReviewRating() const
{
    return m_Average_review_rating;
}
void UpdatableItemAttributes::setAverageReviewRating(double const value)
{
    m_Average_review_rating = value;
    m_Average_review_ratingIsSet = true;
}
bool UpdatableItemAttributes::averageReviewRatingIsSet() const
{
    return m_Average_review_ratingIsSet;
}
void UpdatableItemAttributes::unsetAverage_review_rating()
{
    m_Average_review_ratingIsSet = false;
}
std::string UpdatableItemAttributes::getBrand() const
{
    return m_Brand;
}
void UpdatableItemAttributes::setBrand(std::string const& value)
{
    m_Brand = value;
    m_BrandIsSet = true;
}
bool UpdatableItemAttributes::brandIsSet() const
{
    return m_BrandIsSet;
}
void UpdatableItemAttributes::unsetBrand()
{
    m_BrandIsSet = false;
}
bool UpdatableItemAttributes::isCheckoutEnabled() const
{
    return m_Checkout_enabled;
}
void UpdatableItemAttributes::setCheckoutEnabled(bool const value)
{
    m_Checkout_enabled = value;
    m_Checkout_enabledIsSet = true;
}
bool UpdatableItemAttributes::checkoutEnabledIsSet() const
{
    return m_Checkout_enabledIsSet;
}
void UpdatableItemAttributes::unsetCheckout_enabled()
{
    m_Checkout_enabledIsSet = false;
}
std::string UpdatableItemAttributes::getColor() const
{
    return m_Color;
}
void UpdatableItemAttributes::setColor(std::string const& value)
{
    m_Color = value;
    m_ColorIsSet = true;
}
bool UpdatableItemAttributes::colorIsSet() const
{
    return m_ColorIsSet;
}
void UpdatableItemAttributes::unsetColor()
{
    m_ColorIsSet = false;
}
std::string UpdatableItemAttributes::getCondition() const
{
    return m_Condition;
}
void UpdatableItemAttributes::setCondition(std::string const& value)
{
    m_Condition = value;
    m_ConditionIsSet = true;
}
bool UpdatableItemAttributes::conditionIsSet() const
{
    return m_ConditionIsSet;
}
void UpdatableItemAttributes::unsetCondition()
{
    m_ConditionIsSet = false;
}
std::string UpdatableItemAttributes::getCustomLabel0() const
{
    return m_Custom_label_0;
}
void UpdatableItemAttributes::setCustomLabel0(std::string const& value)
{
    m_Custom_label_0 = value;
    m_Custom_label_0IsSet = true;
}
bool UpdatableItemAttributes::customLabel0IsSet() const
{
    return m_Custom_label_0IsSet;
}
void UpdatableItemAttributes::unsetCustom_label_0()
{
    m_Custom_label_0IsSet = false;
}
std::string UpdatableItemAttributes::getCustomLabel1() const
{
    return m_Custom_label_1;
}
void UpdatableItemAttributes::setCustomLabel1(std::string const& value)
{
    m_Custom_label_1 = value;
    m_Custom_label_1IsSet = true;
}
bool UpdatableItemAttributes::customLabel1IsSet() const
{
    return m_Custom_label_1IsSet;
}
void UpdatableItemAttributes::unsetCustom_label_1()
{
    m_Custom_label_1IsSet = false;
}
std::string UpdatableItemAttributes::getCustomLabel2() const
{
    return m_Custom_label_2;
}
void UpdatableItemAttributes::setCustomLabel2(std::string const& value)
{
    m_Custom_label_2 = value;
    m_Custom_label_2IsSet = true;
}
bool UpdatableItemAttributes::customLabel2IsSet() const
{
    return m_Custom_label_2IsSet;
}
void UpdatableItemAttributes::unsetCustom_label_2()
{
    m_Custom_label_2IsSet = false;
}
std::string UpdatableItemAttributes::getCustomLabel3() const
{
    return m_Custom_label_3;
}
void UpdatableItemAttributes::setCustomLabel3(std::string const& value)
{
    m_Custom_label_3 = value;
    m_Custom_label_3IsSet = true;
}
bool UpdatableItemAttributes::customLabel3IsSet() const
{
    return m_Custom_label_3IsSet;
}
void UpdatableItemAttributes::unsetCustom_label_3()
{
    m_Custom_label_3IsSet = false;
}
std::string UpdatableItemAttributes::getCustomLabel4() const
{
    return m_Custom_label_4;
}
void UpdatableItemAttributes::setCustomLabel4(std::string const& value)
{
    m_Custom_label_4 = value;
    m_Custom_label_4IsSet = true;
}
bool UpdatableItemAttributes::customLabel4IsSet() const
{
    return m_Custom_label_4IsSet;
}
void UpdatableItemAttributes::unsetCustom_label_4()
{
    m_Custom_label_4IsSet = false;
}
std::string UpdatableItemAttributes::getDescription() const
{
    return m_Description;
}
void UpdatableItemAttributes::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool UpdatableItemAttributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void UpdatableItemAttributes::unsetDescription()
{
    m_DescriptionIsSet = false;
}
bool UpdatableItemAttributes::isFreeShippingLabel() const
{
    return m_Free_shipping_label;
}
void UpdatableItemAttributes::setFreeShippingLabel(bool const value)
{
    m_Free_shipping_label = value;
    m_Free_shipping_labelIsSet = true;
}
bool UpdatableItemAttributes::freeShippingLabelIsSet() const
{
    return m_Free_shipping_labelIsSet;
}
void UpdatableItemAttributes::unsetFree_shipping_label()
{
    m_Free_shipping_labelIsSet = false;
}
std::string UpdatableItemAttributes::getFreeShippingLimit() const
{
    return m_Free_shipping_limit;
}
void UpdatableItemAttributes::setFreeShippingLimit(std::string const& value)
{
    m_Free_shipping_limit = value;
    m_Free_shipping_limitIsSet = true;
}
bool UpdatableItemAttributes::freeShippingLimitIsSet() const
{
    return m_Free_shipping_limitIsSet;
}
void UpdatableItemAttributes::unsetFree_shipping_limit()
{
    m_Free_shipping_limitIsSet = false;
}
std::string UpdatableItemAttributes::getGender() const
{
    return m_Gender;
}
void UpdatableItemAttributes::setGender(std::string const& value)
{
    m_Gender = value;
    m_GenderIsSet = true;
}
bool UpdatableItemAttributes::genderIsSet() const
{
    return m_GenderIsSet;
}
void UpdatableItemAttributes::unsetGender()
{
    m_GenderIsSet = false;
}
std::string UpdatableItemAttributes::getGoogleProductCategory() const
{
    return m_Google_product_category;
}
void UpdatableItemAttributes::setGoogleProductCategory(std::string const& value)
{
    m_Google_product_category = value;
    m_Google_product_categoryIsSet = true;
}
bool UpdatableItemAttributes::googleProductCategoryIsSet() const
{
    return m_Google_product_categoryIsSet;
}
void UpdatableItemAttributes::unsetGoogle_product_category()
{
    m_Google_product_categoryIsSet = false;
}
int32_t UpdatableItemAttributes::getGtin() const
{
    return m_Gtin;
}
void UpdatableItemAttributes::setGtin(int32_t const value)
{
    m_Gtin = value;
    m_GtinIsSet = true;
}
bool UpdatableItemAttributes::gtinIsSet() const
{
    return m_GtinIsSet;
}
void UpdatableItemAttributes::unsetGtin()
{
    m_GtinIsSet = false;
}
std::string UpdatableItemAttributes::getId() const
{
    return m_Id;
}
void UpdatableItemAttributes::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool UpdatableItemAttributes::idIsSet() const
{
    return m_IdIsSet;
}
void UpdatableItemAttributes::unsetId()
{
    m_IdIsSet = false;
}
std::string UpdatableItemAttributes::getItemGroupId() const
{
    return m_Item_group_id;
}
void UpdatableItemAttributes::setItemGroupId(std::string const& value)
{
    m_Item_group_id = value;
    m_Item_group_idIsSet = true;
}
bool UpdatableItemAttributes::itemGroupIdIsSet() const
{
    return m_Item_group_idIsSet;
}
void UpdatableItemAttributes::unsetItem_group_id()
{
    m_Item_group_idIsSet = false;
}
int64_t UpdatableItemAttributes::getLastUpdatedTime() const
{
    return m_Last_updated_time;
}
void UpdatableItemAttributes::setLastUpdatedTime(int64_t const value)
{
    m_Last_updated_time = value;
    m_Last_updated_timeIsSet = true;
}
bool UpdatableItemAttributes::lastUpdatedTimeIsSet() const
{
    return m_Last_updated_timeIsSet;
}
void UpdatableItemAttributes::unsetLast_updated_time()
{
    m_Last_updated_timeIsSet = false;
}
std::string UpdatableItemAttributes::getLink() const
{
    return m_Link;
}
void UpdatableItemAttributes::setLink(std::string const& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}
bool UpdatableItemAttributes::linkIsSet() const
{
    return m_LinkIsSet;
}
void UpdatableItemAttributes::unsetLink()
{
    m_LinkIsSet = false;
}
std::string UpdatableItemAttributes::getMaterial() const
{
    return m_Material;
}
void UpdatableItemAttributes::setMaterial(std::string const& value)
{
    m_Material = value;
    m_MaterialIsSet = true;
}
bool UpdatableItemAttributes::materialIsSet() const
{
    return m_MaterialIsSet;
}
void UpdatableItemAttributes::unsetMaterial()
{
    m_MaterialIsSet = false;
}
std::string UpdatableItemAttributes::getMinAdPrice() const
{
    return m_Min_ad_price;
}
void UpdatableItemAttributes::setMinAdPrice(std::string const& value)
{
    m_Min_ad_price = value;
    m_Min_ad_priceIsSet = true;
}
bool UpdatableItemAttributes::minAdPriceIsSet() const
{
    return m_Min_ad_priceIsSet;
}
void UpdatableItemAttributes::unsetMin_ad_price()
{
    m_Min_ad_priceIsSet = false;
}
std::string UpdatableItemAttributes::getMobileLink() const
{
    return m_Mobile_link;
}
void UpdatableItemAttributes::setMobileLink(std::string const& value)
{
    m_Mobile_link = value;
    m_Mobile_linkIsSet = true;
}
bool UpdatableItemAttributes::mobileLinkIsSet() const
{
    return m_Mobile_linkIsSet;
}
void UpdatableItemAttributes::unsetMobile_link()
{
    m_Mobile_linkIsSet = false;
}
std::string UpdatableItemAttributes::getMpn() const
{
    return m_Mpn;
}
void UpdatableItemAttributes::setMpn(std::string const& value)
{
    m_Mpn = value;
    m_MpnIsSet = true;
}
bool UpdatableItemAttributes::mpnIsSet() const
{
    return m_MpnIsSet;
}
void UpdatableItemAttributes::unsetMpn()
{
    m_MpnIsSet = false;
}
int32_t UpdatableItemAttributes::getNumberOfRatings() const
{
    return m_Number_of_ratings;
}
void UpdatableItemAttributes::setNumberOfRatings(int32_t const value)
{
    m_Number_of_ratings = value;
    m_Number_of_ratingsIsSet = true;
}
bool UpdatableItemAttributes::numberOfRatingsIsSet() const
{
    return m_Number_of_ratingsIsSet;
}
void UpdatableItemAttributes::unsetNumber_of_ratings()
{
    m_Number_of_ratingsIsSet = false;
}
int32_t UpdatableItemAttributes::getNumberOfReviews() const
{
    return m_Number_of_reviews;
}
void UpdatableItemAttributes::setNumberOfReviews(int32_t const value)
{
    m_Number_of_reviews = value;
    m_Number_of_reviewsIsSet = true;
}
bool UpdatableItemAttributes::numberOfReviewsIsSet() const
{
    return m_Number_of_reviewsIsSet;
}
void UpdatableItemAttributes::unsetNumber_of_reviews()
{
    m_Number_of_reviewsIsSet = false;
}
std::string UpdatableItemAttributes::getPattern() const
{
    return m_Pattern;
}
void UpdatableItemAttributes::setPattern(std::string const& value)
{
    m_Pattern = value;
    m_PatternIsSet = true;
}
bool UpdatableItemAttributes::patternIsSet() const
{
    return m_PatternIsSet;
}
void UpdatableItemAttributes::unsetPattern()
{
    m_PatternIsSet = false;
}
std::string UpdatableItemAttributes::getPrice() const
{
    return m_Price;
}
void UpdatableItemAttributes::setPrice(std::string const& value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool UpdatableItemAttributes::priceIsSet() const
{
    return m_PriceIsSet;
}
void UpdatableItemAttributes::unsetPrice()
{
    m_PriceIsSet = false;
}
std::string UpdatableItemAttributes::getProductType() const
{
    return m_Product_type;
}
void UpdatableItemAttributes::setProductType(std::string const& value)
{
    m_Product_type = value;
    m_Product_typeIsSet = true;
}
bool UpdatableItemAttributes::productTypeIsSet() const
{
    return m_Product_typeIsSet;
}
void UpdatableItemAttributes::unsetProduct_type()
{
    m_Product_typeIsSet = false;
}
std::string UpdatableItemAttributes::getSalePrice() const
{
    return m_Sale_price;
}
void UpdatableItemAttributes::setSalePrice(std::string const& value)
{
    m_Sale_price = value;
    m_Sale_priceIsSet = true;
}
bool UpdatableItemAttributes::salePriceIsSet() const
{
    return m_Sale_priceIsSet;
}
void UpdatableItemAttributes::unsetSale_price()
{
    m_Sale_priceIsSet = false;
}
std::string UpdatableItemAttributes::getShipping() const
{
    return m_Shipping;
}
void UpdatableItemAttributes::setShipping(std::string const& value)
{
    m_Shipping = value;
    m_ShippingIsSet = true;
}
bool UpdatableItemAttributes::shippingIsSet() const
{
    return m_ShippingIsSet;
}
void UpdatableItemAttributes::unsetShipping()
{
    m_ShippingIsSet = false;
}
std::string UpdatableItemAttributes::getShippingHeight() const
{
    return m_Shipping_height;
}
void UpdatableItemAttributes::setShippingHeight(std::string const& value)
{
    m_Shipping_height = value;
    m_Shipping_heightIsSet = true;
}
bool UpdatableItemAttributes::shippingHeightIsSet() const
{
    return m_Shipping_heightIsSet;
}
void UpdatableItemAttributes::unsetShipping_height()
{
    m_Shipping_heightIsSet = false;
}
std::string UpdatableItemAttributes::getShippingWeight() const
{
    return m_Shipping_weight;
}
void UpdatableItemAttributes::setShippingWeight(std::string const& value)
{
    m_Shipping_weight = value;
    m_Shipping_weightIsSet = true;
}
bool UpdatableItemAttributes::shippingWeightIsSet() const
{
    return m_Shipping_weightIsSet;
}
void UpdatableItemAttributes::unsetShipping_weight()
{
    m_Shipping_weightIsSet = false;
}
std::string UpdatableItemAttributes::getShippingWidth() const
{
    return m_Shipping_width;
}
void UpdatableItemAttributes::setShippingWidth(std::string const& value)
{
    m_Shipping_width = value;
    m_Shipping_widthIsSet = true;
}
bool UpdatableItemAttributes::shippingWidthIsSet() const
{
    return m_Shipping_widthIsSet;
}
void UpdatableItemAttributes::unsetShipping_width()
{
    m_Shipping_widthIsSet = false;
}
std::string UpdatableItemAttributes::getSize() const
{
    return m_Size;
}
void UpdatableItemAttributes::setSize(std::string const& value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool UpdatableItemAttributes::sizeIsSet() const
{
    return m_SizeIsSet;
}
void UpdatableItemAttributes::unsetSize()
{
    m_SizeIsSet = false;
}
std::string UpdatableItemAttributes::getSizeSystem() const
{
    return m_Size_system;
}
void UpdatableItemAttributes::setSizeSystem(std::string const& value)
{
    m_Size_system = value;
    m_Size_systemIsSet = true;
}
bool UpdatableItemAttributes::sizeSystemIsSet() const
{
    return m_Size_systemIsSet;
}
void UpdatableItemAttributes::unsetSize_system()
{
    m_Size_systemIsSet = false;
}
std::string UpdatableItemAttributes::getSizeType() const
{
    return m_Size_type;
}
void UpdatableItemAttributes::setSizeType(std::string const& value)
{
    m_Size_type = value;
    m_Size_typeIsSet = true;
}
bool UpdatableItemAttributes::sizeTypeIsSet() const
{
    return m_Size_typeIsSet;
}
void UpdatableItemAttributes::unsetSize_type()
{
    m_Size_typeIsSet = false;
}
std::string UpdatableItemAttributes::getTax() const
{
    return m_Tax;
}
void UpdatableItemAttributes::setTax(std::string const& value)
{
    m_Tax = value;
    m_TaxIsSet = true;
}
bool UpdatableItemAttributes::taxIsSet() const
{
    return m_TaxIsSet;
}
void UpdatableItemAttributes::unsetTax()
{
    m_TaxIsSet = false;
}
std::string UpdatableItemAttributes::getTitle() const
{
    return m_Title;
}
void UpdatableItemAttributes::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool UpdatableItemAttributes::titleIsSet() const
{
    return m_TitleIsSet;
}
void UpdatableItemAttributes::unsetTitle()
{
    m_TitleIsSet = false;
}
std::vector<std::string> UpdatableItemAttributes::getVariantNames() const
{
    return m_Variant_names;
}
void UpdatableItemAttributes::setVariantNames(std::vector<std::string> const& value)
{
    m_Variant_names = value;
    m_Variant_namesIsSet = true;
}
bool UpdatableItemAttributes::variantNamesIsSet() const
{
    return m_Variant_namesIsSet;
}
void UpdatableItemAttributes::unsetVariant_names()
{
    m_Variant_namesIsSet = false;
}
std::vector<std::string> UpdatableItemAttributes::getVariantValues() const
{
    return m_Variant_values;
}
void UpdatableItemAttributes::setVariantValues(std::vector<std::string> const& value)
{
    m_Variant_values = value;
    m_Variant_valuesIsSet = true;
}
bool UpdatableItemAttributes::variantValuesIsSet() const
{
    return m_Variant_valuesIsSet;
}
void UpdatableItemAttributes::unsetVariant_values()
{
    m_Variant_valuesIsSet = false;
}


} // namespace org::openapitools::server::model

